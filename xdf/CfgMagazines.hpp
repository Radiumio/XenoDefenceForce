class CfgMagazines
{
	class Titan_AA;
	class Titan_AA_XDF: Titan_AA
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Lance Round";
		displayNameShort="EXP-HE";
		ammo="M_Titan_AA_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		mass=200;
	};
	class Titan_AT;
	class Titan_AT_XDF: Titan_AT
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Spear Round";
		displayNameShort="EXP-HEAT";
		ammo="M_Titan_AT_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		mass=200;
	};
	class Vorona_HEAT;
	class Vorona_HEAT_XDF: Vorona_HEAT
	{
		author="Radium";
		scope=2;
		displayName="9M135 Experimental HEAT";
		displayNameShort="EXP-HEAT";
		ammo="M_Vorona_HEAT_XDF";
		mass=220;
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
		mass=120;
	};
	class MRAWS_HEAT55_F;
	class MRAAWS_HEAT55_XDF: MRAWS_HEAT55_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 55";
		displaynameshort="EXP-HEAT55";
		ammo="R_MRAAWS_HEAT55_XDF";
		mass=100;
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
		displayName="AX Interceptor Missile";
		displayNameShort="AX-INTER";
		descriptionShort="Medium-range, signature radar-guided, air-to-air missile with powerful anti-xeno warhead"
		ammo="ammo_Missile_AXInterceptor_D";
	};
	class PylonRack_Missile_AXInterceptor_D_x1: magazine_Missile_AXInterceptor_D_x1
	{
		count=1;
		displayName="AX Interceptor Missile";
		//displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_RAIL",
			"B_AMRAAM_D",
			"B_AMRAAM_D_INT"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		ejectSpeed[]={1,0,0};
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
	class 30Rnd_65x39_caseless_black_mag_Tracer;
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
	class 100Rnd_65x39_caseless_black_mag_tracer;
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
	class 30Rnd_65x39_caseless_green;
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
	
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30rnd_556x45_stanag_blue_tracer: 30Rnd_556x45_Stanag_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 30rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=1;
	};
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30rnd_556x45_stanag_blue_reload_tracer: 30Rnd_556x45_Stanag_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName="5.56 mm 30rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_556x45_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
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
	class 150Rnd_556x45_Drum_Mag_Tracer_F;
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
	class 30Rnd_580x42_Mag_Tracer_F;
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
	class 100Rnd_580x42_Mag_Tracer_F;
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
		displayName=".45 ACP mm 25Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=1;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green;
	class 30rnd_45acp_mag_smg_01_blue_reload_tracer: 30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	{
		author="Radium";
		scope=2;
		displayName=".45 ACP mm 25Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_45ACP_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};

	class 50Rnd_570x28_SMG_03;
	class 50Rnd_570x28_SMG_03_blue_tracer: 50Rnd_570x28_SMG_03
	{
		author="Radium";
		scope=2;
		displayName="5.7 mm 50Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_570x28_Ball_blue";
		tracersEvery=1;
	};
	class 50Rnd_570x28_SMG_03;
	class 50Rnd_570x28_SMG_03_blue_reload_tracer: 50Rnd_570x28_SMG_03
	{
		author="Radium";
		scope=2;
		displayName="5.7 mm 50Rnd Reload Tracer Mag (AX)";
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
	class 16Rnd_9x21_Mag;
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
	class 9Rnd_45ACP_Mag;
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
	class 11Rnd_45ACP_Mag;
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
	class 20Rnd_762x51_Mag;
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
	class 10Rnd_338_Mag;
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
	class 10Rnd_93x64_DMR_05_Mag;
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
	class 10Rnd_127x54_Mag;
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
	class 10Rnd_762x54_Mag;
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
	class 20Rnd_650x39_Cased_Mag_F;
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
	class 150Rnd_93x64_Mag;
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
	class 130Rnd_338_Mag;
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
	class 200Rnd_556x45_Box_Tracer_F;
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
	class 30Rnd_762x39_AK12_Mag_Tracer_F;
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
	class 75rnd_762x39_AK12_Mag_Tracer_F;
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
	class 200Rnd_65x39_cased_Box_Tracer_Red;
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
	class 30Rnd_65x39_caseless_green_mag_Tracer;
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