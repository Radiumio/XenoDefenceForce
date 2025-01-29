class assembleInfo;
class CfgVehicles
{
    class Weapon_Bag_Base;
	class XDF_shield_backpack: Weapon_Bag_Base
	{
		author = "Radium";
		DLC = "ws";
		displayName = "XDF Proto-Shield Harness";
		picture = "lxws\shield_f_lxws\data\ui\icon_shield_ca";
		faction = "XDF";
		side = 1;
		scope = 2;
		mass = 180;
		model = "lxws\shield_f_lxws\shield_backpack_black.p3d";
		hiddenSelections[] = {"CamoB", "camo"};
		hiddenSelectionsMaterials[] = {"lxws\shield_f_lxws\data\shield_bag_mat.rvmat", "lxws\shield_f_lxws\data\shield_mat.rvmat"};
		hiddenSelectionsTextures[] = {"lxws\shield_f_lxws\data\bag_black_co.paa", "\xdf_ws\retextures\protoShield\ProtoShield_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base = "";
			assembleTo = "XDF_protoShield";
			displayName = "XDF Proto-Shield";
		};
	};
    class B_shield_lxWS;
	class XDF_protoShield: B_shield_lxWS
	{
		author = "Radium";
		DLC = "ws";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Proto-Shield";
        armor = 2500;
		hiddenselections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\xdf_ws\retextures\protoShield\ProtoShield_CO.paa"};
		faction = "XDF";
		class HitPoints
		{
			class HitHull
			{
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_points";
				armor = 100;
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.8;
				explosionShielding = 0.8;
				radius = 0.1;
			};
		};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"XDF_shield_backpack"};
		};
	};
	class B_ION_Heli_Light_02_dynamicLoadout_lxWS;
	class XDF_Mako_UP: B_ION_Heli_Light_02_dynamicLoadout_lxWS
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Mako (UP)";
		editorPreview="\xdf_ws\previews\vehicles\XDF_Mako_UP.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		fuelCapacity = 1200; // Default 800
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
				"\xdf\retextures\mako\heli_light_02_ext_co.paa",
				"\a3\air_f\data\rockets_co.paa",
				"\xdf_ws\retextures\mako\lxws_heli_light_02_adds_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				factions[]=
				{
					"B_XDF"
				};
				textures[]=
				{
					"\xdf\retextures\mako\heli_light_02_ext_co.paa",
				    "\a3\air_f\data\rockets_co.paa",
					"\xdf_ws\retextures\mako\lxws_heli_light_02_adds_co.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_ION_Heli_Light_02_unarmed_lxWS;
	class XDF_Mako_UP_Unarmed: B_ION_Heli_Light_02_unarmed_lxWS
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Mako (UP, Unarmed)";
		editorPreview="\xdf_ws\previews\vehicles\XDF_Mako_UP_Unarmed.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		fuelCapacity = 1200; // Default 800
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
				"\xdf\retextures\mako\heli_light_02_ext_co.paa",
				"\a3\air_f\data\rockets_co.paa",
				"\xdf_ws\retextures\mako\lxws_heli_light_02_adds_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				factions[]=
				{
					"B_XDF"
				};
				textures[]=
				{
					"\xdf\retextures\mako\heli_light_02_ext_co.paa",
				    "\a3\air_f\data\rockets_co.paa",
					"\xdf_ws\retextures\mako\lxws_heli_light_02_adds_co.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_APC_Wheeled_01_atgm_lxWS;
	class B_APC_Wheeled_01_atgm_lxWS_OCimport_01: B_APC_Wheeled_01_atgm_lxWS { scope = 0; class Turrets; };
	class B_APC_Wheeled_01_atgm_lxWS_OCimport_02: B_APC_Wheeled_01_atgm_lxWS_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Commando_ATGM: B_APC_Wheeled_01_atgm_lxWS_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Commando (ATGM)";
		editorPreview="\xdf_ws\previews\vehicles\XDF_Commando_ATGM.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 640; // Default 320
		armorStructural = 8; // Default 5
		maxSpeed = 220; // Default 110
		fuelCapacity = 60; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 0.85; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 45.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
			"\xdf\retextures\commando\camonet_nato_black_co.paa",
			"\xdf\retextures\commando\cage_black_co.paa",
			"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
		};	
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
					"\xdf\retextures\commando\camonet_nato_black_co.paa",
					"\xdf\retextures\commando\cage_black_co.paa",
					"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"autocannon_40mm_CTWS",
					"LMG_Minigun_AX",
					"missiles_titan"
				};
				magazines[]=
				{
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"2000Rnd_65x39_Belt_blue",
					"2000Rnd_65x39_Belt_blue",
					"2000Rnd_65x39_Belt_blue",
					"2000Rnd_65x39_Belt_blue",
					"4Rnd_GAT_missiles_lxWS",
					"4Rnd_GAT_missiles_lxWS"
				};
			};
		};
	};
	class B_APC_Wheeled_01_command_lxWS;
	class XDF_Commando_CV: B_APC_Wheeled_01_command_lxWS
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Commando (CV)";
		editorPreview="\xdf_ws\previews\vehicles\XDF_Commando_CV.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 640; // Default 320
		armorStructural = 8; // Default 5
		maxSpeed = 220; // Default 110
		fuelCapacity = 60; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 0.85; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 45.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
			"\xdf\retextures\commando\camonet_nato_black_co.paa",
			"\xdf\retextures\commando\cage_black_co.paa",
			"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
		};	
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
					"\xdf\retextures\commando\camonet_nato_black_co.paa",
					"\xdf\retextures\commando\cage_black_co.paa",
					"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_APC_Wheeled_01_mortar_lxWS;
	class XDF_Commando_Mortar: B_APC_Wheeled_01_mortar_lxWS
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Commando (Mortar)";
		editorPreview="\xdf_ws\previews\vehicles\XDF_Commando_Mortar.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 640; // Default 320
		armorStructural = 8; // Default 5
		maxSpeed = 220; // Default 110
		fuelCapacity = 60; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 0.85; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 45.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
			"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
			"\xdf\retextures\commando\camonet_nato_black_co.paa",
			"\xdf\retextures\commando\cage_black_co.paa",
			"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
		};	
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\commando\apc_wheeled_01_base_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_adds_co.paa",
					"\xdf\retextures\commando\apc_wheeled_01_tows_co.paa",
					"\xdf\retextures\commando\camonet_nato_black_co.paa",
					"\xdf\retextures\commando\cage_black_co.paa",
					"\xdf_ws\retextures\commando\APC_Wheeled_01_lxws_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
};