class CfgVehicles 
{
	class qav_abramsx;
	class qav_abramsx_OCimport_01: qav_abramsx { scope = 0; class Turrets; };
	class qav_abramsx_OCimport_02: qav_abramsx_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class qav_abramsx_XDF: qav_abramsx_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Paladin";
		editorPreview="\xdf\previews\vehicles\qav_abramsx_XDF.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1900;
		armorLights = 0.1;
		armorStructural = 11;
		fuelCapacity = 60;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
			"\xdf\retextures\odin\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
					"\xdf\retextures\odin\camonet_nato_black_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"autocannon_30mm_M914",
							"qav_SmokeLauncher",
							"Laserdesignator_mounted"
						};
						magazines[] = 
						{
							"qav_100Rnd_30mm_MP_shells_Tracer_AX",
							"qav_100Rnd_30mm_MP_shells_Tracer_AX",
							"qav_SmokeLauncherMag",
							"qav_SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
				weapons[] = 
				{
					"Laserdesignator_mounted",
					"cannon_120mm_M360",
					"qav_abrams_coax"
				};
				magazines[] = 
				{	
					"18Rnd_120mm_APFSDS_T_Blue_AX",
					"32Rnd_120mm_APFSDS_shells_Tracer_Red",
					"20Rnd_120mm_HEAT_MP_T_Red",
					"4Rnd_120mm_LG_cannon_missiles",
					"4Rnd_120mm_LG_cannon_missiles",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"Laserbatteries"
				};
			};
		};
	};
	class qav_abramsx_tusk;
	class qav_abramsx_tusk_OCimport_01: qav_abramsx_tusk { scope = 0; class Turrets; };
	class qav_abramsx_tusk_OCimport_02: qav_abramsx_tusk_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class qav_abramsx_tusk_XDF: qav_abramsx_tusk_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Paladin TUSK";
		editorPreview="\xdf\previews\vehicles\qav_abramsx_tusk_XDF.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1900;
		armorLights = 0.1;
		armorStructural = 11;
		fuelCapacity = 60;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
			"\xdf_abramsx\retextures\abramsx\abramsxtusk_co.paa",
			"\xdf\retextures\odin\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
					"\xdf_abramsx\retextures\abramsx\abramsxtusk_co.paa",
					"\xdf\retextures\odin\camonet_nato_black_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"qav_abramsx_XM134",
							"qav_SmokeLauncher",
							"Laserdesignator_mounted"
						};
						magazines[] = 
						{
							"qav_1500Rnd_12x7_belt_AX",
							"qav_1500Rnd_12x7_belt_AX",
							"qav_SmokeLauncherMag",
							"qav_SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
				weapons[] = 
				{
					"Laserdesignator_mounted",
					"cannon_120mm_M360",
					"qav_30mm_M914_coax",
					"qav_abrams_coax"
				};
				magazines[] = 
				{	
					"18Rnd_120mm_APFSDS_T_Blue_AX",
					"32Rnd_120mm_APFSDS_shells_Tracer_Red",
					"20Rnd_120mm_HEAT_MP_T_Red",
					"4Rnd_120mm_LG_cannon_missiles",
					"4Rnd_120mm_LG_cannon_missiles",
					"qav_100Rnd_30mm_MP_shells_Tracer_AX",
					"qav_100Rnd_30mm_MP_shells_Tracer_AX",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"200Rnd_338_Mag_blue_tracer",
					"Laserbatteries"
				};
			};
		};
	};
	class qav_abramsx_templar;
	class qav_abramsx_templar_OCimport_01: qav_abramsx_templar { scope = 0; class Turrets; };
	class qav_abramsx_templar_OCimport_02: qav_abramsx_templar_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class qav_abramsx_templar_XDF: qav_abramsx_templar_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Paladin CTWS";
		editorPreview="\xdf\previews\vehicles\qav_abramsx_templar_XDF.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1900;
		armorLights = 0.1;
		armorStructural = 11;
		fuelCapacity = 60;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
			"\xdf\retextures\odin\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
					"\xdf\retextures\odin\camonet_nato_black_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"autocannon_30mm_M914_twin",
							"qav_SmokeLauncher",
							"Laserdesignator_mounted"
						};
						magazines[] = 
						{
							"qav_200Rnd_30mm_MP_shells_Tracer_AX",
							"qav_200Rnd_30mm_MP_shells_Tracer_AX",
							"qav_SmokeLauncherMag",
							"qav_SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
				weapons[] = 
				{
					"Laserdesignator_mounted",
					"cannon_120mm_M360",
					"qav_abrams_m2_coax"
				};
				magazines[] = 
				{	
					"18Rnd_120mm_APFSDS_T_Blue_AX",
					"32Rnd_120mm_APFSDS_shells_Tracer_Red",
					"20Rnd_120mm_HEAT_MP_T_Red",
					"4Rnd_120mm_LG_cannon_missiles",
					"4Rnd_120mm_LG_cannon_missiles",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"qav_200Rnd_127x99_AX_mag",
					"Laserbatteries"
				};
			};
		};
	};
	class qav_abramsx_zeus;
	class qav_abramsx_zeus_OCimport_01: qav_abramsx_zeus { scope = 0; class Turrets; };
	class qav_abramsx_zeus_OCimport_02: qav_abramsx_zeus_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class qav_abramsx_zeus_XDF: qav_abramsx_zeus_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Imperator RG";
		editorPreview="\xdf\previews\vehicles\qav_abramsx_zeus_XDF.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1900;
		armorLights = 0.1;
		armorStructural = 11;
		fuelCapacity = 45;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
			"\xdf\retextures\odin\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_abramsx\retextures\abramsx\AbramsX_Hull_XDF_co.paa",
					"\xdf\retextures\odin\camonet_nato_black_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"QAV_abramsx_M2_RWS",
							"qav_SmokeLauncher",
							"Laserdesignator_mounted"
						};
						magazines[] = 
						{
							"qav_300Rnd_127x99_AX_mag",
							"qav_300Rnd_127x99_AX_mag",
							"qav_300Rnd_127x99_AX_mag",
							"qav_300Rnd_127x99_AX_mag",
							"qav_300Rnd_127x99_AX_mag",
							"qav_300Rnd_127x99_AX_mag",
							"qav_SmokeLauncherMag",
							"qav_SmokeLauncherMag",
							"Laserbatteries"
						};
					};
				};
				weapons[] = {"cannon_AX_railgun_fake","cannon_AX_railgun","Laserdesignator_mounted"};
				magazines[] = {"45Rnd_75mm_RailGun_APFSDS_AX_mag","AX_RailGun_01_DummyMagazine","Laserbatteries"};
			};
		};
	};
};