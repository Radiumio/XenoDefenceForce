/*
BIS_fnc_RailGun_AX_01_chargingStart
*/
//#define DEBUG

params["_vehicle","_weapon","_muzzle","","","","_p","_gunner"];

// only for local vehicles
if(isManualFire _vehicle)then
{
	_gunner = commander _vehicle;
};
if(!(_vehicle turretLocal (_vehicle unitTurret _gunner))  )exitWith{};

#ifdef DEBUG
systemChat format["start %1 %2",_gunner,time];
#endif

private _ammo		= _vehicle magazineTurretAmmo ["AX_RailGun_01_DummyMagazine", [0]];
_vehicle setMagazineTurretAmmo ["AX_RailGun_01_DummyMagazine",_ammo+1,[0]];

private _damageEngine = _vehicle getHitPointDamage "HitEngine";
private _damageGun = _vehicle getHitPointDamage "HitGun";
_vehicle setUserMFDValue [4, _damageEngine];
_vehicle setUserMFDValue [5, _damageGun];


// Exit if there is no fuel or if engine is destroyed
if(fuel _vehicle < 0.1 || (_damageEngine isEqualTo 1) || (_damageGun isEqualTo 1))exitWith
{
	if(player in _vehicle)then
	{
		playSound ["Alarm",true];
	};
};

_vehicle engineOn true;
[_vehicle,"CustomSoundController1",1,0.1] remoteExecCall ["BIS_fnc_setCustomSoundController",0];

private _condition = {inputAction "defaultAction" isEqualTo 0};
if(
   (_gunner != missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player] ) &&
   !( (isManualFire _vehicle) && (commander _vehicle == missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]) )
)then
{
	_condition = {(time > ((_this # 1) - random[-3,0,3])) || ((assignedTarget (_this # 2)) == objNull)};
};


private _pfh = "bis_pfh_railgun_" + str(_vehicle);
[_pfh, "onEachFrame", "BIS_fnc_RailGun_AX_01_charging", [time+2,time+7,_vehicle,false,time,_ammo,_condition,time+0.1,_gunner,_pfh]] call BIS_fnc_addStackedEventHandler;