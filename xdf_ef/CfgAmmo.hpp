class CfgAmmo
{
	class EF_B_30mm_HEAB;
	class EF_B_30mm_HEABAX: EF_B_30mm_HEAB
	{
		hit = 50;
		indirectHit = 12;
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class EF_B_30mm_HEDP;
	class EF_B_30mm_HEDPAX: EF_B_30mm_HEDP
	{
		hit = 60;
		model="xdf\weapons\tracer_blue\tracer_blue";
		submunitionAmmo = "EF_ammo_Penetrator_30mm_HEDPAX";
	};
	class EF_ammo_Penetrator_30mm_HEDP;
	class EF_ammo_Penetrator_30mm_HEDPAX: EF_ammo_Penetrator_30mm_HEDP
	{
		hit = 80; // Default 62.5
	};
	class EF_Ammo_Titan_NLOS;
	class EF_Ammo_Titan_NLOS_AX: EF_Ammo_Titan_NLOS
	{
		hit = 700;
		indirectHit = 400;
		effectsMissile = "XDF_Missile3";
		submunitionAmmo = "EF_ammo_Penetrator_Titan_NLOS_AX";
	};
	class EF_ammo_Penetrator_Titan_NLOS;
	class EF_ammo_Penetrator_Titan_NLOS_AX: EF_ammo_Penetrator_Titan_NLOS
	{
		hit = 1800; // Default 900
	};
	class EF_ammo_Missile_Sidearm;
	class EF_ammo_Missile_Sidearm_AX: EF_ammo_Missile_Sidearm
	{
		hit = 2500;
		indirectHit = 800;
		thrust = 250;
		maxSpeed = 1200;
		effectsMissile = "XDF_Missile3";
	};
};