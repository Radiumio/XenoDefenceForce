class CfgMagazines
{
	class Titan_AA;
	class Titan_AA_XDF: Titan_AA
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Lance AA Round";
		displayNameShort="EXP-HE";
		ammo="M_Titan_AA_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		//mass=200;
	};
	class Titan_AT;
	class Titan_AT_XDF: Titan_AT
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Spear AT Round";
		displayNameShort="EXP-HEAT";
		ammo="M_Titan_AT_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		//mass=200;
	};
	class 2Rnd_Titan_AT_XDF_missiles: Titan_AT_XDF
	{
		author = "Radium";
		count = 2;
		displayNameMFDFormat = "MISSILE";
	};
	class Vorona_HEAT;
	class Vorona_HEAT_XDF: Vorona_HEAT
	{
		author="Radium";
		scope=2;
		displayName="9M135 Experimental HEAT";
		displayNameShort="EXP-HEAT";
		ammo="M_Vorona_HEAT_XDF";
		//mass=220;
		count=1;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class MRAWS_HEAT_F;
	class MRAAWS_HEAT_XDF: MRAWS_HEAT_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 75";
		displaynameshort="EXP-HEAT";
		ammo="R_MRAAWS_HEAT_XDF";
		//mass=120;
	};
	class MRAWS_HEAT55_F;
	class MRAAWS_HEAT55_XDF: MRAWS_HEAT55_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 55";
		displaynameshort="EXP-HEAT55";
		ammo="R_MRAAWS_HEAT55_XDF";
		//mass=100;
	};
	class MRAWS_HE_F;
	class MRAAWS_HE_NUKE_XDF: MRAWS_HE_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental Thermobaric Round";
		displaynameshort="EXP-FAE";
		ammo="R_MRAAWS_HE_NUKE_XDF";
		mass=75;
	};
	class RPG32_F;
	class RPG32_AT_XDF: RPG32_F
	{
		displayName="Hammer Experimental HEAT";
		displaynameshort="EXP-HEAT";
		ammo="R_PG32V_HEAT_XDF";
	};
	class RPG32_HE_F;
	class RPG32_HE_XDF: RPG32_HE_F
	{
		displayName="Hammer Experimental HE";
		displaynameshort="EXP-HE";
		ammo="R_TBG32V_HE_XDF";
	};
	class RPG32_FAE_XDF: RPG32_HE_F
	{
		displayName="Hammer Experimental Thermobaric Round";
		displaynameshort="EXP-FAE";
		ammo="R_TBG32V_FAE_XDF";
		mass=75;
	};

	// vehicles
	class VehicleMagazine;
	class 20Rnd_125mm_APFSDS;
	class 12Rnd_125mm_APFSDS_T_Blue_AX: 20Rnd_125mm_APFSDS
	{
		author="Radium";
		displayName="125mm APFSDS-AX";
		displaynameshort="APFSDS-AX";
		displayNameMFDFormat="AX";
		ammo="Sh_125mm_APFSDS_T_Blue_XDF";
		count=12;
		tracersEvery=1;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red;
	class 18Rnd_120mm_APFSDS_T_Blue_AX: 12Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="Radium";
		displayName="120mm APFSDS-AX";
		displaynameshort="APFSDS-AX";
		displayNameMFDFormat="AX";
		count=18;
		ammo="Sh_120mm_APFSDS_T_Blue_XDF";
		tracersEvery=1;
		initSpeed=1670;
	};
	class 8Rnd_120mm_APFSDS_T_Blue_AX: 18Rnd_120mm_APFSDS_T_Blue_AX
	{
		author="Radium";
		displayName="120mm APFSDS-AX";
		displaynameshort="APFSDS-AX";
		displayNameMFDFormat="AX";
		count=8;
		ammo="Sh_120mm_APFSDS_T_Blue_XDF";
		tracersEvery=1;
		initSpeed=1670;
	};
	class 1000Rnd_20mm_GPR_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="20mm AX Shells";
		displayNameShort="GPR-AX";
		displayNameMFDFormat="GPR-AX";
		ammo="B_20mm_GPR_AX";
		count=1000;
		initSpeed=1035;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class 60Rnd_75mm_RailGun_APFSDS_mag;
	class 45Rnd_75mm_RailGun_APFSDS_AX_mag: 60Rnd_75mm_RailGun_APFSDS_mag
	{
		scope=2;
		count=45;
		maxLeadSpeed=300;
		ammo="Sh_75mm_Railgun_APFSDS_AX";
		initSpeed=3000;
		nameSound="cannon";
		displayName="75mm APFSDS-AXKE";
		displayNameShort="APFSDS-AXKE";
		displayNameMFDFormat="RG-AX";
		muzzleImpulseFactor[]={2,1};
	};
	class AX_RailGun_01_DummyMagazine: 45Rnd_75mm_RailGun_APFSDS_AX_mag
	{
		ammo="Sh_75mm_Railgun_APFSDS_AX_fake";
		muzzleImpulseFactor[]={0,0};
	};
	class magazine_Missile_AMRAAM_D_x1;
	class magazine_Missile_AXInterceptor_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		displayName="AX-78 Peregrine";
		displayNameShort="AX-AA";
		descriptionShort="Medium-range, signature radar-guided, air-to-air missile with powerful anti-xeno warhead"
		ammo="ammo_Missile_AXInterceptor_D";
		count=1;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_RAIL",
			"B_AMRAAM_D",
			"B_AMRAAM_D_INT",
			"O_R73",
			"O_R77",
			"O_R77_INT"
		};
		pylonWeapon="weapon_AXMissileLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_1Rnd_AAA_missiles;
	class magazine_1Rnd_AX_AAA_missiles: PylonMissile_1Rnd_AAA_missiles
	{
		displayName="AX-55 Falcon";
		displayNameShort="AX-AA";
		descriptionShort="Short-range, infrared-guided, air-to-air missile with powerful anti-xeno warhead";
		ammo="M_Air_AA_AX";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		hardpoints[]=
		{
			"B_ASRAAM",
			"B_ASRRAM_EJECTOR",
			"B_MISSILE_PYLON",
			"O_MISSILE_PYLON"
		};
		pylonWeapon="weapon_SRAXMissileLauncher";
	};
	class magazine_Missile_AGM_02_x1;
	class magazine_Missile_AXGM_02_F: magazine_Missile_AGM_02_x1
	{
		displayName="AXGM-85 Dynamo";
		displayNameShort="AX-AGM";
		descriptionShort="Short-range, infrared-guided, air-to-surface missile with powerful anti-xeno warhead"
		ammo="ammo_Missile_AXGM_02_F";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		count=1;
		hardpoints[]=
		{
			"B_AGM65_RAIL",
			"B_AGM65_DUAL_RAIL",
			"O_KH25",
			"B_MISSILE_PYLON",
			"O_MISSILE_PYLON",
			"O_KH25_INT",
			"UNI_SCALPEL"
		};
		pylonWeapon="weapon_AXGMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_3Rnd_Missile_AGM_02_F;
	class magazine_Missile_AXGMx3_02_F: PylonRack_3Rnd_Missile_AGM_02_F
	{
		displayName="AXGM-85 Dynamo x3";
		displayNameShort="AX-AGM";
		descriptionShort="Short-range, infrared-guided, air-to-surface missile with powerful anti-xeno warhead"
		ammo="ammo_Missile_AXGM_02_F";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		count=3;
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="weapon_AXGMLauncher";
		mirrorMissilesIndexes[]={2,1,3};
		ejectSpeed[]={1,0,0};
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 1000Rnd_Gatling_30mm_AX_CAS_01_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author="Radium";
		displayNameShort="AX-HE";
		ammo="Gatling_30mm_HE_AX_CAS_01_F";
		count=1000;
		tracersEvery=1;
	};
	class magazine_Fighter01_Gun20mm_AA_x450;
	class magazine_Fighter01_Gun20mm_AX_x450: magazine_Fighter01_Gun20mm_AA_x450
	{
		author="Radium";
		displayNameShort="AX-HE";
		ammo="ammo_Fighter01_Gun20mm_AX";
		count=450;
		tracersEvery=1;
	};
	class magazine_Fighter02_Gun30mm_AA_x180;
	class magazine_Fighter02_Gun30mm_AX_x180: magazine_Fighter02_Gun30mm_AA_x180
	{
		author="Radium";
		displayNameShort="AX-HE";
		ammo="ammo_Fighter02_Gun30mm_AX";
		count=180;
		tracersEvery=1;
	};
	class 250Rnd_30mm_AXHE_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="30mm AX-HE";
		displayNameShort="30mm AX-HE";
		ammo="B_30mm_AXHE";
		count=250;
		initSpeed=960;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		weight=126;
		muzzleImpulseFactor[]={1,4};
	};
	class 250Rnd_30mm_HE_shells;
	class 250Rnd_30mm_AXAPDS_shells: 250Rnd_30mm_HE_shells
	{
		author="Radium";
		displayName="30mm AX-APDS";
		displayNameShort="30mm AX-APDS";
		ammo="B_30mm_AXAP";
		initSpeed=1120;
		tracersEvery=1;
		muzzleImpulseFactor[]={0.5,2};
	};
	class 1000Rnd_20mm_shells;
	class 1500Rnd_20mm_AX_shells: 1000Rnd_20mm_shells
	{
		author="Radium";
		displayName="20mm AX-HE";
		displayNameShort="20mm AX-HE";
		count=1500;
		ammo="B_20mm_Tracer_AX";
		tracersEvery=1;
	};
	class AX_magazine_Cannon_Phalanx_x2000: VehicleMagazine
	{
		scope=2;
		displayName="AX Prateorian 20mm";
		descriptionShort="$STR_A3_Phalanx_x1550_magazine_description";
		ammo="ammo_AAA_Gun35mm_AX";
		count=2000;
		initSpeed=1440;
		maxLeadSpeed=600;
		tracersEvery=1;
		nameSound="cannon";
	};
	class 4Rnd_GAA_missiles;
	class 4Rnd_Titan_long_missiles_AX: 4Rnd_GAA_missiles
	{
		author="Radium";
		ammo="M_Titan_AA_XDF";
		displayName="Lance Missile";
		displayNameShort="AA-AX";
		displayNameMFDFormat="MISSILE";
	};
	class 680Rnd_35mm_AA_AX_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="35 mm AA-AX Shells";
		displayNameShort="AA-AX";
		ammo="B_35mm_AA_AX";
		count=680;
		initSpeed=1440;
		maxLeadSpeed=416.66699;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,4};
	};
	class magazine_Missile_mim145_x4;
	class magazine_Missile_mim145_AX_x4: magazine_Missile_mim145_x4
	{
		displayName="TAIPAN Interceptor Missile";
		displayNameShort="SAM LR TA-AX";
		descriptionShort="$STR_A3_Missile_mim145_x4_magazine_description";
		ammo="ammo_Missile_mim145_AX";
	};
	class 4Rnd_70mm_SAAMI_missiles;
	class 4Rnd_70mm_SAAMI_AX_missiles: 4Rnd_70mm_SAAMI_missiles
	{
		displayName = "SAAMI-AX Missile";
		displayNameShort = "AA-AX";
		ammo = "M_70mm_SAAMI_AX";
	};
	class 100Rnd_127x99_mag;
	class 100Rnd_127x99_mag_Tracer_Blue: 100Rnd_127x99_mag
	{
		author="Radium";
		ammo="B_127x99_Ball_Tracer_Blue";
		displayName="12.7 mm M2 HMG Tracer (Blue AX) Belt";
		displaynameshort="AX Tracer";
		tracersEvery=1;
	};
	class 2Rnd_127mm_Firefist_missiles;
	class 2Rnd_127mm_Firefist_AX_missiles: 2Rnd_127mm_Firefist_missiles
	{
		author="Radium";
		scope=2;
		displayName="Inferno ATGM-AX Missile";
		displayNameShort="AT-AX";
		count=2;
		ammo="M_127mm_Firefist_AT_AX";
		initspeed=19;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class 60Rnd_20mm_HE_AX_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="20 mm HE-AX Shells";
		displayNameShort="HE-AX";
		ammo="B_20mm_Tracer_AX";
		count=60;
		initSpeed=1044;
		maxLeadSpeed=30.555599;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 60Rnd_20mm_AP_AX_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="20 mm AP-AX Shells";
		displayNameShort="AP-AX";
		ammo="B_20mm_Tracer_AX_AP";
		count=60;
		initSpeed=1100;
		maxLeadSpeed=30.555599;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 200Rnd_762x51_Belt;
	class 200Rnd_762x51_Belt_Blue: 200Rnd_762x51_Belt
	{
		author="Radium";
		ammo="B_762x51_Ball_blue";
		tracersEvery=1;
	};
	class 200Rnd_65x39_Belt_blue: VehicleMagazine
	{
		author="Radium";
		scope=2;
		count=200;
		ammo="B_65x39_Minigun_Caseless_blue";
		initSpeed=825;
		maxLeadSpeed=36.111099;
		tracersEvery=1;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt1";
	};
	class 2000Rnd_65x39_Belt_blue: 200Rnd_65x39_Belt_blue
	{
		author="Radium";
		scope=2;
		count=2000;
	};

	// infantry weapons
	class 30Rnd_65x39_caseless_msbs_mag_Tracer;
	class 30Rnd_65x39_caseless_msbs_mag_blue_tracer: 30Rnd_65x39_caseless_msbs_mag_Tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
	};
	class 30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer: 30Rnd_65x39_caseless_msbs_mag_blue_tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};
	class 30Rnd_65x39_caseless_black_mag_Tracer;
	class 30Rnd_65x39_caseless_black_mag_blue_tracer: 30Rnd_65x39_caseless_black_mag_Tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
	};
	class 30Rnd_65x39_caseless_black_mag_blue_reload_tracer: 30Rnd_65x39_caseless_black_mag_Tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};
	class 100Rnd_65x39_caseless_black_mag_tracer;
	class 100Rnd_65x39_caseless_mag_blue_tracer: 100Rnd_65x39_caseless_black_mag_tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 100Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class 100Rnd_65x39_caseless_mag_blue_reload_tracer: 100Rnd_65x39_caseless_black_mag_tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 100Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};
	class 30Rnd_65x39_caseless_green;
	class 30Rnd_65x39_caseless_blue_tracer: 30Rnd_65x39_caseless_green
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Caseless Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
	};
	class 30Rnd_65x39_caseless_blue_reload_tracer: 30Rnd_65x39_caseless_green
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Caseless Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};
	class 10Rnd_50BW_Mag_F;
	class 10Rnd_50BW_Mag_blue: 10Rnd_50BW_Mag_F
	{
		author="Radium";
		scope=2;
		displayName=".50 BW 10Rnd Caseless Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_50BW_Ball_blue";
		tracersEvery=1;
	};
	
	class 30Rnd_556x45_Stanag_Sand_green;
	class 30rnd_556x45_stanag_blue_tracer: 30Rnd_556x45_Stanag_Sand_green
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		author="Radium";
		scope=2;
		displayName="5.56 mm 30rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa"};
	};
	class 30rnd_556x45_stanag_blue_reload_tracer: 30Rnd_556x45_Stanag_Sand_green
	{
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		author="Radium";
		scope=2;
		displayName="5.56 mm 30rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa"};
	};

	class 150Rnd_556x45_Drum_Mag_Tracer_F;
	class 150rnd_556x45_drum_mag_blue_tracer: 150Rnd_556x45_Drum_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 150Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=1;
	};
	class 150rnd_556x45_drum_mag_blue_reload_tracer: 150Rnd_556x45_Drum_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 150Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};
	
	class 30Rnd_580x42_Mag_Tracer_F;
	class 30rnd_580x42_mag_blue_tracer: 30Rnd_580x42_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.8 mm 30Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_580x42_Ball_blue";
		tracersEvery=1;
	};
	class 30rnd_580x42_mag_blue_reload_tracer: 30Rnd_580x42_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.8 mm 30Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_580x42_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};
	class 100Rnd_580x42_Mag_Tracer_F;
	class 100rnd_580x42_mag_blue_tracer: 100Rnd_580x42_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.8 mm 100Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_580x42_Ball_blue";
		tracersEvery=1;
	};
	class 100rnd_580x42_mag_blue_reload_tracer: 100Rnd_580x42_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.8 mm 100Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_580x42_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green;
	class 30rnd_45acp_mag_smg_01_blue_tracer: 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 30Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		count=30;
		tracersEvery=1;
		mass=12;
	};
	class 30rnd_45acp_mag_smg_01_blue_reload_tracer: 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 30Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_45ACP_Ball_blue";
		count=30;
		tracersEvery=4;
		lastRoundsTracer=4;
		mass=12;
	};
	class 50rnd_45acp_mag_smg_01_blue_tracer: 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 50Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		count=50;
		tracersEvery=1;
		mass=32;
	};
	class 50rnd_45acp_mag_smg_01_blue_reload_tracer: 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 50Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		count=50;
		tracersEvery=4;
		lastRoundsTracer=4;
		mass=32;
	};

	class 50Rnd_570x28_SMG_03;
	class 50Rnd_570x28_SMG_03_blue_tracer: 50Rnd_570x28_SMG_03
	{
		author="Radium";
		scope=2;
		displayName="5.7x28 mm RapTOR 50Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_570x28_Ball_blue";
		tracersEvery=1;
	};
	class 50Rnd_570x28_SMG_03_blue_reload_tracer: 50Rnd_570x28_SMG_03
	{
		author="Radium";
		scope=2;
		displayName="5.7x28 mm RapTOR 50Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_570x28_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 16Rnd_9x21_Mag;
	class 16Rnd_9x21_Mag_blue_tracer: 16Rnd_9x21_Mag
	{
		author="Radium";
		scope=2;
		displayName="9 mm 17Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_9x21_Ball_blue";
		tracersEvery=1;
	};
	class 16Rnd_9x21_Mag_blue_reload_tracer: 16Rnd_9x21_Mag
	{
		author="Radium";
		scope=2;
		displayName="9 mm 17Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_9x21_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 9Rnd_45ACP_Mag;
	class 9Rnd_45ACP_Mag_blue_tracer: 9Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 8Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=1;
	};
	class 9Rnd_45ACP_Mag_blue_reload_tracer: 9Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 8Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 11Rnd_45ACP_Mag;
	class 11Rnd_45ACP_Mag_blue_tracer: 11Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 15Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=1;
	};
	class 11Rnd_45ACP_Mag_blue_reload_tracer: 11Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 15Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 6Rnd_45ACP_Cylinder;
	class 6Rnd_45ACP_Cylinder_blue_tracer: 6Rnd_45ACP_Cylinder
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP 6Rnd Cylinder (NEMESIS-AX)";
		displaynameshort="NEMESIS-AX";
		ammo="B_45ACP_Nemesis_blue";
		tracersEvery=1;
	};

	class 20Rnd_762x51_Mag;
	class 20Rnd_762x51_Mag_blue_tracer: 20Rnd_762x51_Mag
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 20Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_762x51_Ball_blue";
		tracersEvery=1;
	};
	class 20Rnd_762x51_Mag_blue_reload_tracer: 20Rnd_762x51_Mag
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 20Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_762x51_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 10Rnd_338_Mag;
	class 10Rnd_338_Mag_blue_tracer: 10Rnd_338_Mag
	{
		author="Radium";
		scope=2;
		displayName=".338 LM 10Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_338_Ball_blue";
		tracersEvery=1;
	};
	class 10Rnd_338_Mag_blue_reload_tracer: 10Rnd_338_Mag
	{
		author="Radium";
		scope=2;
		displayName=".338 LM 10Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_338_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 5Rnd_127x108_Mag;
	class 5Rnd_127x108_Mag_blue_tracer: 5Rnd_127x108_Mag
	{
		author="Radium";
		scope=2;
		displayName="12.7 mm 5Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_127x108_Ball_blue";
		tracersEvery=1;
	};
	class 5Rnd_127x108_APDS_Mag;
	class 5Rnd_127x108_APDS_Mag_blue_tracer: 5Rnd_127x108_APDS_Mag
	{
		author="Radium";
		scope=2;
		displayName="12.7 mm 5Rnd Tracer Mag (APDS-AX)";
		displaynameshort="AX Tracer";
		ammo="B_127x108_APDS_blue";
		tracersEvery=1;
	};
	class 5Rnd_127x108_APDSHE_Mag_blue_tracer: 5Rnd_127x108_APDS_Mag
	{
		author="Radium";
		scope=2;
		displayName="12.7 mm 5Rnd Tracer Mag (APDSHE-AX)";
		displaynameshort="AX-HE Tracer";
		ammo="B_127x108_APDSHE_blue";
		tracersEvery=1;
	};
	class 1Rnd_127x108_APDSRG_Mag_blue_tracer: 5Rnd_127x108_APDS_Mag
	{
		author="Radium";
		scope=2;
		displayName="SABOT 1Rnd Railgun Shot (APDS-AX)";
		displaynameshort="AX-RG";
		ammo="B_127x108_railshot_blue";
		count=1;
		tracersEvery=1;
		mass=12;
	};
	class 1Rnd_127x108_APDSHERG_Mag_blue_tracer: 5Rnd_127x108_APDS_Mag
	{
		author="Radium";
		scope=2;
		displayName="SABOT 1Rnd Railgun Shot (APDSHE-AX)";
		displaynameshort="AXHE-RG";
		ammo="B_127x108_railshot_he_blue";
		count=1;
		tracersEvery=1;
		mass=12;
	};
	class 50Rnd_10mm_APDSRG_Mag_blue_tracer: 5Rnd_127x108_APDS_Mag
	{
		author="Radium";
		scope=2;
		displayName="SABOT 50Rnd Railgun Magazine (APDS-AX)";
		displaynameshort="10mm AX-RG";
		descriptionShort="Caliber: 10mm SABOT AX Slug<br/>Rounds: 50<br/>Used in: XDF R-31 Mantis"
		ammo="B_10mm_railshot";
		count=50;
		tracersEvery=1;
		mass=16;
	};

	class 10Rnd_93x64_DMR_05_Mag;
	class 10Rnd_93x64_DMR_05_Mag_blue_tracer: 10Rnd_93x64_DMR_05_Mag
	{
		author="Radium";
		scope=2;
		displayName="9.3 mm 10Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=1;
	};
	class 10Rnd_93x64_DMR_05_Mag_blue_reload_tracer: 10Rnd_93x64_DMR_05_Mag
	{
		author="Radium";
		scope=2;
		displayName="9.3 mm 10Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 10Rnd_127x54_Mag;
	class 10Rnd_127x54_Mag_blue_tracer: 10Rnd_127x54_Mag
	{
		author="Radium";
		scope=2;
		displayName="12.7 mm 10Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_127x54_Ball_blue";
		tracersEvery=1;
	};
	class 10Rnd_127x54_Mag_blue_reload_tracer: 10Rnd_127x54_Mag
	{
		author="Radium";
		scope=2;
		displayName="12.7 mm 10Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_127x54_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 7Rnd_408_Mag;
	class 7Rnd_408_Mag_blue_tracer: 7Rnd_408_Mag
	{
		author="Radium";
		scope=2;
		displayName=".408 mm 7Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_408_Ball_blue";
		tracersEvery=1;
	};

	class 10Rnd_762x54_Mag;
	class 10Rnd_762x54_Mag_blue_tracer: 10Rnd_762x54_Mag
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 10Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_762x54_Ball_blue";
		tracersEvery=1;
	};
	class 10Rnd_762x54_Mag_blue_reload_tracer: 10Rnd_762x54_Mag
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 10Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_762x54_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 20Rnd_650x39_Cased_Mag_F;
	class 20Rnd_650x39_Cased_Mag_blue_tracer: 20Rnd_650x39_Cased_Mag_F
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 20Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Case_blue";
		tracersEvery=1;
	};
	class 20Rnd_650x39_Cased_Mag_blue_reload_tracer: 20Rnd_650x39_Cased_Mag_F
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 20Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Case_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 150Rnd_93x64_Mag;
	class 150Rnd_93x64_Mag_blue_tracer: 150Rnd_93x64_Mag
	{
		author="Radium";
		scope=2;
		displayName="9.3 mm 150Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=1;
	};
	class 150Rnd_93x64_Mag_blue_reload_tracer: 150Rnd_93x64_Mag
	{
		author="Radium";
		scope=2;
		displayName="9.3 mm 150Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};

	class 130Rnd_338_Mag;
	class 130Rnd_338_Mag_blue_tracer: 130Rnd_338_Mag
	{
		author="Radium";
		scope=2;
		displayName=".338 NM 130Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=1;
	};
	class 130Rnd_338_Mag_blue_reload_tracer: 130Rnd_338_Mag
	{
		author="Radium";
		scope=2;
		displayName=".338 NM 130Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_93x64_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};

	class 200Rnd_556x45_Box_Tracer_F;
	class 200Rnd_556x45_Box_Tracer_blue_tracer: 200Rnd_556x45_Box_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 200Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=1;
	};
	class 200Rnd_556x45_Box_Tracer_blue_reload_tracer: 200Rnd_556x45_Box_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 200Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};

	class 30Rnd_762x39_AK12_Mag_Tracer_F;
	class 30Rnd_762x39_AK12_Mag_blue_tracer: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 30rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_762x39_Ball_blue";
		tracersEvery=1;
	};
	class 30Rnd_762x39_AK12_Mag_blue_reload_tracer: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 30rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_762x39_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 75rnd_762x39_AK12_Mag_Tracer_F;
	class 75Rnd_762x39_AK12_Mag_blue_tracer: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 75rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_762x39_Ball_blue";
		tracersEvery=1;
	};
	class 75Rnd_762x39_AK12_Mag_blue_reload_tracer: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		author="Radium";
		scope=2;
		displayName="7.62 mm 75rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_762x39_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};

	class 200Rnd_65x39_cased_Box_Tracer_Red;
	class 200Rnd_65x39_cased_Box_blue_tracer: 200Rnd_65x39_cased_Box_Tracer_Red
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 200Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
	};
	class 200Rnd_65x39_cased_Box_blue_reload_tracer: 200Rnd_65x39_cased_Box_Tracer_Red
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 200Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};

	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class 30Rnd_65x39_caseless_mag_blue_tracer: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=1;
	};
	class 30Rnd_65x39_caseless_mag_blue_reload_tracer: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		author="Radium";
		scope=2;
		displayName="6.5 mm 30Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_65x39_Caseless_blue";
		tracersEvery=4;
		lastRoundsTracer=10;
	};
};