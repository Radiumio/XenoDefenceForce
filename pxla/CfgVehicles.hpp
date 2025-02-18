class CfgVehicles
{	
	class I_APC_Wheeled_03_cannon_F;
	class PXLA_Dementer: I_APC_Wheeled_03_cannon_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Hijacked Dementer";
		editorPreview="\pxla\previews\vehicles\pxla_Dementer.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Grunt";
		armor = 576; // Default 480
		armorStructural = 6; // Default 5
		maxSpeed = 220; // Default 110
		fuelCapacity = 48; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"O_PXLA_Grunt"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\dementer\apc_wheeled_03_ext_co.paa",
			"\pxla\retextures\dementer\apc_wheeled_03_ext2_co.paa",
			"\pxla\retextures\dementer\rcws30_black_co.paa",
			"\pxla\retextures\dementer\apc_wheeled_03_ext_alpha_co.paa",
			"\xdf\retextures\dementer\camonet_nato_black_co.paa",
			"\xdf\retextures\dementer\cage_black_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{			
					"\pxla\retextures\dementer\apc_wheeled_03_ext_co.paa",
					"\pxla\retextures\dementer\apc_wheeled_03_ext2_co.paa",
					"\pxla\retextures\dementer\rcws30_black_co.paa",
					"\pxla\retextures\dementer\apc_wheeled_03_ext_alpha_co.paa",
					"\xdf\retextures\dementer\camonet_nato_black_co.paa",
					"\xdf\retextures\dementer\cage_black_co.paa"
				};
				factions[]=
				{
					"O_PXLA"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class I_G_Offroad_01_F;
	class PXLA_Offroad: I_G_Offroad_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Offroad";
		editorPreview="\xdf\previews\vehicles\PXLA_Offroad.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Grunt";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"O_PXLA_Grunt"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\offroad\offroad_01_ext_co.paa",
			"\pxla\retextures\offroad\offroad_01_ext_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\offroad\offroad_01_ext_co.paa",
					"\pxla\retextures\offroad\offroad_01_ext_co.paa"
				};
				factions[]=
				{
					"O_PXLA"
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
	};
	class I_G_Offroad_01_AT_F;
	class PXLA_Offroad_AT: I_G_Offroad_01_AT_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Offroad (AT)";
		editorPreview="\xdf\previews\vehicles\PXLA_Offroad_AT.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Grunt";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"O_PXLA_Grunt"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\offroad\offroad_01_ext_co.paa",
			"\pxla\retextures\offroad\offroad_01_ext_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\offroad\offroad_01_ext_co.paa",
					"\pxla\retextures\offroad\offroad_01_ext_co.paa"
				};
				factions[]=
				{
					"O_PXLA"
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
	};
	class I_G_Offroad_01_armed_F;
	class PXLA_Offroad_HMG: I_G_Offroad_01_armed_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Offroad (HMG)";
		editorPreview="\xdf\previews\vehicles\PXLA_Offroad_HMG.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Grunt";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"O_PXLA_Grunt"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\offroad\offroad_01_ext_co.paa",
			"\pxla\retextures\offroad\offroad_01_ext_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\offroad\offroad_01_ext_co.paa",
					"\pxla\retextures\offroad\offroad_01_ext_co.paa"
				};
				factions[]=
				{
					"O_PXLA"
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
	};
	class I_G_Offroad_01_repair_F;
	class PXLA_Offroad_Repair: I_G_Offroad_01_repair_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Offroad (Repair)";
		editorPreview="\xdf\previews\vehicles\PXLA_Offroad_Repair.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Grunt";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"O_PXLA_Grunt"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\offroad\offroad_01_ext_co.paa",
			"\pxla\retextures\offroad\offroad_01_ext_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\offroad\offroad_01_ext_co.paa",
					"\pxla\retextures\offroad\offroad_01_ext_co.paa"
				};
				factions[]=
				{
					"O_PXLA"
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
	};

	// Uniforms
	class O_R_Gorka_black_F;
	class O_PXLA_Uniform_Red: O_R_Gorka_black_F
	{
		uniformClass="U_PXLA_Uniform_Red";
		modelSides[]={0,3,2};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_co.paa"
		};
	};
	class B_Soldier_F;
	class O_PXLA_Grunt: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Grunt";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_blk",
			"H_SSU_Cap_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_blk",
			"H_SSU_Cap_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
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
	class O_PXLA_Grenadier: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Grenadier";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_XLA_Defector_Carrier_Rig_Red",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_XLA_Defector_Carrier_Rig_Red",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
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
	class O_PXLA_Machinegunner: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Machinegunner";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_SSU_Boonie_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_SSU_Boonie_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
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
	class O_PXLA_HeavyGunner: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Heavy Gunner";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_NM_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_NM_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"MMG_01_tan_F"
		};
		respawnWeapons[] = {
			"MMG_01_tan_F"
		};

		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
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
	class O_PXLA_Marksman: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Marksman";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_Beret_blk",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Chest_Rig_Black",
			"H_Beret_blk",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
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
	class B_medic_F;
	class O_PXLA_Medic: B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Medic";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_SSU_Tactical_Vest_Black",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_SSU_Tactical_Vest_Black",
			"H_PASGT_basic_black_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
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
			"FirstAidKit",
			"Medikit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
	};
	class O_PXLA_Defector: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Defector";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
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
	class O_PXLA_Infiltrator: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Infiltrator";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_GM6_F"
		};
		respawnWeapons[] = {
			"XDF_srifle_GM6_F"
		};

		magazines[] = {
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
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
	class O_PXLA_Rifleman: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Rifleman";
		editorPreview="";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_PXLA_Defector_Carrier_Lite_Red",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_SPAR_01_blk_F"
		};
		respawnWeapons[] = {
			"arifle_SPAR_01_blk_F"
		};

		magazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
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
};