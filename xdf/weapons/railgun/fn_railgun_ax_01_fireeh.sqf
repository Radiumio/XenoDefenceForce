/*
	bis_fnc_RailGun_AX_01_fireEH
*/
params["_vehicle","_weapon","_muzzle","","","","_p","_gunner"];

private _muzzleCoef = _vehicle getVariable ["BIS_MuzzleCoef",1];

// Increase speed of projectile according to muzzleCoef
_p setVelocity ((velocity _p) vectorMultiply _muzzleCoef);