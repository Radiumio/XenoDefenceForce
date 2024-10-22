class Components;
class SensorTemplateIR;
class CfgAmmo
{
	class M_Titan_AA;
	class M_Titan_AA_XDF: M_Titan_AA
	{
		hit=1200;
		indirectHit=1000;
		indirectHitRange=8;
		manuevrability=25;
		maxSpeed=1050;
		thrust=550;
		effectsMissile="XDF_Missile3";
	};
	class M_Titan_AT;
	class M_Titan_AT_XDF: M_Titan_AT
	{
		hit=800;
		indirectHit=200;
		indirectHitRange=4;
		submunitionAmmo="ammo_Penetrator_Titan_AT_XDF";
		manuevrability=28;
		maxSpeed=250;
		thrust=150;
		effectsMissile="XDF_Missile3";
	};
	class R_MRAAWS_HEAT_F;
	class R_MRAAWS_HEAT_XDF: R_MRAAWS_HEAT_F
	{
		hit=800;
		indirectHit=25;
		indirectHitRange=3;
		submunitionAmmo="ammo_Penetrator_MRAAWS_XDF";
	};
	class M_Vorona_HEAT;
	class M_Vorona_HEAT_XDF: M_Vorona_HEAT
	{
		hit=950;
		indirectHit=50;
		indirectHitRange=4;
		maxSpeed=350;
		submunitionAmmo="ammo_Penetrator_Vorona_XDF";
		effectsMissile="XDF_Missile3";
	};
	class R_MRAAWS_HEAT55_F;
	class R_MRAAWS_HEAT55_XDF: R_MRAAWS_HEAT55_F
	{
		hit=400;
		submunitionAmmo="ammo_Penetrator_MRAAWS_HEAT55_XDF";
	};
	//class R_MRAAWS_HE_F;
	//class R_MRAAWS_HE_NUKE_XDF: R_MRAAWS_HE_F
	//{
	//	hit=3000;
	//	indirectHit=2500;
	//	indirectHitRange=250;
	//	CraterEffects="BombCrater";
	//	ExplosionEffects="BombExplosion";
	//};
	class ammo_Penetrator_Base;
	class ammo_Penetrator_Titan_AT_XDF: ammo_Penetrator_Base
	{
		caliber=60;
		hit=877.5;
	};
	class ammo_Penetrator_MRAAWS_XDF: ammo_Penetrator_Base
	{
		caliber=33.333302;
		warheadName="TandemHEAT";
		hit=990;
	};
	class ammo_Penetrator_MRAAWS_HEAT55_XDF: ammo_Penetrator_Base
	{
		caliber=26;
		hit=495;
	};
	class ammo_Penetrator_Vorona_XDF: ammo_Penetrator_Base
	{
		caliber=60;
		warheadName="TandemHEAT";
		hit=1080;
	};

	// vehicles
	class Sh_125mm_APFSDS;
	class Sh_125mm_APFSDS_T_Blue_XDF: Sh_125mm_APFSDS
	{
		hit=1500;
		indirectHit=500;
		indirectHitRange=2;
		typicalSpeed=2600;
		caliber=35;
		deflecting=15;
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
	};
	class Sh_75mm_Railgun_APFSDS;
	class Sh_75mm_Railgun_APFSDS_AX: Sh_75mm_Railgun_APFSDS
	{
		hit=1000;
		typicalSpeed=4000;
	};
	class Sh_75mm_Railgun_APFSDS_fake;
	class Sh_75mm_Railgun_APFSDS_AX_fake: Sh_75mm_Railgun_APFSDS_fake
	{
		hit=5000;
	};
	class Sh_75mm_Railgun_APFSDS_sub_fake;
	class Sh_75mm_Railgun_APFSDS_AX_sub_fake: Sh_75mm_Railgun_APFSDS_sub_fake
	{
		hit=1;
	};
	class B_40mm_GPR;
	class B_20mm_GPR_AX: B_40mm_GPR
	{
		hit=35;
		model="xdf\weapons\tracer_blue\tracer_blue";
	};

	// infantry weapons 
	class B_65x39_Caseless;
	class B_65x39_Caseless_blue: B_65x39_Caseless
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
};