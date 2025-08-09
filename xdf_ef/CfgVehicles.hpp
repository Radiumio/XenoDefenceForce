class CfgVehicles
{
	class EF_B_MRAP_01_FSV_NATO;
	class EF_B_MRAP_01_FSV_NATO_OCimport_01: EF_B_MRAP_01_FSV_NATO { scope = 0; class AnimationSources; class Turrets; };
	class EF_B_MRAP_01_FSV_NATO_OCimport_02: EF_B_MRAP_01_FSV_NATO_OCimport_01 {
		class Turrets: Turrets {
			class MainTurret;
			class CommanderTurret;
		};
	};
	class XDF_Boar_FSV: EF_B_MRAP_01_FSV_NATO_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar FSV";
		editorPreview="\xdf\previews\vehicles\XDF_Boar_FSV.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default 200
		armorStructural = 10; // Default 5
		maxSpeed = 230; // Default 115
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0
		engineMOI = 1.2;
		accelAidForceCoef = 4.5;
		accelAidForceSpd = 80.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf_ef\retextures\boar\hunter_01_CO.paa",
			"\xdf_ef\retextures\boar\hunter_02_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "EF_autocannon_30mm_Hunter_AX";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "EF_autocannon_30mm_Hunter_AX";
			};
			class MainGun_recoil
			{
				source = "reload";
				weapon = "EF_autocannon_30mm_Hunter_AX";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "EF_missiles_titan_AX_manual";
			};
			class missiles_reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "EF_missiles_titan_AX_manual";
			};
			class smoke_revolving
			{
				source = "revolving";
				weapon = "SmokeLauncher";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"EF_autocannon_30mm_Hunter_AX",
					"EF_missiles_titan_AX_manual"
				};
				magazines[] = 
				{
					"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue",
					"2Rnd_Titan_AT_XDF_missiles",
					"2Rnd_Titan_AT_XDF_missiles", 
					"2Rnd_Titan_AT_XDF_missiles", 
					"2Rnd_Titan_AT_XDF_missiles"
				};	
			};
			class CommanderTurret: CommanderTurret {};
		};
	};
	class EF_B_MRAP_01_AT_NATO;
	class EF_B_MRAP_01_AT_NATO_OCimport_01: EF_B_MRAP_01_AT_NATO { scope = 0; class AnimationSources; class Turrets; };
	class EF_B_MRAP_01_AT_NATO_OCimport_02: EF_B_MRAP_01_AT_NATO_OCimport_01 { 
		class Turrets : Turrets { 
			class MainTurret;
			class CommanderTurret;
		};
	};
	class XDF_Boar_AT: EF_B_MRAP_01_AT_NATO_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar AT";
		editorPreview="\xdf\previews\vehicles\XDF_Boar_AT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default 200
		armorStructural = 10; // Default 5
		maxSpeed = 230; // Default 115
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0
		engineMOI = 1.2;
		accelAidForceCoef = 4.5;
		accelAidForceSpd = 80.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf_ef\retextures\boar\hunter_01_CO.paa",
			"\xdf_ef\retextures\boar\hunter_02_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "EF_LMG_coax_Hunter";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "EF_LMG_coax_Hunter";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "EF_Weapon_Titan_NLOS_AX";
			};
			class missiles_reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "EF_Weapon_Titan_NLOS_AX";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"EF_Weapon_Titan_NLOS_AX", 
					"EF_LMG_coax_Hunter", 
					"LaserDesignator_mounted"
				};
				magazines[] = 
				{
					"EF_Magazine_Titan_NLOS_AX_2Rnd",
					"EF_Magazine_Titan_NLOS_AX_2Rnd", 
					"EF_Magazine_Titan_NLOS_AX_2Rnd",
					"EF_Magazine_Titan_NLOS_AX_2Rnd",
					"EF_Magazine_Titan_NLOS_AX_2Rnd", 
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red", 
					"200Rnd_762x51_Belt_Red", 
					"200Rnd_762x51_Belt_Red", 
					"200Rnd_762x51_Belt_Red",
					"LaserBatteries"
				};
			};
			class CommanderTurret: CommanderTurret {};
		};
	};
	class EF_B_MRAP_01_LAAD_NATO;
	class EF_B_MRAP_01_LAAD_NATO_OCimport_01: EF_B_MRAP_01_LAAD_NATO { scope = 0; class AnimationSources; class Turrets; };
	class EF_B_MRAP_01_LAAD_NATO_OCimport_02: EF_B_MRAP_01_LAAD_NATO_OCimport_01 {
		class Turrets: Turrets {
			class MainTurret;
			class CommanderTurret;
		};
	};
	class XDF_Boar_LAAD: EF_B_MRAP_01_LAAD_NATO_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar LAAD";
		editorPreview="\xdf\previews\vehicles\XDF_Boar_LAAD.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default 200
		armorStructural = 10; // Default 5
		maxSpeed = 230; // Default 115
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0
		engineMOI = 1.2;
		accelAidForceCoef = 4.5;
		accelAidForceSpd = 80.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf_ef\retextures\boar\hunter_01_CO.paa",
			"\xdf_ef\retextures\boar\hunter_02_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "EF_missiles_SAAMI_AX_manual";
			};
			class missiles_reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "EF_missiles_SAAMI_AX_manual";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"EF_autocannon_30mm_Hunter_AX",
					"EF_missiles_SAAMI_AX_manual"
				};
				magazines[] = 
				{
					"SmokeLauncherMag",
					"EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue",
					"EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue",
					"4Rnd_70mm_SAAMI_AX_missiles", 
					"4Rnd_70mm_SAAMI_AX_missiles", 
					"4Rnd_70mm_SAAMI_AX_missiles"
				};
			};
			class CommanderTurret: CommanderTurret {};
		};
	};
	class EF_B_AH99J_NATO;
	class EF_B_AH99J_NATO_OCimport_01 : EF_B_AH99J_NATO { scope = 0; class AnimationSources; class Turrets; };
	class EF_B_AH99J_NATO_OCimport_02 : EF_B_AH99J_NATO_OCimport_01 {
		class AnimationSources;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class XDF_Python: EF_B_AH99J_NATO_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Python";
		editorPreview="\xdf\previews\vehicles\XDF_Python.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		fuelCapacity = 3750; // Default 2500
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\comanche\heli_attack_01_co.paa",
			"\xdf_ef\retextures\python\ah99j_1_CO.paa"
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
					"\xdf\retextures\comanche\heli_attack_01_co.paa",
					"\xdf_ef\retextures\python\ah99j_1_CO.paa"
				};
			};
			class XDF_Temperate
			{
				displayName="Xeno Defence Force - Temperate";
				author="Radium";
				factions[]=
				{
					"B_XDF"
				};
				textures[]=
				{
					"\xdf\retextures\comanche\heli_attack_01_temperate_co.paa",
					"\xdf_ef\retextures\python\ah99j_1_temperate_CO.paa"
				};
			};
			class XDF_Honeycomb
			{
				displayName="Xeno Defence Force - Honeycomb";
				author="Radium";
				factions[]=
				{
					"B_XDF"
				};
				textures[]=
				{
					"\xdf\retextures\comanche\heli_attack_01_honeycomb_co.paa",
					"\xdf_ef\retextures\python\ah99j_1_honeycomb_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Gatling 
			{
				source="revolving";
				weapon="AX_gatling_20mm";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="AX_gatling_20mm";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"AX_gatling_20mm",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"1500Rnd_20mm_AX_shells",
					"Laserbatteries"
				};
			};
		};
	};
	class EF_B_AAV9_MJTF_Des;
	class XDF_AAV9_Barracuda: EF_B_AAV9_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AAV-9 Barracuda";
		editorPreview="\xdf\previews\vehicles\XDF_AAV9_Barracuda.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 825; // Default 550
		armorStructural = 7; // Default 6
		fuelCapacity = 54; // Default 18
		damageResistance = 0.1; // Default 0.0038900001
		engineMOI = 2;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 40.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"camo7", 
			"camo8", 
			"camonet"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\mack\aav9_hull_1_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_2_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_3_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_4_co.paa", 
			"\xdf_ef\retextures\mack\aav9_hull_5_co.paa", 
			"\xdf_ef\retextures\mack\aav9_turret_1_co.paa", 
			"\xdf_ef\retextures\mack\aav9_alpha_1_co.paa", 
			"\xdf_ef\retextures\mack\aav9_turret_2_co.paa", 
			"\xdf_ef\retextures\mack\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\mack\aav9_hull_1_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_2_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_3_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_4_co.paa", 
					"\xdf_ef\retextures\mack\aav9_hull_5_co.paa", 
					"\xdf_ef\retextures\mack\aav9_turret_1_co.paa", 
					"\xdf_ef\retextures\mack\aav9_alpha_1_co.paa", 
					"\xdf_ef\retextures\mack\aav9_turret_2_co.paa", 
					"\xdf_ef\retextures\mack\camonet_nato_black_co.paa"
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
	class EF_B_AAV9_50mm_MJTF_Des;
	class XDF_AAV9_50mm_Barracuda: EF_B_AAV9_50mm_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AAV-9A1 Barracuda";
		editorPreview="\xdf\previews\vehicles\XDF_AAV9_50mm_Barracuda.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 825; // Default 550
		armorStructural = 7; // Default 6
		fuelCapacity = 54; // Default 18
		damageResistance = 0.1; // Default 0.0038900001
		engineMOI = 2;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 40.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"camo7", 
			"camo8", 
			"camonet"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\mack\aav9_hull_1_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_2_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_3_co.paa", 
		    "\xdf_ef\retextures\mack\aav9_hull_4_co.paa", 
			"\xdf_ef\retextures\mack\aav9_hull_5_co.paa", 
			"\xdf_ef\retextures\mack\aav9_turret_1_co.paa", 
			"\xdf_ef\retextures\mack\aav9_alpha_1_co.paa", 
			"\xdf_ef\retextures\mack\aav9_turret_2_co.paa", 
			"\xdf_ef\retextures\mack\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\mack\aav9_hull_1_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_2_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_3_co.paa", 
		    		"\xdf_ef\retextures\mack\aav9_hull_4_co.paa", 
					"\xdf_ef\retextures\mack\aav9_hull_5_co.paa", 
					"\xdf_ef\retextures\mack\aav9_turret_1_co.paa", 
					"\xdf_ef\retextures\mack\aav9_alpha_1_co.paa", 
					"\xdf_ef\retextures\mack\aav9_turret_2_co.paa", 
					"\xdf_ef\retextures\mack\camonet_nato_black_co.paa"
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
	class EF_B_CombatBoat_Unarmed_MJTF_Des;
	class XDF_Achelois_Unarmed: EF_B_CombatBoat_Unarmed_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Achelois (Unarmed)";
		editorPreview="\xdf\previews\vehicles\XDF_Achelois_Unarmed.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default ?
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"monitor_gps"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
			"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
					"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
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
	class EF_B_CombatBoat_HMG_MJTF_Des;
	class XDF_Achelois_HMG: EF_B_CombatBoat_HMG_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Achelois (HMG)";
		editorPreview="\xdf\previews\vehicles\XDF_Achelois_HMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default ?
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"monitor_gps"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
			"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
					"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
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
	class EF_B_CombatBoat_AT_MJTF_Des;
	class XDF_Achelois_ATGM: EF_B_CombatBoat_AT_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Achelois (ATGM)";
		editorPreview="\xdf\previews\vehicles\XDF_Achelois_ATGM.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default ?
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"monitor_gps"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
			"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
			"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
			"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\achelois\combatboat_hull_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hull_2_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_hull_3_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_armor_1_co.paa", 
					"\xdf_ef\retextures\achelois\combatboat_hmg_1_co.paa",
					"\xdf_ef\retextures\achelois\combatboat_atgm_1_co.paa", 
					"#(rgb,1024,1024,1)ui(EF_GPSScreen,EF_GPSScreen)"
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
	class EF_B_LCC_MJTF_Des;
	class XDF_Bactrian_LCC: EF_B_LCC_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Bactrian LCC";
		editorPreview="\xdf\previews\vehicles\XDF_Bactrian_LCC.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		//armor = 600; // Default ?
		fuelCapacity = 1000; // default 700
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"camo7", 
			"hullnumber1", 
			"hullnumber2", 
			"hullnumber3", 
			"hullnumber4"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\bactrian\lcc_hull_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_2_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_3_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_4_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_int_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_cabin_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_cabin_2_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa", 
			""
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\bactrian\lcc_hull_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_2_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_3_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_4_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_int_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_cabin_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_cabin_2_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa", 
					""
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
	class EF_B_LCC_SideLoad_MJTF_Des;
	class XDF_Bactrian_LCC_SideLoad: EF_B_LCC_SideLoad_MJTF_Des
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Bactrian LCC (Side Load)";
		editorPreview="\xdf\previews\vehicles\XDF_Bactrian_LCC.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		//armor = 600; // Default ?
		fuelCapacity = 1000; // default 700
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[] = 
		{
			"camo1", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"camo6", 
			"camo7", 
			"hullnumber1", 
			"hullnumber2", 
			"hullnumber3", 
			"hullnumber4"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\bactrian\lcc_hull_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_2_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_3_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_hull_4_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_int_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_cabin_1_co.paa", 
			"\xdf_ef\retextures\bactrian\lcc_cabin_2_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa", 
			""
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_ef\retextures\bactrian\lcc_hull_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_2_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_3_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_hull_4_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_int_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_cabin_1_co.paa", 
					"\xdf_ef\retextures\bactrian\lcc_cabin_2_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_01_co.paa", 
					"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_07_co.paa", 
					""
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

	//////////////////// INFANTRY ////////////////////
	class B_Soldier_base_F;
	class B_XDF_Marine_Uniform: B_Soldier_base_F
	{
		author="Radium";
		DLC="ef";
		scope=1;
		scopeCurator=0;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"ef\ef_marines\Data\US_Marines_FROG.rvmat", 
				"ef\ef_marines\Data\US_Marines_FROG_injury.rvmat", 
				"ef\ef_marines\Data\US_Marines_FROG_injury.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", 
				"A3\Characters_F\Common\Data\basicbody.rvmat", 
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat", 
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat", 
				"a3\characters_f\heads\data\hl_white.rvmat", 
				"a3\characters_f\heads\data\hl_white_injury.rvmat", 
				"a3\characters_f\heads\data\hl_white_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
		model="\ef\ef_marines\ef_u_frog.p3d";
		//modelSides[]={3, 1};
		//nakedUniform="U_BasicBody";
		uniformClass="U_XDF_Marine_Uniform";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_co.paa"
		};
	};
	class B_XDF_Marine_Uniform_Gloved: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Winter: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Pads: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl_kp.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Pads_Winter: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl_kp.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Rolled: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl_gl.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Rolled_Pads: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl_gl_kp.p3d";
	};
	class B_XDF_Marine_Uniform_Rolled: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl.p3d";
	};
	class EF_B_Marine_Diver_Des;
	class B_XDF_Marine_Diver: EF_B_Marine_Diver_Des
	{
		model = "\ef\ef_marines\ef_u_frog_diver.p3d";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
	};
	class B_recon_F;
	class B_XDF_Marine_TL : B_recon_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Team Leader";
		editorPreview="\xdf\previews\units\B_XDF_Marine_TL.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Pads";
		linkedItems[] = {
			"V_XDF_AAV_TL",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_TL",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_medic_F;
	class B_XDF_Marine_Medic : B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Medic";
		editorPreview="\xdf\previews\units\B_XDF_Marine_Medic.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Rolled_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Medic",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Medic",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Travel_Pack_med";
		items[]=
		{
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"Medikit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_recon_JTAC_F;
	class B_XDF_Marine_JTAC : B_recon_JTAC_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine JTAC";
		editorPreview="\xdf\previews\units\B_XDF_Marine_JTAC.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Scout",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Scout",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"UGL_FlareCIR_F",
			"UGL_FlareCIR_F",
			"UGL_FlareWhite_F",
			"UGL_FlareWhite_F",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"UGL_FlareCIR_F",
			"UGL_FlareCIR_F",
			"UGL_FlareWhite_F",
			"UGL_FlareWhite_F",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_RadioBag_Black";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_HeavyGunner_F;
	class B_XDF_Marine_Gunner : B_HeavyGunner_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Gunner";
		editorPreview="\xdf\previews\units\B_XDF_Marine_Gunner.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Support",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Support",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_02_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_02_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"130Rnd_338_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_Recon_Sharpshooter_F;
	class B_XDF_Marine_Hunter : B_Recon_Sharpshooter_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Hunter";
		editorPreview="\xdf\previews\units\B_XDF_Marine_Hunter.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Rolled_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Support",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Support",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_02_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_02_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"10Rnd_338_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_TacticalPack_Black";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_soldier_LAT2_F;
	class B_XDF_Marine_HAT : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_Marine_HAT.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Rifleman",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Rifleman",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Viper_Harness_Black_MAAWS";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Marine_Operative : B_recon_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marine Operative";
		editorPreview="\xdf\previews\units\B_XDF_Marine_Operative.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_MSF_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Marine_Uniform_Gloved_Rolled_Pads";
		linkedItems[] = {
			"V_XDF_AAV_Rifleman",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_AAV_Rifleman",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"EF_LPNVG_T",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"11Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
};