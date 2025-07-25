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
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
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
		airLock=1;
		lockType=0;
		missileLockCone=4.5;
		missileKeepLockedCone=160;
		missileLockMaxDistance=2000;
		missileLockMinDistance=50;
		missileLockMaxSpeed=35;
		manualControl=1;
		missileManualControlCone=45;
		maxControlRange=2000;
		weaponLockSystem="2 + 16";
		cmImmunity=0.40000001;
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
		flightProfiles[]=
		{
			"Direct",
			"TopDown"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=150;
			descendDistance=180;
			minDistance=180;
			ascendAngle=30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=3.7;
						angleRangeVertical=2.3;
						maxTrackableATL=50;
					};
				};
			};
		};
	};
	class R_MRAAWS_HEAT_F;
	class R_MRAAWS_HEAT_XDF: R_MRAAWS_HEAT_F
	{
		hit=800;
		indirectHit=25;
		indirectHitRange=3;
		submunitionAmmo="ammo_Penetrator_MRAAWS_XDF";
	};
	class R_PG32V_F;
	class R_PG32V_HEAT_XDF: R_PG32V_F
	{
		hit=600;
		indirectHit=30;
		indirectHitRange=3;
		submunitionAmmo="ammo_Penetrator_RPG32V_XDF";
	};
	class R_TBG32V_F;
	class R_TBG32V_HE_XDF: R_TBG32V_F
	{
		hit=400;
		indirectHit=60;
		indirectHitRange=8;
	};
	class R_TBG32V_FAE_XDF: R_TBG32V_F
	{
		hit=3500;
		indirectHit=800;
		indirectHitRange=15;
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="XDF_ThermobaricHit";
		explosive=1;
		fuseDistance=70;
		class CamShakeExplode
		{
			power=5;
			duration=7;
			frequency=50;
			distance=2200;
		};
		soundHit1[] = {"\xdf\sounds\exp\maaws_thermobaric_1", 5, 1, 2200};
		soundHit2[] = {"\xdf\sounds\exp\maaws_thermobaric_2", 5, 1, 2200};
		soundHit3[] = {"\xdf\sounds\exp\maaws_thermobaric_3", 5, 1, 2200};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33000001, "soundHit3", 0.33000001};
		SoundSetExplosion[] = {"FAE_Exp_SoundSet", "FAE_Tail_SoundSet", "Explosion_Debris_SoundSet"};
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
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
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
		ExplosionEffects="XDF_ThermobaricHit";
		explosive=1;
		fuseDistance=70;
		class CamShakeExplode
		{
			power=5;
			duration=7;
			frequency=50;
			distance=2200;
		};
		soundHit1[] = {"\xdf\sounds\exp\maaws_thermobaric_1", 5, 1, 2200};
		soundHit2[] = {"\xdf\sounds\exp\maaws_thermobaric_2", 5, 1, 2200};
		soundHit3[] = {"\xdf\sounds\exp\maaws_thermobaric_3", 5, 1, 2200};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33000001, "soundHit3", 0.33000001};
		SoundSetExplosion[] = {"FAE_Exp_SoundSet", "FAE_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class ammo_Missile_Cruise_01;
	class ammo_XDF_Missile_Cruise_Thermobaric_01: ammo_Missile_Cruise_01
	{
		hit=12000;
		indirectHit=12000;
		indirectHitRange=75;
		cameraViewAvailable=1;
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="XDF_ThermobaricBigHit";
		effectsMissile="XDF_CruiseMissile";
		model="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape="\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			4,
			1,
			1200
		};
		soundFly[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			4,
			1,
			1200
		};
		class CamShakeExplode
		{
			power=20;
			duration=7;
			frequency=50;
			distance=3000;
		};
		SoundSetExplosion[] = {"FAE_Big_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet","FAE_Big_Tail_SoundSet"};
	};
	class Bomb_03_F;
	class XDF_Thermobaric_Bomb: Bomb_03_F
	{
		model="\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		proxyShape="\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		maverickWeaponIndexOffset=6;
		hit=1200;
		indirectHit=12000;
		indirectHitRange=75;
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="XDF_ThermobaricBigHit";
		effectsMissile="XDF_Missile3";
		class CamShakeExplode
		{
			power=20;
			duration=7;
			frequency=50;
			distance=1500;
		};
		soundFly[]=
		{
			"\xdf\sounds\exp\thermobaric_alarm.ogg",
			2,
			1,
			1200
		};
		SoundSetExplosion[] = {"FAE_Big_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet","FAE_Big_Tail_SoundSet"};
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
	class ammo_Penetrator_RPG32V_XDF: ammo_Penetrator_Base
	{
		caliber=43.333302;
		warheadName="TandemHEAT";
		hit=550;
	};

	// vehicles
	class Sh_125mm_APFSDS;
	class Sh_125mm_APFSDS_T_Blue_XDF: Sh_125mm_APFSDS
	{
		hit=1500;
		indirectHit=500;
		indirectHitRange=2;
		typicalSpeed=2100;
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
		typicalSpeed=2100;
		caliber=35;
		deflecting=15;
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
	};
	class Sh_120mm_HEAT_MP_T_Red;
	class Sh_120mm_HEAT_AX_T_Blue: Sh_120mm_HEAT_MP_T_Red
	{
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
		hit = 145; // default 95+50
		indirectHit = 80; // default 30+50
		typicalSpeed=1680; // default 1400
		indirectHitRange = 4; // total kill radius 16m 
	};
	class M_125mm_cannon_ATGM;
	class M_125mm_cannon_ATGM_AX: M_125mm_cannon_ATGM
	{
		hit = 950;
		submunitionAmmo = "ammo_Penetrator_Vorona_XDF";
		manuevrability=28;
		maxSpeed=250;
		thrust=150;
		effectsMissile="XDF_Missile3";
		indirectHit = 20;
		timeToLive = 20;
		thrustTime = 5;
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class M_120mm_cannon_ATGM;
	class M_120mm_cannon_ATGM_AX: M_120mm_cannon_ATGM
	{
		hit = 950;
		submunitionAmmo = "ammo_Penetrator_Vorona_XDF";
		manuevrability=28;
		maxSpeed=250;
		thrust=150;
		effectsMissile="XDF_Missile3";
		indirectHit = 20;
		timeToLive = 20;
		thrustTime = 5;
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class Sh_120mm_HE_Tracer_Red;
	class Sh_120mm_Thermobaric_AX: Sh_120mm_HE_Tracer_Red
	{
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
		hit=3500;
		indirectHit=800;
		indirectHitRange=15;
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="XDF_ThermobaricHit";
		explosive=1;
		fuseDistance=70;
		typicalSpeed=1680; // default 1400
		class CamShakeExplode
		{
			power=5;
			duration=7;
			frequency=50;
			distance=2200;
		};
		soundFly[]=
		{
			"\xdf\sounds\exp\thermobaric_alarm.ogg",
			2,
			1,
			1200
		};
		soundEngine[]=
		{
			"\xdf\sounds\exp\thermobaric_alarm.ogg",
			2,
			1,
			1200
		};
		SoundSetExplosion[] = {"FAE_Exp_SoundSet", "FAE_Tail_SoundSet", "Explosion_Debris_SoundSet"};
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
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class M_Air_AA;
	class M_Air_AA_AX: M_Air_AA
	{
		hit=2200;
		maxSpeed=1520;
		thrust=280;
		effectsMissile="XDF_Missile3";
		manuevrability=32;
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class Missile_AGM_02_F;
	class ammo_Missile_AXGM_02_F: Missile_AGM_02_F
	{
		hit=2500;
		maxSpeed=2100;
		effectsMissile="XDF_Missile3";
		manuevrability=30;
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
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
	class B_20mm_AP;
	class B_20mm_Tracer_AX_AP: B_20mm_AP
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
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class M_70mm_SAAMI;
	class M_70mm_SAAMI_AX: M_70mm_SAAMI
	{
		hit = 400;
		indirectHit = 120;
		effectsMissile = "XDF_Missile3";
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};
	class B_127x99_Ball;
	class B_127x99_Ball_Tracer_Blue: B_127x99_Ball
	{
		hit=60; // Default 30
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class M_127mm_Firefist_AT;
	class M_127mm_Firefist_AT_AX: M_127mm_Firefist_AT
	{
		hit = 500;
		indirectHit = 140;
		effectsMissile = "XDF_Missile3";
		soundEngine[]=
		{
			"\xdf\sounds\shot\titan\exp_missile_engine",
			7,
			1,
			1200
		};
	};


	// infantry weapons 
	class B_65x39_Caseless;
	class B_65x39_Caseless_blue: B_65x39_Caseless
	{
		hit=15; // default 10, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
	};
	class B_65x39_Minigun_Caseless;
	class B_65x39_Minigun_Caseless_blue: B_65x39_Minigun_Caseless
	{
		hit=15; // default 10, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
		submunitionAmmo="B_65x39_Minigun_Caseless_blue_splash";
	};
	class B_65x39_Minigun_Caseless_Red_splash;
	class B_65x39_Minigun_Caseless_blue_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		hit=10;
		indirectHit=1;
		indirectHitRange=2.5;
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
	class B_45ACP_Jury_blue: B_45ACP_Ball
	{
		hit=30; // default 5, experimental Jury munitions add 20
		model="xdf\weapons\shell_tracer_blue\shell_tracer_blue";
		typicalSpeed=330;
	};
	class B_570x28_Ball;
	class B_570x28_Ball_blue: B_570x28_Ball
	{
		hit=16; // default 8, AX munitions add 5
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
	class B_127x108_APDSHE_blue: B_127x108_APDS
	{
		hit=80; // default 60, AX munitions add 5
		model="xdf\weapons\tracer_blue\tracer_blue";
		indirectHit=8;
		indirectHitRange=1;
		warheadName="HE";
		explosive=0.8;
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
	};
	class B_127x108_railshot_blue: B_127x108_APDS
	{
		hit=400; // default 60
		indirectHit=10;
		indirectHitRange=1;
		model="xdf\weapons\tracer_blue\tracer_blue";
		soundFly[]=
		{
			"\xdf\sounds\shot\gm6\gm6_railfly",
			6,
			1,
			1800
		};
		typicalSpeed=1100;
		timeToLive=8;
		class CamShakeFire
		{
			power = 1;
			duration = 2.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 5;
			frequency = 20;
			distance = 1;
		};
	};
	class B_127x108_railshot_he_blue: B_127x108_APDS
	{
		hit=400; // default 60
		indirectHit=20;
		indirectHitRange=4;
		warheadName="HE";
		explosive=0.5;
		model="xdf\weapons\tracer_blue\tracer_blue";
		soundFly[]=
		{
			"\xdf\sounds\shot\gm6\gm6_railfly",
			6,
			1,
			1800
		};
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		typicalSpeed=1100;
		timeToLive=8;
		class CamShakeFire
		{
			power = 3.5;
			duration = 2.5;
			frequency = 20;
			distance = 7;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 6;
			frequency = 20;
		};
	};
	class B_10mm_railshot: B_127x108_railshot_blue
	{
		hit=35; // default 20
		cartridge = "";
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=1100;
		timeToLive=8;
		soundFly[]={};
		class CamShakeFire
		{
			power = 0.3;
			duration = 2.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 0.8;
			duration = 5;
			frequency = 20;
			distance = 1;
		};
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

	// Grenades //
	class Grenade;
	class XDF_ProtoGrenade_Ammo: Grenade
	{
		model="\xdf\weapons\protogrenade\xdf_protogrenade_throw";
		hit=25;
		indirectHit=18;
		indirectHitRange=8; // default 6 (ihr is 4x)
		explosionTime=5;
		timeToLive=6;
		explosionEffects="XDF_ProtoGrenade_ExplosionEff";
		soundFly[]=
		{
			"\xdf\sounds\exp\protogrenade_alarm.ogg",
			1,
			1,
			80
		};
		SoundSetExplosion[] = {"ProtoGrenade_Exp_SoundSet","ProtoGrenade_Tail_SoundSet"};
		class CamShakeExplode
		{
			power=8;
			duration=4;
			frequency=40;
			distance=150;
		};
	};
	class SmokeShell;
	class XDF_CompactSmokeShell_Ammo: SmokeShell
	{
		model="\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade";
		hiddenSelections[]=
		{
			"stripes",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		soundFly[]=
		{
			"\xdf\sounds\exp\csg_prime.ogg",
			1.2,
			1,
			50
		};
		SmokeShellSoundHit1[]=
		{
			"xdf\sounds\exp\csg_pop_1.ogg",
			2,
			1,
			100
		};
		SmokeShellSoundHit2[]=
		{
			"xdf\sounds\exp\csg_pop_1.ogg",
			2,
			1,
			100
		};
		SmokeShellSoundLoop1[]=
		{
			"xdf\sounds\exp\csg_smokeloop_1.ogg",
			0.4,
			1,
			110
		};
		SmokeShellSoundLoop2[]=
		{
			"xdf\sounds\exp\csg_smokeloop_2.ogg",
			0.4,
			1,
			110
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			0.25,
			"SmokeShellSoundHit2",
			0.25
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.5,
			"SmokeShellSoundLoop2",
			0.5
		};
		smokeColor[]={1,1,1,1};
		effectsSmoke="SmokeShellWhiteEffect";
	};
	class XDF_CompactSmokeShellRed_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.8,0.1,0.1,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={0.8,0.1,0.1,1};
		effectsSmoke="SmokeShellRedEffect";
	};
	class XDF_CompactSmokeShellGreen_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.2,0.6,0.4,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={0.2,0.6,0.4,1};
		effectsSmoke="SmokeShellGreenEffect";
	};
	class XDF_CompactSmokeShellYellow_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.9,0.8,0,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={0.9,0.8,0,1};
		effectsSmoke="SmokeShellYellowEffect";
	};
	class XDF_CompactSmokeShellPurple_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.4,0.1,0.4,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={0.4,0.1,0.4,1};
		effectsSmoke="SmokeShellPurpleEffect";
	};
	class XDF_CompactSmokeShellBlue_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.1,0.1,1,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={0.1,0.1,1,1};
		effectsSmoke="SmokeShellBlueEffect";
	};
	class XDF_CompactSmokeShellOrange_Ammo: XDF_CompactSmokeShell_Ammo
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,0.6,0,0.8,co)",
			"\xdf\weapons\compactSmokeGrenade\xdf_compactSmokeGrenade_CO.paa"
		};
		smokeColor[]={1,0.6,0,1};
		effectsSmoke="SmokeShellOrangeEffect";
	};
};