/*
BIS_fnc_RailGun_AX_01_charging
*/
//#define DEBUG

if (isGamePaused) exitwith {};
params["_time","_timeFull","_vehicle","_loopSound","_start","_ammo","_condition","_refresh","_gunner","_pfh"];

private _gunnerCondition = (gunner _vehicle) isNotEqualTo _gunner;
if(isManualFire _vehicle)then
{
	_gunnerCondition = (commander _vehicle) isNotEqualTo _gunner;
};

// Release of key
if((!alive _vehicle) || _gunnerCondition || !(alive _gunner) || (_this call _condition))exitWith
{
	#ifdef DEBUG
	systemChat format["trying to fire %1 %2",_time,time];
	#endif

	private _gunOverheat = ((getVehicleTiPars _vehicle) # 2) > 0.9;

	// Key was released - intialize action
	if(time > _time && !_gunOverheat && !_gunnerCondition && (alive _gunner))then
	{
		// Fire weapon
		#ifdef DEBUG
		player sideChat "fire sucesfull";
		#endif

		// Reduce ammount of fuel (source of cannon power)
		// Adjust temperature - temperature will be adjusted by script
		_vehicle setMagazineTurretAmmo ["AX_RailGun_01_DummyMagazine",_ammo,[0]];

		// Switch to hidden muzzle & fire it
		private _fakeGunner = objNull;
		if(gunner _vehicle isEqualTo objNull)then
		{
			_fakeGunner = createAgent ["VirtualMan_F", [0,0,10000], [], 0, "CAN_COLLIDE"];
			_fakeGunner moveInGunner _vehicle;
		};
		[_vehicle, "cannon_AX_railgun"] call BIS_fnc_fire;
		if(_fakeGunner isNotEqualTo objNull)then{deleteVehicle _fakeGunner};

		// Let's give some time for game so it properly switches to selected muzzle & in next frame switch it back to player one
		_vehicle spawn {sleep 0.001;_this selectWeapon "cannon_AX_railgun_fake";};

		_vehicle setWeaponReloadingTime [gunner _vehicle,"cannon_AX_railgun_fake",0.5];
		[_vehicle,"CustomSoundController1",0,0.01] remoteExecCall ["BIS_fnc_setCustomSoundController"];
		_vehicle setUserMFDValue [0, 0];
		[_vehicle,1,0.3,2+random(1)] call BIS_fnc_interpolateMFDValue;

	}else{
		_vehicle setWeaponReloadingTime [gunner _vehicle,"cannon_AX_railgun_fake",1];
		// Weapon was not fully charged, charging failed
		[_vehicle,"CustomSoundController1",0,6] remoteExecCall ["BIS_fnc_setCustomSoundController"];
		_vehicle setUserMFDValue [0, 0];
		[_vehicle,1,0.3,6+random(2)] call BIS_fnc_interpolateMFDValue;
		if(_gunOverheat)then
		{
			playSound ["Alarm",true];
			_vehicle setHitPointDamage ["HitGun",1];
		};

	};
	[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};
_vehicle setWeaponReloadingTime [gunner _vehicle,"cannon_AX_railgun_fake",linearConversion [_start,_time,time,1,0,true]];
_vehicle setUserMFDValue [0, linearConversion [_start,_timeFull,time,0,1,true]];
_vehicle setUserMFDValue [1, 0.3 +random(0.01)+ linearConversion [_start+0.01,_time,time,0,0.6,true] - linearConversion [_time,_timeFull,time,0.0,0.3,true]];

#ifdef DEBUG
hintSilent format["Ready: %1\n%2",linearConversion [_start,_time,time,1,0,true],linearConversion [_time,_timeFull,time,0.3,1.3,true]];
#endif

// Initialize charging sequence once left mouse button is pressed & when gun is ready to fire
if(time > _time )then
{
	_vehicle setVariable ["BIS_MuzzleCoef",linearConversion [_time,_timeFull,time,0.3,1.2,true]];

	// When Cannon is fully charged switch sound to loop
	if(!_loopSound)then
	{
		[_vehicle,"CustomSoundController1",2,_timeFull-_time] remoteExecCall ["BIS_fnc_setCustomSoundController"];
		_this set [3,true];
	};
};
if(time > _refresh)then
{
	private _fuelFactor = 0.0025;
	if(time > _timeFull)then{_fuelFactor = 0.001};
	_vehicle setFuel (fuel _vehicle - _fuelFactor);
	_this set [7,time+0.5];
};