class Components;
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
	class R_MRAAWS_HE_F;
	class R_MRAAWS_HE_NUKE_XDF: R_MRAAWS_HE_F
	{
		hit=3500;
		indirectHit=800;
		indirectHitRange=15;
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="HeavyBombExplosion"
		explosive=1;
		fuseDistance=100;
		soundHit1[]=
		{
			"\xdf\sounds\exp\maaws_thermobaric_1",
			5,
			1,
			2200
		};
		soundHit2[]=
		{
			"\xdf\sounds\exp\maaws_thermobaric_2",
			5,
			1,
			2200
		};
		soundHit3[]=
		{
			"\xdf\sounds\exp\maaws_thermobaric_3",
			5,
			1,
			2200
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		effectsMissile="XDF_Thermobaric";
	};
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
	class Sh_120mm_APFSDS;
	class Sh_120mm_APFSDS_T_Blue_XDF: Sh_120mm_APFSDS
	{
		hit=1250;
		indirectHit=450;
		indirectHitRange=2;
		typicalSpeed=2800;
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
	class ammo_Missile_AMRAAM_D;
	class ammo_Missile_AXInterceptor_D: ammo_Missile_AMRAAM_D
	{
		hit=3000;
		maxSpeed=2900;
		thrust=350;
		effectsMissile="XDF_Missile3";
		manuevrability=36;
	};
	class M_Air_AA;
	class M_Air_AA_AX: M_Air_AA
	{
		hit=2200;
		maxSpeed=1520;
		thrust=280;
		effectsMissile="XDF_Missile3";
		manuevrability=32;
	};
	class Missile_AGM_02_F;
	class ammo_Missile_AXGM_02_F: Missile_AGM_02_F
	{
		hit=2500;
		maxSpeed=2100;
		effectsMissile="XDF_Missile3";
		manuevrability=30;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class Gatling_30mm_HE_AX_CAS_01_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=220;
	};
	class ammo_Fighter01_Gun20mm_AA;
	class ammo_Fighter01_Gun20mm_AX: ammo_Fighter01_Gun20mm_AA
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=100; // default 60
	};
	class ammo_Fighter02_Gun30mm_AA;
	class ammo_Fighter02_Gun30mm_AX: ammo_Fighter02_Gun30mm_AA
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=110; // default 70
	};
	class B_30mm_HE;
	class B_30mm_AXHE: B_30mm_HE
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=60; // default 30
	};
	class B_30mm_AP;
	class B_30mm_AXAP: B_30mm_AP
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=110; // default 80
	};
	class B_30mm_APFSDS;
	class B_30mm_APFSDS_AX: B_30mm_APFSDS
	{
		model="xdf\weapons\tracer_blue\tracer_blue";
		hit=150; // default 120
	};
	class B_20mm;
	class B_20mm_Tracer_AX: B_20mm
	{
		hit=90; // default 60
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class ammo_Gun35mmAABase;
	class ammo_AAA_Gun35mm_AX: ammo_Gun35mmAABase
	{
		hit=144; // default 72
		model="xdf\weapons\tracer_blue\tracer_blue";
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		shotDistractionAI=-0.5;
		typicalSpeed=1200;
	};
	class B_35mm_AA;
	class B_35mm_AA_AX: B_35mm_AA
	{
		hit=120; // Default 60
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class ammo_Missile_mim145;
	class ammo_Missile_mim145_AX: ammo_Missile_mim145
	{
		hit=8000;
		indirectHit=4000;
		indirectHitRange=15;
		effectsMissile="XDF_Missile3";
		maneuvrability=42;
		thrust=500;
		maxSpeed=4000;
	};
	class M_70mm_SAAMI;
	class M_70mm_SAAMI_AX: M_70mm_SAAMI
	{
		hit = 400;
		indirectHit = 120;
		effectsMissile = "XDF_Missile3";
	};


	// infantry weapons 
	class B_65x39_Caseless;
	class B_65x39_Caseless_blue: B_65x39_Caseless
	{
		hit=15; // default 10, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_556x45_Ball;
	class B_556x45_Ball_blue: B_556x45_Ball
	{
		hit=14; // default 9, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_50BW_Ball_F;
	class B_50BW_Ball_blue: B_50BW_Ball_F
	{
		hit=27; // default 22, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_762x51_Ball;
	class B_762x51_Ball_blue: B_762x51_Ball
	{
		hit=16.6; // default 11.6, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_580x42_Ball_F;
	class B_580x42_Ball_blue: B_580x42_Ball_F
	{
		hit=14; // default 9, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_45ACP_Ball;
	class B_45ACP_Ball_blue: B_45ACP_Ball
	{
		hit=10; // default 5, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_45ACP_Nemesis_blue: B_45ACP_Ball
	{
		hit=30; // default 5, experimental nemesis munitions add 20
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
		typicalSpeed=330;
	};
	class B_570x28_Ball;
	class B_570x28_Ball_blue: B_570x28_Ball
	{
		hit=13; // default 8, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
		nvgOnly=0;
	};
	class B_9x21_Ball;
	class B_9x21_Ball_blue: B_9x21_Ball
	{
		hit=10; // default 5, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
		nvgOnly=0;
	};
	class B_338_Ball;
	class B_338_Ball_blue: B_338_Ball
	{
		hit=21; // default 16, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_338_NM_Ball;
	class B_338_NM_Ball_blue: B_338_NM_Ball
	{
		hit=19; // default 14, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_127x108_Ball;
	class B_127x108_Ball_blue: B_127x108_Ball
	{
		hit=40; // default 35, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_127x108_APDS;
	class B_127x108_APDS_blue: B_127x108_APDS
	{
		hit=65; // default 60, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_93x64_Ball;
	class B_93x64_Ball_blue: B_93x64_Ball
	{
		hit=23; // default 18, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_127x54_Ball;
	class B_127x54_Ball_blue: B_127x54_Ball
	{
		hit=25; // default 20, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_408_Ball;
	class B_408_Ball_blue: B_408_Ball
	{
		hit=29; // default 24, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_762x54_Ball;
	class B_762x54_Ball_blue: B_762x54_Ball
	{
		hit=16.6; // default 11.6, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_65x39_Case_green;
	class B_65x39_Case_blue: B_65x39_Case_green
	{
		hit=15; // default 10, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_762x39_Ball_F;
	class B_762x39_Ball_blue: B_762x39_Ball_F
	{
		hit=13; // default 8, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
};