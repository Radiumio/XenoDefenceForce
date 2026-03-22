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
		explosionForceCoef=10000;
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
		explosionForceCoef=10000;
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
		explosionForceCoef=10000;
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
		explosionForceCoef=10000;
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
		explosionForceCoef=10000;
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
	class B_25mm;
	class B_25mm_AX: B_25mm
	{
		hit=120;
		indirectHit=6;
		indirectHitRange=1;
		warheadName="HEAT";
		nvgOnly=0;
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
	class Missile_AA_03_F;
	class Missile_AA_03_XDF_F: Missile_AA_03_F
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
	class B_10mm_railshot_heap: B_10mm_railshot
	{
		hit=45;
		indirectHit=5;
		indirectHitRange=1;
		warheadName="HEAT";
		explosive=0.2;
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class CamShakeExplode
		{
			power=4;
			duration=0.8;
			frequency=20;
			distance=40;
		};
	};
	class B_6mm_railshot: B_10mm_railshot
	{
		hit=12;
	};
	class SubmunitionBase;
	class B_10mm_railshot_lg: SubmunitionBase
	{
		hit=35;
		cartridge = "";
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=5;
		triggerOnImpact=0;
		model="xdf\weapons\tracer_blue\tracer_blue";
		submunitionAmmo="ammo_Railshot_LG_Sub1";
		soundFly[]=
		{
			"\xdf\sounds\shot\guided_shot_fly",
			4,
			1,
			80
		};

		airFriction = -0.01;

		autoSeekTarget 					= 1;
		triggerTime 					= 0.001;
		triggerDistance 				= 200;
		triggerSpeedCoef[] 				= {0.001};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 120;
		submunitionConeAngle 			= 1;
		submunitionConeType[] 			= {"randomcenter",1}; // amount of units

		manualControl = 1;
		maxControlRange = 2000;
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		missileLockCone			= 140;
		missileKeepLockedCone	= 180;
		missileLockMaxDistance 	= 4000;
		missileLockMinDistance	= 1;
		missileLockMaxSpeed		= 35;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class MissileBase;
	class ammo_Railshot_LG_Sub: MissileBase
	{
		hit=60;
		indirectHit=6;
		indirectHitRange=0.5;
		explosive=0.5;
		//model="xdf\weapons\tracer_blue\tracer_blue";
		effectsMissile="XDF_GuidedSlug_Trail";
		soundFly[]=
		{
			"\xdf\sounds\shot\guided_shot_fly",
			4,
			1,
			80
		};

		//submunitionAmmo="ammo_Railshot_LG_Sub1";
		triggerDistance 				= 2;
		submunitionConeAngle 			= 55;
		triggerSpeedCoef[] 				= {0.01};

		weaponLockSystem		= "1+2+4+8+16";
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		// Manual control capable is disabled since it's conflictng with locking
		manualControl	= 0;
		//lockType		= 0;
		maxControlRange	= 4000;

		autoSeekTarget	= 0;
		lockSeekRadius	= 500;

		initTime			= 0.25;
		trackOversteer		= 0.05;
		trackLead			= 0.9;
		timeToLive			= 30;
		maneuvrability		= 4;	// Smaller velocity needs less maneuverability to succeed.
		simulationStep		= 0.02;
		airFriction			= 0.65;
		sideAirFriction		= 0.3;
		maxSpeed			= 80;
		typicalSpeed		= 60;
		thrustTime			= 16;
		thrust				= 6;
		fuseDistance		= 200;
		whistleDist			= 4;

		missileManualControlCone	= 90;
		missileLockCone				= 124;
		missileKeepLockedCone		= 180;
		missileLockMaxDistance		= 4000;
		missileLockMinDistance		= 10;
		missileLockMaxSpeed			= 80;

		cost 				= 10;
		aiAmmoUsageFlags	= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;

		// Flight Profiles
		flightProfiles[] =
		{
			Direct,
			TopDown,
			LOALDistance
		};
		class Direct {

			missileManualControlCone	= 30;
			missileLockCone				= 140;
			missileKeepLockedCone		= 180;
			missileLockMaxDistance		= 4000;
			missileLockMinDistance		= 60;
			missileLockMaxSpeed			= 80;
		};
		class TopDown
		{
			ascendHeight	= 150.0;
			descendDistance	= 200.0;
			minDistance		= 150.0;
			ascendAngle		= 70.0;
		};
		class LOALDistance
		{
			lockSeekDistanceFromParent = 300;
		};

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 180;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(4000,4000)
						maxTrackableSpeed = 180;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 180;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 180;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 180;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power=4;
			duration=0.8;
			frequency=20;
			distance=40;
		};
	};
	class M_Mo_155mm_AT;
	class ammo_Railshot_LG_Sub1: M_Mo_155mm_AT
	{
		hit=60;
		indirectHit=6;
		indirectHitRange=0.5;
		explosive=0.5;
		//model="xdf\weapons\tracer_blue\tracer_blue";
		model = "\A3\weapons_f\ammo\UGL_slug";
		lockSeekRadius				= 700;
		soundFly[]=
		{
			"\xdf\sounds\shot\guided_shot_fly",
			4,
			1,
			80
		};

		//submunitionInitSpeed = 60;
		//submunitionParentSpeedCoef = 0;

		weaponLockSystem		= "1+2+4+8+16";
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		initTime			= 0.01;
		trackOversteer		= 1;
		trackLead			= 1;
		timeToLive			= 30;
		maneuvrability		= 8;	// Smaller velocity needs less maneuverability to succeed.
		simulationStep		= 0.002;
		airFriction			= 0.05;
		sideAirFriction		= 1;
		maxSpeed			= 2;
		typicalSpeed		= 60;
		thrustTime			= 16;
		thrust				= 2;
		fuseDistance		= 5;
		whistleDist			= 1;

		missileManualControlCone	= 90;
		missileLockCone				= 124;
		missileKeepLockedCone		= 180;
		missileLockMaxDistance		= 4000;
		missileLockMinDistance		= 10;
		missileLockMaxSpeed			= 80;

		effectsMissile = "XDF_GuidedSlug_Trail";

		lockSeekDistanceFromParent = 120;

		flightProfiles[] =
		{
			LOALDistance
		};
		class LOALDistance
		{
			lockSeekDistanceFromParent = 20;
		};

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(4000,4000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						nightRangeCoef = 1; // full range at night; if undef
					};
				};
			};
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

	class F_40mm_White;
	class GrenadeHand;
	class MissileBase;

	class BlastGrenade: GrenadeHand
	{
		hit						= 1;
		indirectHit				= 1;
		indirectHitRange		= 15;
		explosionForceCoef 		= 99999;
	};
	class SmokeShell;
	class VacuumGrenade_linear: SmokeShell
	{
			timeToLive			= 60;
			aiAmmoUsageFlags	= "4 + 2";
			smokeColor[]		= {1, 1, 1, 1};
			effectsSmoke		= "VacuumEffects";
	};
	class VacuumGrenade_exponential: VacuumGrenade_linear
	{
	};
	class VacuumGrenade_sound: GrenadeHand
	{
		hit						= 0;
		indirectHit				= 1;
		indirectHitRange		= 0.01;

		explosionTime			= 0.01;

		dangerRadiusHit			= 50;
		suppressionRadiusHit	= 18;
		typicalspeed			= 26;
		whistleDist				= 12;
		explosionEffectsRadius	= 1.5;
		deflecting				= 30;

		CraterEffects			= "";
		explosionEffects		= "";

		class CamShakeExplode
		{
			power		= 0.2;
			duration	= 0.8;
			frequency	= 20;
			distance	= 56;
		};
		SoundSetExplosion[] = {"MiniGrenade_Exp_SoundSet", "MiniGrenade_Tail_SoundSet"};
	};
	class ParticleTest: SmokeShell
	{
		simulation 			= "shotCM";
		timeToLive			= 10;
		aiAmmoUsageFlags	= "4 + 2";
		smokeColor[]		= {1, 1, 1, 1};
		effectsSmoke		= "MultiStageParticles";
	};

	class Object_01_Base_Ammo_F: MissileBase
	{
		model				= "\a3\Contact_F\Experimental\Weapons\Ammo\AlienMissile_01_F.p3d";

		hit 					= 350;
		explosionForceCoef 		= 10000;

		weaponLockSystem		= CM_Lock_Visual+CM_Lock_IR+CM_Lock_Laser+CM_Lock_Radar+CM_Missile;
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		// Manual control capable is disabled since it's conflictng with locking
		manualControl	= 0;
		//lockType		= 0;
		maxControlRange	= 4000;

		autoSeekTarget	= 0;
		lockSeekRadius	= 500;

		initTime			= 0.25;
		trackOversteer		= 0.2;
		trackLead			= 0.85;
		timeToLive			= 30;
		maneuvrability		= 8.5;	// Smaller velocity needs less maneuverability to succeed.
		simulationStep		= 0.002;
		airFriction			= 0.065;
		sideAirFriction		= 0.3;
		maxSpeed			= 210;
		typicalSpeed		= 175;
		thrustTime			= 16;
		thrust				= 30;
		fuseDistance		= 50;
		effectsMissile		= "TestSmokeTrail";
		whistleDist			= 4;

		missileManualControlCone	= 90;
		missileLockCone				= 124;
		missileKeepLockedCone		= 180;
		missileLockMaxDistance		= 4000;
		missileLockMinDistance		= 60;
		missileLockMaxSpeed			= 735;

		cost 				= 10;
		aiAmmoUsageFlags	= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir + AIAmmoUsageOffensiveArmour;

		// Flight Profiles
		flightProfiles[] =
		{
			Direct,
			TopDown,
			LOALDistance
		};
		class Direct {

			missileManualControlCone	= 30;
			missileLockCone				= 24;
			missileKeepLockedCone		= 110;
			missileLockMaxDistance		= 4000;
			missileLockMinDistance		= 60;
			missileLockMaxSpeed			= 735;
		};
		class TopDown
		{
			ascendHeight	= 150.0;
			descendDistance	= 200.0;
			minDistance		= 150.0;
			ascendAngle		= 70.0;
		};
		class LOALDistance
		{
			lockSeekDistanceFromParent = 300;
		};

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 530;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 530;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 515;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(6000,6000)
						maxTrackableSpeed = 515;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(6000,6000)
						maxTrackableSpeed = 515;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class Object_01_Super_Ammo_F: Object_01_Base_Ammo_F
	{
		missileManualControlCone	= 360;
		missileLockCone				= 360;
		missileKeepLockedCone		= 360;

		maneuvrability		= 28.5;	// Smaller velocity needs less maneuverability to succeed.
		simulationStep		= 0.002;
		airFriction			= 0.065;
		sideAirFriction		= 0.3;
		maxSpeed			= 210;
		typicalSpeed		= 175;
		thrustTime			= 16;
		thrust				= 30;
	};
	class Object_01_Cluster_Base_Ammo_F: Object_01_Base_Ammo_F
	{
		EffectFly = "ClusterEffectFly";
		triggerDistance 				= 200;
		triggerSpeedCoef[] 				= {0.5,1};
		submunitionConeAngle 			= 15;
		submunitionConeType[] 			= {"randomcenter",8}; // amount of units
	};
	class Object_01_Cluster_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		submunitionAmmo[] 				= {"Mo_cluster_AP",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
		aiAmmoUsageFlags				= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
	};
	class Object_01_Cluster_Mine_AP_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		submunitionAmmo 				= "Mo_ClassicMineRange";
		aiAmmoUsageFlags				= AIAmmoUsageMine;
	};
	class Object_01_Cluster_Mine_AT_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		submunitionAmmo 				= "Mo_ATMineRange";
		aiAmmoUsageFlags				= AIAmmoUsageMine;
	};
	class Object_01_Cluster_Autoseek_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		triggerDistance 				= 500;
		submunitionConeAngle 			= 55;
		triggerSpeedCoef[] 				= {0.01,0.55};
		submunitionAmmo[] 				=
		{
			Object_01_Cluster_Autoseek_Sub_Ammo_F,0.33,
			Object_01_Cluster_Autoseek_Sub1_Ammo_F,0.33,
			Object_01_Cluster_Autoseek_Sub2_Ammo_F,0.33
		};
	};
	class M_Mo_155mm_AT;
	class Object_01_Cluster_Autoseek_Sub_Ammo_F: M_Mo_155mm_AT
	{
		proximityExplosionDistance	= 28;
		explosionForceCoef			= 10000;
		lockSeekRadius				= 700;

		missileLockCone			= 24;
		missileKeepLockedCone	= 180;

		weaponLockSystem		= CM_Lock_Visual+CM_Lock_IR+CM_Lock_Laser+CM_Lock_Radar+CM_Missile;
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		effectsMissile = "missile4";

		lockSeekDistanceFromParent = 120;

		flightProfiles[] =
		{
			LOALDistance
		};
		class LOALDistance
		{
			lockSeekDistanceFromParent = 20;
		};

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						nightRangeCoef = 1; // full range at night; if undef
					};
				};
			};
		};
	};
	class Object_01_Cluster_Autoseek_Sub1_Ammo_F: Object_01_Cluster_Autoseek_Sub_Ammo_F
	{
		missileLockCone			= 13;
		missileKeepLockedCone	= 55;
	};
	class Object_01_Cluster_Autoseek_Sub2_Ammo_F: Object_01_Cluster_Autoseek_Sub_Ammo_F
	{
		missileLockCone			= 23;
		missileKeepLockedCone	= 155;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class Object_01_Cluster_Chemical_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Chemical_Sub_Ammo_F";
	};
	class Object_01_Cluster_Chemical_Sub_Ammo_F: F_40mm_White
	{
		hit 							= 1;
		indirectHit 					= 1;
		indirectHitRange 				= 1;
		timetolive 						= 180;
		//model							= \a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F;

		effectFlare 					= Chemical_Bomb;
		//craterShape 					= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		explosionEffects				= "";
	};
	class Object_01_Cluster_Incendiary_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Incendiary_Sub_Ammo_F";
	};
	class Object_01_Cluster_Incendiary_Deploy_Ammo_F: F_40mm_White
	{
		hit						= 1;
		indirectHit				= 1;
		indirectHitRange		= 1;
		triggerDistance			= 55;
		triggerSpeedCoef[]		= {0.9};
		submunitionConeAngle	= 1;
		submunitionAmmo			= "Object_01_Cluster_Incendiary_Sub_Ammo_F";
		submunitionConeType[]	= {"randomcenter",1};
		effectFly				= "ArtilleryTrails";
		explosionEffects		= "";
	};
	class Object_01_Cluster_Incendiary_Sub_Ammo_F: F_40mm_White
	{
		hit 							= 1;
		indirectHit 					= 1;
		indirectHitRange 				= 1;
		timetolive 						= 60;
		//model							= \a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F;

		effectFlare 					= Incendiary_Bomb;
		//craterShape 					= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		explosionEffects				= "";
	};
	class Object_01_Airburst_Ammo_F: Object_01_Cluster_Base_Ammo_F
	{
		maneuvrability					= 14.5;
		attackFromTopDescendDistance	= 200.0;
		// explode above 15m
		triggerDistance					= 15;
		submunitionConeType[]			= {"randomcenter",1};
		submunitionAmmo					= "Object_01_Airburst_Deploy_Ammo_F";
		aiAmmoUsageFlags				= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh;
	};
	class Object_01_Airburst_Deploy_Ammo_F: Object_01_Base_Ammo_F
	{
		simulation			= shotGrenade;
		airFriction			= 0;
		sideairFriction		= 0;
		ExplosionEffects	= MortarExplosion;
		// explode right after submunition transformation
		simulationStep		= 0.0001;
		explosionTime		= 0.0001;
		indirectHit			= 40;
		indirectHitRange	= 20;
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Object_01_EMP_Ammo_F: Object_01_Base_Ammo_F
	{
		hit					= 10;
		indirectHit			= 10;
		indirectHitRange	= 5;
		proximityExplosionDistance = 18;

		explosionEffects	= "FlowerPot_Exp2";
		CraterEffects		= "";
	};
	class Object_01_Chemical_Ammo_F: Object_01_Base_Ammo_F
	{
		triggerDistance			= 200;
		triggerSpeedCoef[]		= {0.5,1};
		submunitionConeAngle	= 35;
		submunitionAmmo			= "Object_01_Chemical_Deploy_Ammo_F";
		submunitionConeType[]	= {"randomcenter",1};
	};
	class Object_01_Chemical_Deploy_Ammo_F: Object_01_Base_Ammo_F
	{
		hit						= 1;
		indirectHit				= 1;
		indirectHitRange		= 1;
		triggerDistance			= 15;
		triggerSpeedCoef[]		= {0.1};
		submunitionConeAngle	= 1;
		submunitionAmmo			= "Object_01_Chemical_Sub_Ammo_F";
		submunitionConeType[]	= {"randomcenter",1};
		effectFly				= "ArtilleryTrails";
		explosionEffects		= "";
	};
	class Object_01_Chemical_Sub_Ammo_F: Object_01_Base_Ammo_F
	{
		hit 							= 1;
		indirectHit 					= 1;
		indirectHitRange 				= 1;
		timetolive 						= 180;
		//model							= \a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F;

		effectFlare 					= Chemical_Bomb;
		//craterShape 					= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		explosionEffects				= "";
	};
	class Object_01_Nuke_Ammo_F: Object_01_Base_Ammo_F
	{
		hit					= 1400;
		indirectHit			= 1000;
		indirectHitRange	= 80;

		explosionEffects	= "NukeExplosion";
		CraterEffects		= "";
		class CamShakeExplode
		{
			power = __EVAL(200*0.2);
			duration = __EVAL((round (400^0.5))*0.2 max 0.2);
			frequency = 20;
			distance = __EVAL((1000 + 200^0.5)*8);
		};
	};
	class SubmunitionBase;
	class Object_02_Base_Ammo_F: SubmunitionBase
	{
		explosionForceCoef 		= 10000;

		autoSeekTarget 					= 1;
		triggerTime 					= 0.01;
		triggerSpeedCoef[] 				= {1};
		submunitionConeAngle 			= 1;
		submunitionConeType[] 			= {"randomcenter",1}; // amount of units

		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		missileLockCone			= 24;
		missileKeepLockedCone	= 180;
		missileLockMaxDistance 	= 4000;
		missileLockMinDistance	= 60;
		missileLockMaxSpeed		= 35;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class Object_02_Cluster_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Cluster_Ammo_F";
	};
	class Object_02_Cluster_Mine_AP_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Cluster_Mine_AP_Ammo_F";
	};
	class Object_02_Cluster_Mine_AT_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Cluster_Mine_AT_Ammo_F";
	};
	class Object_02_Cluster_Chemical_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Chemical_Ammo_F";
	};
	class Object_02_Cluster_Incendiary_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Incendiary_Ammo_F";
	};
	class Object_02_Cluster_Autoseek_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Autoseek_Ammo_F";
	};
	class Object_02_Airburst_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Airburst_Ammo_F";
	};
	class Object_02_EMP_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_EMP_Ammo_F";
	};
	class Object_02_Chemical_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Chemical_Ammo_F";
	};
	class Object_02_Nuke_Ammo_F: Object_02_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Nuke_Ammo_F";
	};
	class BulletCore;
	class BulletBase: BulletCore
	{
		class HitEffects;
	};
	class Object_06_Gauss_Ammo_Base_F: BulletBase
	{
		hit = 36;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 1300;

		airFriction = -0.0001;
		simulationStep = 0.0001;

		airLock = 1;
		caliber = 1;
		deflecting = 15;
		explosive = 0;

		cartridge = "";

		audibleFire = 50;
		visibleFireTime = 3;

		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		cost = 50;

		model = "\a3\Contact_F\Experimental\Weapons\Data\laser_red";
		tracerScale = 1.0;
		tracerStartTime = 0.015;
		tracerEndTime = 3;

		class HitEffects: HitEffects
		{
			Hit_Foliage_green		= "ImpactLeavesGreen";
			Hit_Foliage_Dead		= "ImpactLeavesDead";
			Hit_Foliage_Green_big	= "ImpactLeavesGreenBig";
			Hit_Foliage_Palm		= "ImpactLeavesPalm";
			Hit_Foliage_Pine		= "ImpactLeavesPine";
			hitFoliage				= "ImpactLeaves";
			hitGlass				= "ImpactGlass";
			hitGlassArmored			= "ImpactGlassThin";
			hitWood					= "ImpactWood";
			hitMetal				= "ImpactMetalSabotSmall";
			hitMetalPlate			= "ImpactMetalSabotSmall";
			hitBuilding				= "ImpactPlastic";
			hitPlastic				= "ImpactPlastic";
			hitRubber				= "ImpactRubber";
			hitTyre					= "ImpactTyre";
			hitConcrete				= "ImpactConcrete";
			// gets overriden in unit class by impactEffectsBlood parameter
			hitMan					= "ImpactEffectsBloodLaser";
			hitGroundSoft			= "ImpactEffectsSmall";
			hitGroundRed			= "ImpactEffectsRed";
			hitGroundHard			= "ImpactEffectsHardGround";
			hitWater				= "ImpactEffectsWater";
			hitVirtual				= "ImpactMetal";
			hitAlienArmour			= "ImpactAlienArmour";
			hitAlienWeakPoint_01	= "ImpactAlienWeakPoint_01";
		};

		CraterEffects = "";
		explosionEffects = "";
		EffectFly = "GaussSmoke";
	};
	class Object_06_Gauss_Ammo_F: Object_06_Gauss_Ammo_Base_F
	{

	};
	class Object_07_Base_Ammo_F: SubmunitionBase
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionForceCoef 		= 10000;

		airFriction = -0.001;

		autoSeekTarget 					= 1;
		triggerTime 					= -1;
		triggerDistance					= 395;
		triggerSpeedCoef[] 				= {1};
		submunitionConeAngle 			= 1;
		submunitionConeType[] 			= {"randomcenter",1}; // amount of units

		// Manual control capable
		manualControl	= 1;
		maxControlRange	= 4000;
		// once it's locked you are fucked up
		cmImmunity				= 1;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		missileLockCone			= 24;
		missileKeepLockedCone	= 180;
		missileLockMaxDistance 	= 4000;
		missileLockMinDistance	= 60;
		missileLockMaxSpeed		= 35;

		forcedAlternativeFireMode		= false;
		attackFromTopAscendHeight		= 150.0;
		attackFromTopDescendDistance	= 500.0;
		attackFromTopMinDistance		= 150.0;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// can lock everything
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
	};
	class Object_07_Cluster_Ammo_F: Object_07_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Cluster_Ammo_F";
	};
	class Object_07_Autoseek_Ammo_F: Object_07_Base_Ammo_F
	{
		submunitionAmmo 				= "Object_01_Cluster_Autoseek_Sub_Ammo_F";
	};
	class Object_07_Airburst_Ammo_F: Object_07_Base_Ammo_F
	{
		submunitionAmmo					= "Object_01_Airburst_Ammo_F";
	};
	class Object_09_Laser_Ammo_Base_F: BulletBase
	{
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 1300;
		maxSpeed = 3000;

		airFriction = -0.002;
		coefGravity = 0;
		simulationStep = 0.01;

		airLock = 1;
		caliber = 2;
		deflecting = 15;
		explosive = 0;

		cartridge = "";

		audibleFire = 50;
		visibleFireTime = 3;

		aiAmmoUsageFlags	= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		cost = 5;

		model = "\a3\Contact_F\Experimental\Weapons\Data\laser_red";
		tracerScale = 1.0;
		tracerStartTime = 0.005;
		tracerEndTime = 15;
		EffectFly = "LaserLight";
		CraterEffects = "ImpactLaser";
		explosionEffects = "ImpactLaser";


		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactLaser";
			hitMetalPlate = "ImpactLaser";
			hitBuilding = "ImpactLaser";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			// gets overriden in unit class by impactEffectsBlood parameter
			hitMan = "ImpactEffectsBloodLaser";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactLaser";
		};

		soundSetBulletFly[] 	= {"bulletFlyBy_SoundSet"};
		soundSetSonicCrack[]	= {};
	};
	class Object_09_Laser_Ammo_F: Object_09_Laser_Ammo_Base_F
	{

	};
	class Object_09_Laser_HighPenetration_Ammo_F: Object_09_Laser_Ammo_Base_F
	{
		caliber = 100;
	};
	class Object_09_Laser_Accelerating_Ammo_F: Object_09_Laser_Ammo_Base_F
	{
		// positive acceleration seems to cause some freezes after bullet reaches some insanely high speed (there are no limits)
		simulationStep = 0.1;
		airFriction = 0.0175;
		EffectFly = "EnergyBeam";
	};
	class Object_09_Laser_HighDeflection_Ammo_F: Object_09_Laser_Ammo_Base_F
	{
		caliber = 0.05;
		deflecting = 99;
	};
	class Object_09_ShotLaser_Ammo_F: Object_09_Laser_Ammo_Base_F
	{
		simulation		= shotLaser;
		model			= "\a3\Contact_F\Experimental\Weapons\Data\tracer_red";
		hit				= 185;
		minTimeToLive	= 0.5;
		timetolive		= 2;
		EffectFly		= "EnergyBeam";
	};
	class Object_10_Ammo_Base_F: BulletBase
	{
		hit = 10;
		cost = 1;
		indirectHit = 4;
		indirectHitRange = 5;
		airFriction = -0.000001;
		coefGravity = 0;
		typicalSpeed = 3000;
		aiAmmoUsageFlags = 64 + 128 + 256 + 512;
		//EffectFly = "LaserLight";
		EffectFly = "Beam_Trace1";
		CraterEffects = "Beam_Fire";
		explosionEffects = "Beam_Fire";
		explosive = 0;
		deflecting = 0;
		class HitEffects
		{
			Hit_Foliage_green		= "Beam_Fire";
			Hit_Foliage_Dead		= "Beam_Fire";
			Hit_Foliage_Green_big	= "Beam_Fire";
			Hit_Foliage_Palm		= "Beam_Fire";
			Hit_Foliage_Pine		= "Beam_Fire";
			hitFoliage				= "Beam_Fire";
			hitGlass				= "Beam_Fire";
			hitGlassArmored			= "Beam_Fire";
			hitWood					= "Beam_Fire";
			hitMetal				= "Beam_Fire";
			hitMetalPlate			= "Beam_Fire";
			hitBuilding				= "Beam_Fire";
			hitPlastic				= "Beam_Fire";
			hitRubber				= "Beam_Fire";
			hitTyre					= "Beam_Fire";
			hitConcrete				= "Beam_Fire";
			hitMan					= "Beam_Fire";
			hitGroundSoft			= "Beam_Fire";
			hitGroundRed			= "Beam_Fire";
			hitGroundHard			= "Beam_Fire";
			hitWater				= "ImpactEffectsWater";
			hitVirtual				= "Beam_Fire";
		};
	};
	class Object_10_Ammo_F: Object_10_Ammo_Base_F
	{
	};
	class Object_11_Ammo_F: GrenadeHand
	{
		model = "\a3\Contact_F\Experimental\Weapons\Collider_01_small_f";
		explosionForceCoef = 1000;
		explosionEffects	= "FlowerPot_Exp2";
		CraterEffects		= "";
	};
	// Other ammo

	class Object_12_Base_Ammo_F: Object_02_Base_Ammo_F
	{
		hit					= 20;
		indirectHit			= 0;
		indirectHitRange	= 0;
		cost				= 1;
		missileLockCone			= 6;
		missileKeepLockedCone	= 10;

		triggerTime 					= 0.01;
		triggerSpeedCoef[] 				= {1};
		submunitionConeAngle 			= 1;
		submunitionConeType[] 			= {"randomcenter",1}; // amount of units
	};
	class Object_12_Base_Sub_Ammo_F: MissileBase
	{
		model				= "\a3\Contact_F\Experimental\Weapons\Ammo\TracerBall_01_F.p3d";

		hit					= 9;
		indirectHit			= 0;
		indirectHitRange	= 0;
		explosionForceCoef	= 10;

		effectsMissile		= "BulletTrace_01_FX";
		explosionEffects	= "ImpactLaser";
		CraterEffects		= "ImpactLaser";

		weaponLockSystem		= CM_Lock_Visual+CM_Lock_IR+CM_Lock_Laser+CM_Lock_Radar+CM_Missile;
		cmImmunity				= 0.4;
		irLock 					= 1;
		airLock 				= 1;
		laserLock				= 1;
		nvLock					= 1;

		missileLockCone			= 16;
		missileKeepLockedCone	= 16;
		missileLockMaxDistance 	= 2000;
		missileLockMinDistance	= 60;
		missileLockMaxSpeed		= 25;

		initTime			= 0.25;
		trackOversteer		= 0.99;
		trackLead			= 0.05;
		timeToLive			= 10;
		maneuvrability		= 2.0;	// Smaller velocity needs less maneuverability to succeed.
		simulationStep		= 0.02;
		airFriction			= 0.065;
		sideAirFriction		= 0.3;
		maxSpeed			= 210;
		typicalSpeed		= 175;
		thrustTime			= 16;
		thrust				= 10;
		fuseDistance		= 50;
		whistleDist			= 4;

		#define SENSOR_CONE 12
		class Components
		{
			class SensorsManagerComponent
			{
				// can lock on everything
				class Components
				{
					class NVSensorComponent : SensorTemplateNV
					{
						SENS_RANGES_WVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = SENSOR_CONE;
						angleRangeVertical = SENSOR_CONE;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(8000,8000)
						maxTrackableSpeed = 30;
						angleRangeHorizontal = SENSOR_CONE;
						angleRangeVertical = SENSOR_CONE;
					};
					class ManSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = SENSOR_CONE;
						angleRangeVertical = SENSOR_CONE;
					};
					class IRSensorComponent : SensorTemplateMan
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = SENSOR_CONE;
						angleRangeVertical = SENSOR_CONE;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = SENSOR_CONE;
						angleRangeVertical = SENSOR_CONE;
					};
				};
			};
		};
	};
	class Object_12_Ammo_F: Object_12_Base_Ammo_F
	{
		submunitionAmmo					= "Object_12_Sub_Ammo_F";
	};
	class Object_12_Sub_Ammo_F: Object_12_Base_Sub_Ammo_F
	{
	};

	class AntiMissile_Projectile_01_F: Object_06_Gauss_Ammo_F
	{
		simulationStep = 0.0001;
		timetolive = 3;
		EffectFly = "AntiMissileBeam";
	};
	class PrototypeCannon_Projectile_01_F: AntiMissile_Projectile_01_F
	{
		hit					= 1000;
		indirectHit			= 500;
		indirectHitRange	= 5;
		explosionForceCoef	= 10;
		caliber 			= 3;

		cost = 500000;

		simulationStep		= 0.001;
		coefGravity			= 0;
		timetolive			= 5;

		EffectFly				= "PrototypeCannonBeam";

		soundSetBulletFly[]		= {};
		soundSetSonicCrack[]	= {};
	};
	class PrototypeCannon_Projectile_01_AI_F: PrototypeCannon_Projectile_01_F
	{
		simulation 						= shotBullet;
		simulationStep 					= 0.001;
		triggerTime 					= 0.0001;
		triggerDistance					= 0.0001;
		triggerSpeedCoef[] 				= {0.00001};
		submunitionAmmo 				= PrototypeCannon_Projectile_01_Fake_F;
		submunitionConeAngle 			= 1;
		submunitionConeType[] 			= {"randomcenter",1}; // amount of units

		EffectFly	= "";
	};
	class PrototypeCannon_Projectile_01_Fake_F: PrototypeCannon_Projectile_01_F
	{
		hit					= 1;
		indirectHit			= 1;
		indirectHitRange	= 1;
		timeToLive			= 0.001;
		EffectFly			= "";
	};
	class ammo_Missile_rim116;
	class AntiMissile_Missile_01_F: ammo_Missile_rim116
	{
		hit = 10;

		trackOversteer		= 0.2;
		trackLead			= 0.85;
		maneuvrability		= 8.5;	// Smaller velocity needs less maneuverability to succeed.

		timeToLive			= 30;
		simulationStep		= 0.002;
		airFriction			= 0.065;
		sideAirFriction		= 0.3;

		maxSpeed			= 710;
		typicalSpeed		= 175;
		maxControlRange		= 4000;

		initTime			= 0.25;
		thrustTime			= 13;
		thrust				= 700;

		//EffectFly = "GaussSmoke";
	};
};