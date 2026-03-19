class CfgMagazines
{
	class EF_200Rnd_30mm_HEDP_shells_Tracer_Red;
	class EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue: EF_200Rnd_30mm_HEDP_shells_Tracer_Red
	{
		author = "Radium";
		DLC = "ef";
		ammo = "EF_B_30mm_HEABAX";
		displayNameShort = "HE-AB-AX";
	};
	class EF_200Rnd_30mm_HEDP_shells_Tracer_Red;
	class EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue: EF_200Rnd_30mm_HEDP_shells_Tracer_Red
	{
		author = "Radium";
		DLC = "ef";
		ammo = "EF_B_30mm_HEDPAX";
		displayNameShort = "HE-DP-AX";
	};
	class EF_Magazine_Titan_NLOS_1Rnd;
	class EF_Magazine_Titan_NLOS_AX_1Rnd: EF_Magazine_Titan_NLOS_1Rnd
	{
		author = "Radium";
		DLC = "ef";
		scope = 2;
		displayName = "Titan NLOS-AX";
		displayNameShort = "NLOS-AX";
		descriptionShort = "Long-range anti-tank missile loaded with powerful anti-xeno payload. Requires datalink to gather targeting information, can engage both laser and vehicle targets.";
		ammo = "EF_Ammo_Titan_NLOS_AX";
		count = 1;
		nameSound = "missiles";
	};
	class EF_Magazine_Titan_NLOS_AX_2Rnd: EF_Magazine_Titan_NLOS_AX_1Rnd
	{
		author = "Radium";
		DLC = "ef";
		count = 2;
	};
	class EF_Magazine_Titan_NLOS_AX_2Rnd: EF_Magazine_Titan_NLOS_AX_1Rnd
	{
		author = "Radium";
		DLC = "ef";
		count = 4;
	};
	class EF_PylonMissile_Titan_NLOS_AX_1Rnd: EF_Magazine_Titan_NLOS_AX_1Rnd
	{
		author = "Radium";
		DLC = "ef";
		displayName = "Titan NLOS-AX 1x";
		model = "\ef\ef_weapons\titan_nlos\ef_titan_nlos_pod_single.p3d";
		hardpoints[] = {"TITAN_NLOS_1RND"};
		pylonWeapon = "EF_Weapon_Titan_NLOS_AX";
		mass = 90;
	};
	class EF_PylonMissile_Titan_NLOS_AX_2Rnd: EF_Magazine_Titan_NLOS_AX_2Rnd
	{
		author = "Radium";
		DLC = "ef";
		displayName = "Titan NLOS-AX 2x";
		model = "\ef\ef_weapons\titan_nlos\ef_titan_nlos_pod_double.p3d";
		hardpoints[] = {"TITAN_NLOS_2RND"};
		pylonWeapon = "EF_Weapon_Titan_NLOS_AX";
		mass = 180;
	};
	class EF_magazine_Missile_Sidearm_x1;
	class EF_magazine_Missile_Sidearm_AX_x1: EF_magazine_Missile_Sidearm_x1
	{
		displayName = "ARM-955M Hyperfox";
		descriptionShort = "Short-range, anti-radiation, air-to-surface missile using an extremely unstable anti-xeno warhead";
		ammo = "EF_ammo_Missile_Sidearm_AX";
	};
	class EF_PylonMissile_Missile_Sidearm_AX_x1: EF_magazine_Missile_Sidearm_AX_x1
	{
		count = 1;
		model = "\ef\ef_weapons\agm122\ef_agm122_pod.p3d";
		hardpoints[] = {"B_MISSILE_PYLON", "B_SIDEARM"};
		pylonWeapon = "EF_weapon_SidearmAXLauncher";
		mass = 125;
	};
	class EF_Diplomat_25Rnd_9x19_Mag;
	class XDF_Diplomat_25Rnd_blue_tracer_9x19_Mag: EF_Diplomat_25Rnd_9x19_Mag
	{
		author="Radium";
		scope=2;
		displayName="9 mm 25Rnd Tracer Mag (AX)";
		displaynameshort="AX Tracer";
		ammo="B_9x21_Ball_blue";
		tracersEvery=1;
	};
	class XDF_Diplomat_25Rnd_blue_reload_tracer_9x19_Mag: EF_Diplomat_25Rnd_9x19_Mag
	{
		author="Radium";
		scope=2;
		displayName="9 mm 25Rnd Reload Tracer Mag (AX)";
		displaynameshort="AX R-Tracer";
		ammo="B_9x21_Ball_blue";
		tracersEvery=4;
		lastRoundsTracer=4;
	};
};