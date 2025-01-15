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
	class EF_Magazine_Titan_NLOS_1Rnd;
	class EF_PylonMissile_Titan_NLOS_AX_1Rnd: EF_Magazine_Titan_NLOS_1Rnd
	{
		author = "Radium";
		DLC = "ef";
		displayName = "Titan NLOS-AX 1x";
		model = "\ef\ef_weapons\titan_nlos\ef_titan_nlos_pod_single.p3d";
		hardpoints[] = {"TITAN_NLOS_1RND"};
		pylonWeapon = "EF_Weapon_Titan_NLOS";
		mass = 90;
	};
	class EF_Magazine_Titan_NLOS_2Rnd;
	class EF_PylonMissile_Titan_NLOS_AX_2Rnd: EF_Magazine_Titan_NLOS_2Rnd
	{
		author = "Radium";
		DLC = "ef";
		displayName = "Titan NLOS-AX 2x";
		model = "\ef\ef_weapons\titan_nlos\ef_titan_nlos_pod_double.p3d";
		hardpoints[] = {"TITAN_NLOS_2RND"};
		pylonWeapon = "EF_Weapon_Titan_NLOS";
		mass = 180;
	};
};