class CfgVehicles
{	// Uniforms
	class O_R_Gorka_black_F;
	class O_XLA_Uniform_Red: O_R_Gorka_black_F
	{
		uniformClass="U_XLA_Uniform_Red";
		modelSides[]={0,3,2};
		hiddenSelectionsTextures[]=
		{
			"\xla\retextures\xla_uniform\uniforms\gorka_01_red_co.paa"
		};
	};
	class B_Soldier_F;
	class O_XLA_Grunt: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Grunt";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_blk",
			"H_SSU_Cap_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_blk",
			"H_SSU_Cap_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};

		weapons[] = {
			"arifle_AKM_F"
		};
		respawnWeapons[] = {
			"arifle_AKM_F"
		};

		magazines[] = {
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class O_XLA_Grenadier: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Grenadier";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_PlateCarrier2_blk",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};
		respawnlinkedItems[] = {
			"V_PlateCarrier2_blk",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};

		weapons[] = {
			"arifle_Katiba_GL_F"
		};
		respawnWeapons[] = {
			"arifle_Katiba_GL_F"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class O_XLA_Machinegunner: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Machinegunner";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_SSU_Boonie_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_SSU_Boonie_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};

		weapons[] = {
			"LMG_03_F"
		};
		respawnWeapons[] = {
			"LMG_03_F"
		};

		magazines[] = {
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_AssaultPack_blk";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class O_XLA_Marksman: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Marksman";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_Beret_blk",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_Beret_blk",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};

		weapons[] = {
			"srifle_DMR_06_hunter_F"
		};
		respawnWeapons[] = {
			"srifle_DMR_06_hunter_F"
		};

		magazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class O_XLA_Medic: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Medic";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Vest_Black",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Vest_Black",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_Bandanna_RedFlame1"
		};

		weapons[] = {
			"SMG_01_F"
		};
		respawnWeapons[] = {
			"SMG_01_F"
		};

		magazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		backpack = "B_AssaultPack_blk_medic";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class O_XLA_Defector: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XLA Defector";
		editorPreview="";
		side = 0;
		faction = "O_XLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XLA_Uniform_Red";
		linkedItems[] = {
			"V_XLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_XDF_Balaclava_TI_Nanowrap_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_XDF_Balaclava_TI_Nanowrap_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	
	// Hidden Unit Backpacks
	class B_AssaultPack_blk;
	class B_AssaultPack_blk_medic : B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class x_Medkit
			{
				magazine = "Medikit";
				count = 1;
			};
			class x_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 10;
			};
		};
		class TransportItems {};
	};
};