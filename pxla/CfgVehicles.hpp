#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class Components;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components{};
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components{};
};
class CfgVehicles
{	
	class I_APC_Wheeled_03_cannon_F;
	class PXLA_Dementer: I_APC_Wheeled_03_cannon_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Dementer";
		editorPreview="\pxla\previews\vehicles\PXLA_Dementer.jpg";
		side = 0;
		faction = "O_PXLA";
		editorSubcategory = "PXLA_HijackedVehicles";
		crew = "O_PXLA_Crewman";
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
			"O_PXLA_Crewman"
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
		editorPreview="\pxla\previews\vehicles\PXLA_Offroad.jpg";
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
		editorPreview="\pxla\previews\vehicles\PXLA_Offroad_AT.jpg";
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
		editorPreview="\pxla\previews\vehicles\PXLA_Offroad_HMG.jpg";
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
	class I_C_Offroad_02_unarmed_F;
	class PXLA_Jeep: I_C_Offroad_02_unarmed_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Jeep";
		editorPreview="\pxla\previews\vehicles\PXLA_Jeep.jpg";
		side = 0;
		faction = "O_PXLA";
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
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
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
	class I_C_Offroad_02_LMG_F;
	class PXLA_Jeep_LMG: I_C_Offroad_02_LMG_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Jeep (LMG)";
		editorPreview="\pxla\previews\vehicles\PXLA_Jeep_LMG.jpg";
		side = 0;
		faction = "O_PXLA";
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
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
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
	class I_C_Offroad_02_AT_F;
	class PXLA_Jeep_SPG: I_C_Offroad_02_AT_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Jeep (SPG)";
		editorPreview="\pxla\previews\vehicles\PXLA_Jeep_SPG.jpg";
		side = 0;
		faction = "O_PXLA";
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
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
			"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				textures[]=
				{
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_ext_red_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa",
					"\pxla\retextures\jeep\offroad_02_int_black_co.paa"
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
	class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class Components; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { 
		class Components;
    };
	class PXLA_Hornet: B_Heli_Light_01_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Hornet";
		editorSubcategory = "PXLA_HijackedAirVehicles";
		editorPreview="\pxla\previews\vehicles\PXLA_Hornet.jpg";
		side = 0;
		faction = "O_PXLA";
		crew = "O_PXLA_Crewman";
		armor = 120; // Default 30
		armorStructural = 4; // Default none
		maxSpeed = 245; // Default 245
		fuelCapacity = 484; // Default 242
		damageResistance = 0.02; // Default 0.01039
		typicalCargo[]=
		{
			"O_PXLA_Crewman"
		};
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		weapons[]=
		{
			"CMFlareLauncher_Singles"
		};
		magazines[]=
		{
			"120Rnd_CMFlareMagazine"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\hornet\heli_light_01_ext_blufor_co.paa"
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				factions[]=
				{
					"O_PXLA"
				};
				textures[]=
				{
					"\pxla\retextures\hornet\heli_light_01_ext_blufor_co.paa"
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ManSensorComponent: SensorTemplateMan
					{
						maxTrackableSpeed=15;
						angleRangeHorizontal=70;
						angleRangeVertical=34;
						animDirection="mainGun";
						aimDown=-0.5;
					};
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
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						angleRangeHorizontal=65;
						angleRangeVertical=45;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						angleRangeHorizontal=46;
						angleRangeVertical=34;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={250,500,1000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={250,500,1000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class MFD
		{
			class MFD_Pilot_10
			{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.491429,0.452766},
											1
										},
										
										{
											{0.495,0.452766},
											1
										},
										
										{
											{0.495,0.457802},
											1
										},
										
										{
											{0.491429,0.457802},
											1
										},
										
										{
											{0.491429,0.452766},
											1
										},
										{},
										
										{
											{0.499286,0.45578799},
											1
										},
										
										{
											{0.57714301,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.46283901},
											1
										},
										
										{
											{0.49285701,0.55752701},
											1
										},
										{},
										
										{
											{0.48857099,0.45578799},
											1
										},
										
										{
											{0.41,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.35404801},
											1
										},
										
										{
											{0.49285701,0.446722},
											1
										},
										{},
										
										{
											{0.61000001,0.29965201},
											1
										},
										
										{
											{0.64285702,0.29965201},
											1
										},
										
										{
											{0.64285702,0.342967},
											1
										},
										{},
										
										{
											{0.64285702,0.57565898},
											1
										},
										
										{
											{0.64285702,0.619982},
											1
										},
										
										{
											{0.61071402,0.619982},
											1
										},
										{},
										
										{
											{0.374286,0.619982},
											1
										},
										
										{
											{0.341429,0.619982},
											1
										},
										
										{
											{0.341429,0.57565898},
											1
										},
										{},
										
										{
											{0.374286,0.29965201},
											1
										},
										
										{
											{0.341429,0.29965201},
											1
										},
										
										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="laserDist";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
			};
			class MFD_Pilot_8
			{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
			};
			class MFD_Pilot_9
			{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
			};
			class AirplaneHUD
			{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=1;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={0};
						class Bones
						{
							class HUDCenter
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class WeaponAim
							{
								type="vector";
								source="weapon";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WeaponAimRelative: WeaponAim
							{
								source="weapontoview";
							};
							class VelocityVector
							{
								type="vector";
								source="velocityToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class ForwardVector
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.234,0.23};
							};
							class HorizonVector
							{
								type="horizontoview";
								pos0[]={0.5,0.5};
								pos10[]={0.83092302,0.825266};
								angle=0;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0068000001,-0.0099999998};
								projection=0;
							};
							class VerticalSpeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1;
								min=-10;
								max=10;
								minPos[]={0,-0.31999999};
								maxPos[]={0,0.31999999};
							};
							class HorizonBankRot
							{
								type="linear";
								source="horizonBank";
								min=-0.52359998;
								max=0.52359998;
								minPos[]={0.41,0.83999997};
								maxPos[]={0.58999997,0.83999997};
								aspectRatio=1;
							};
							class ImpactPoint
							{
								type="vector";
								source="ImpactPointToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Target
							{
								source="targettoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class LimitWaypoint
							{
								type="limit";
								limits[]={0.2,0.1,0.80000001,0.1};
							};
							class WPPoint
							{
								type="vector";
								source="WPPoint";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WPPointToView: WPPoint
							{
								source="WPPointToView";
							};
							class RadarHeight
							{
								type="linear";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								min=0;
								max=100;
								minPos[]={0.903,0.18000001};
								maxPos[]={0.903,0.81999999};
							};
							class HorizonBankRotFull
							{
								type="rotational";
								source="horizonBank";
								center[]={0,0};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24)";
							class HeadingNumber
							{
								type="text";
								source="Heading";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									{0.5,0.0060000001},
									1
								};
								right[]=
								{
									{0.55000001,0.0060000001},
									1
								};
								down[]=
								{
									{0.5,0.046},
									1
								};
							};
							class HeadingRotation
							{
								condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
								class HeadingHeadNumber
								{
									type="text";
									source="cameraDir";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										
										{
											"0.80-0.302",
											"0.082-0.025"
										},
										1
									};
									right[]=
									{
										
										{
											"0.83-0.302",
											"0.082-0.025"
										},
										1
									};
									down[]=
									{
										
										{
											"0.80-0.302",
											"0.113-0.025"
										},
										1
									};
								};
								class HeadingArrow
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0.47799999,0.045000002},
											1
										},
										
										{
											{0.52200001,0.045000002},
											1
										},
										
										{
											{0.55199999,0.07},
											1
										},
										
										{
											{0.52200001,0.094999999},
											1
										},
										
										{
											{0.47799999,0.094999999},
											1
										},
										
										{
											{0.44800001,0.07},
											1
										},
										
										{
											{0.47799999,0.045000002},
											1
										},
										{}
									};
								};
								class HeadingScaleRight
								{
									clipTL[]={0.55000001,0.050000001};
									clipBR[]={0.82999998,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.5;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.49599999,0.050000001};
										right[]={0.53600001,0.050000001};
										down[]={0.49599999,0.090000004};
									};
								};
								class HeadingScaleMidle
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=1;
									width=4;
									top=0.44999999;
									center=0.5;
									bottom=0.55000001;
									lineXleft=0.11;
									lineYright=0.1;
									lineXleftMajor=0.11;
									lineYrightMajor=0.1;
									majorLineEach=2;
									step=22.5;
									stepSize=0.075000003;
									align="center";
									scale=1;
									numberEach=0;
									pos[]={0.47,0.050000001};
									right[]={0.5,0.050000001};
									down[]={0.44999999,0.090000004};
								};
								class HeadingScaleLeft
								{
									clipTL[]={0.18000001,0.050000001};
									clipBR[]={0.44999999,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.55000001;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class HeadingScaleFull
							{
								condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
								class HeadingScale
								{
									clipTL[]={0.18000001,0};
									clipBR[]={0.82999998,1};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="right";
								scale=1;
								pos[]=
								{
									{0.16,0.47999999},
									1
								};
								right[]=
								{
									{0.22,0.47999999},
									1
								};
								down[]=
								{
									{0.16,0.51999998},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.81,0.47999999},
									1
								};
								right[]=
								{
									{0.87,0.47999999},
									1
								};
								down[]=
								{
									{0.81,0.51999998},
									1
								};
							};
							class HoverMode
							{
								condition="autohover";
								class HoverText
								{
									type="text";
									source="static";
									text="HOVER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class CruiseMode
							{
								condition="((altitudeASL-27) min 1) - autohover";
								class CruiseText
								{
									type="text";
									source="static";
									text="CRUISE";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.87,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
							class TransitionMode
							{
								condition="((27-altitudeASL) min 1) - autohover";
								class TransText
								{
									type="text";
									source="static";
									text="TRANS";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class HoverModeHide
							{
								condition="1-autohover";
								class VelocityLine
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{0.0099999998,-0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0.01732,-0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{0.01732,0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{0.0099999998,0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0,0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{-0.0099999998,0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{-0.01732,0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.01732,-0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{-0.0099999998,-0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{-0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0,-0.0393162},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{}
									};
								};
							};
							class LaserGroup
							{
								condition="laseron";
								class laserText
								{
									type="text";
									source="static";
									text="LASER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.37},
										1
									};
									right[]=
									{
										{0.055,0.37},
										1
									};
									down[]=
									{
										{0.015,0.405},
										1
									};
								};
							};
							class RadarGroup
							{
								condition="activeSensorsOn";
								class radarText
								{
									type="text";
									source="static";
									text="RADAR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.41},
										1
									};
									right[]=
									{
										{0.055,0.41},
										1
									};
									down[]=
									{
										{0.015,0.44499999},
										1
									};
								};
							};
							class VerticalSpeedScale
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"WeaponAimRelative",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{-0.02,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0.02,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{-0.0099999998,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0.0099999998,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,-0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										{0.91500002,0.18000001},
										1
									},
									
									{
										{0.935,0.18000001},
										1
									},
									{},
									
									{
										{0.87,0.18000001},
										1
									},
									
									{
										{0.88999999,0.18000001},
										1
									},
									{},
									
									{
										{0.91500002,0.34},
										1
									},
									
									{
										{0.935,0.34},
										1
									},
									{},
									
									{
										{0.87,0.34},
										1
									},
									
									{
										{0.88999999,0.34},
										1
									},
									{},
									
									{
										{0.875,0.37200001},
										1
									},
									
									{
										{0.88499999,0.37200001},
										1
									},
									{},
									
									{
										{0.875,0.40400001},
										1
									},
									
									{
										{0.88499999,0.40400001},
										1
									},
									{},
									
									{
										{0.875,0.43599999},
										1
									},
									
									{
										{0.88499999,0.43599999},
										1
									},
									{},
									
									{
										{0.875,0.46799999},
										1
									},
									
									{
										{0.88499999,0.46799999},
										1
									},
									{},
									
									{
										{0.87,0.5},
										1
									},
									
									{
										{0.88999999,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.5},
										1
									},
									
									{
										{0.935,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.66000003},
										1
									},
									
									{
										{0.935,0.66000003},
										1
									},
									{},
									
									{
										{0.87,0.66000003},
										1
									},
									
									{
										{0.88999999,0.66000003},
										1
									},
									{},
									
									{
										{0.875,0.62800002},
										1
									},
									
									{
										{0.88499999,0.62800002},
										1
									},
									{},
									
									{
										{0.875,0.59600002},
										1
									},
									
									{
										{0.88499999,0.59600002},
										1
									},
									{},
									
									{
										{0.875,0.56400001},
										1
									},
									
									{
										{0.88499999,0.56400001},
										1
									},
									{},
									
									{
										{0.875,0.53200001},
										1
									},
									
									{
										{0.88499999,0.53200001},
										1
									},
									{},
									
									{
										{0.92000002,0.69199997},
										1
									},
									
									{
										{0.93000001,0.69199997},
										1
									},
									{},
									
									{
										{0.92000002,0.72399998},
										1
									},
									
									{
										{0.93000001,0.72399998},
										1
									},
									{},
									
									{
										{0.92000002,0.75599998},
										1
									},
									
									{
										{0.93000001,0.75599998},
										1
									},
									{},
									
									{
										{0.92000002,0.78799999},
										1
									},
									
									{
										{0.93000001,0.78799999},
										1
									},
									{},
									
									{
										{0.91500002,0.81999999},
										1
									},
									
									{
										{0.935,0.81999999},
										1
									},
									{},
									
									{
										{0.87,0.81999999},
										1
									},
									
									{
										{0.88999999,0.81999999},
										1
									},
									{}
								};
							};
							class VerticalSpeedArrow
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.48800001},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.87,0.5},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.51200002},
											1
										}
									}
								};
							};
							class RadarAltitude
							{
								condition="101-altitudeAGL";
								class RadarHeight
								{
									type="line";
									width=15;
									points[]=
									{
										
										{
											{0.903,0.81999999},
											1
										},
										
										{
											"RadarHeight",
											{0,0},
											1
										},
										{}
									};
								};
							};
							class HorizonLine
							{
								condition="1-autohover";
								clipTL[]={0.2,0.145};
								clipBR[]={0.80000001,0.85500002};
								class HorizonLineDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"HorizonVector",
											{-0.22499999,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1875,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.15000001,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1125,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.075000003,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.037500001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.037500001,0},
											1
										},
										
										{
											"HorizonVector",
											{0.075000003,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1125,0},
											1
										},
										
										{
											"HorizonVector",
											{0.15000001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1875,0},
											1
										},
										
										{
											"HorizonVector",
											{0.22499999,0},
											1
										}
									};
								};
							};
							class WP
							{
								condition="wpvalid - autohover";
								class WPdist
								{
									type="text";
									source="wpdist";
									sourceScale=0.001;
									sourcePrecision=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.235,0.77403802},
										1
									};
									right[]=
									{
										{0.27500001,0.77403802},
										1
									};
									down[]=
									{
										{0.235,0.80155998},
										1
									};
								};
								class WPIndex
								{
									type="text";
									source="wpIndex";
									sourceScale=1;
									sourceLength=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.096000001,0.77600402},
										1
									};
									right[]=
									{
										{0.126,0.77600402},
										1
									};
									down[]=
									{
										{0.096000001,0.79959399},
										1
									};
								};
								class WPstatic
								{
									type="text";
									source="static";
									text="W";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.075000003,0.77499998},
										1
									};
									right[]=
									{
										{0.105,0.77499998},
										1
									};
									down[]=
									{
										{0.075000003,0.80000001},
										1
									};
								};
								class WPAuto
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.035",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.14,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.035",
											0.82499999
										},
										1
									};
								};
								class WPKM
								{
									type="text";
									source="static";
									text="KM";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.16",
											0.77499998
										},
										1
									};
									right[]=
									{
										{0.26499999,0.77499998},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.16",
											0.80299997
										},
										1
									};
								};
								class WPTime
								{
									type="text";
									source="static";
									text="-:--";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.11",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.215,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.11",
											0.82499999
										},
										1
									};
								};
								class WP
								{
									width=2;
									type="line";
									points[]=
									{
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{-0.02,0.039999999},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0,0.02},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0.02,0.039999999},
											1
										},
										{}
									};
								};
							};
							class WeaponsLocking
							{
								condition="missilelocking";
								blinkingPattern[]={0.2,0.2};
								blinkingStartsOn=1;
								class Text
								{
									type="text";
									source="static";
									text="LOCKING";
									align="center";
									scale=1;
									pos[]=
									{
										{0.493,0.76666701},
										1
									};
									right[]=
									{
										{0.55299997,0.76666701},
										1
									};
									down[]=
									{
										{0.493,0.81581199},
										1
									};
								};
							};
							class IncomingMissile
							{
								condition="incomingmissile";
								blinkingPattern[]={0.30000001,0.30000001};
								blinkingStartsOn=1;
								color[]={1,0,0,1};
								class Text
								{
									type="text";
									source="static";
									text="!INCOMING MISSILE!";
									align="center";
									scale=1;
									pos[]=
									{
										{0.48500001,0.21623901},
										1
									};
									right[]=
									{
										{0.54500002,0.21623901},
										1
									};
									down[]=
									{
										{0.48500001,0.265385},
										1
									};
								};
							};
							class RadarTargets
							{
								class RadarBoxes
								{
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]={0.73400003,0.73000002};
									width=4;
									points[]=
									{
										
										{
											{-0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,-0.0034401701},
											1
										}
									};
								};
							};
							class TargetDiamond
							{
								class shape
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.051602598},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.051602598},
											1
										},
										{}
									};
								};
							};
							class TargetLocked
							{
								condition="missilelocked";
								class TargetLockedText
								{
									type="text";
									source="static";
									text="VALID LOCK";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.493,0.77899998},
										1
									};
									right[]=
									{
										{0.53299999,0.77899998},
										1
									};
									down[]=
									{
										{0.493,0.81},
										1
									};
								};
								class TimeOfFlightText
								{
									type="text";
									source="static";
									text="TOF:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.127+0.49",
											0.86900002
										},
										1
									};
									right[]=
									{
										{0.65200001,0.86900002},
										1
									};
									down[]=
									{
										
										{
											"0.127+0.49",
											0.90399998
										},
										1
									};
								};
								class DistanceText
								{
									type="text";
									source="static";
									text="DIST:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.125+0.49",
											0.90100002
										},
										1
									};
									right[]=
									{
										{0.64999998,0.90100002},
										1
									};
									down[]=
									{
										
										{
											"0.125+0.49",
											0.93599999
										},
										1
									};
								};
								class TOF_source
								{
									type="text";
									scale=1;
									sourceScale=1;
									source="missileflighttime";
									align="right";
									pos[]=
									{
										{0.73900002,0.86900002},
										1
									};
									right[]=
									{
										{0.77399999,0.86900002},
										1
									};
									down[]=
									{
										{0.73900002,0.90399998},
										1
									};
								};
								class TargetDistance: TOF_source
								{
									source="targetDist";
									sourceLength=0;
									sourcePrecision=1;
									sourceScale=0.001;
									align="right";
									pos[]=
									{
										{0.73900002,0.90100002},
										1
									};
									right[]=
									{
										{0.77399999,0.90100002},
										1
									};
									down[]=
									{
										{0.73900002,0.93599999},
										1
									};
								};
							};
						};
			};
		};
	};
	class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class Components; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { 
		class Components;
    };
	class PXLA_Hornet_Armed: B_Heli_Light_01_dynamicLoadout_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Hornet (Armed)";
		editorSubcategory = "PXLA_HijackedAirVehicles";
		editorPreview="\pxla\previews\vehicles\PXLA_Hornet_Armed.jpg";
		side = 0;
		faction = "O_PXLA";
		crew = "O_PXLA_Crewman";
		armor = 120; // Default 30
		armorStructural = 4; // Default none
		maxSpeed = 245; // Default 245
		fuelCapacity = 484; // Default 242
		damageResistance = 0.02; // Default 0.01039
		typicalCargo[]=
		{
			"O_PXLA_Crewman"
		};
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		weapons[]=
		{
			"M134_minigun",
			"CMFlareLauncher_Singles"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Belt",
			"120Rnd_CMFlareMagazine"
		};
		hiddenSelections[]=
		{
			"camo1",
			"aiming_dot"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\hornet\heli_light_01_ext_blufor_co.paa",
			""
		};
		class TextureSources
		{
			class PXLA
			{
				displayName="Pro-Xeno Liberation Alliance";
				author="Radium";
				factions[]=
				{
					"O_PXLA"
				};
				textures[]=
				{
					"\pxla\retextures\hornet\heli_light_01_ext_blufor_co.paa",
					""
				};
			};
		};
		textureList[]=
		{
			"PXLA",
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ManSensorComponent: SensorTemplateMan
					{
						maxTrackableSpeed=15;
						angleRangeHorizontal=70;
						angleRangeVertical=34;
						animDirection="mainGun";
						aimDown=-0.5;
					};
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
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						angleRangeHorizontal=65;
						angleRangeVertical=45;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						angleRangeHorizontal=46;
						angleRangeVertical=34;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={250,500,1000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={250,500,1000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class MFD
		{
			class MFD_Pilot_10
			{
						topLeft="MFD_10_TL";
						topRight="MFD_10_TR";
						bottomLeft="MFD_10_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={0};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class ReticleGroup
							{
								color[]={1,1,1};
								class Reticle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.491429,0.452766},
											1
										},
										
										{
											{0.495,0.452766},
											1
										},
										
										{
											{0.495,0.457802},
											1
										},
										
										{
											{0.491429,0.457802},
											1
										},
										
										{
											{0.491429,0.452766},
											1
										},
										{},
										
										{
											{0.499286,0.45578799},
											1
										},
										
										{
											{0.57714301,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.46283901},
											1
										},
										
										{
											{0.49285701,0.55752701},
											1
										},
										{},
										
										{
											{0.48857099,0.45578799},
											1
										},
										
										{
											{0.41,0.45578799},
											1
										},
										{},
										
										{
											{0.49285701,0.35404801},
											1
										},
										
										{
											{0.49285701,0.446722},
											1
										},
										{},
										
										{
											{0.61000001,0.29965201},
											1
										},
										
										{
											{0.64285702,0.29965201},
											1
										},
										
										{
											{0.64285702,0.342967},
											1
										},
										{},
										
										{
											{0.64285702,0.57565898},
											1
										},
										
										{
											{0.64285702,0.619982},
											1
										},
										
										{
											{0.61071402,0.619982},
											1
										},
										{},
										
										{
											{0.374286,0.619982},
											1
										},
										
										{
											{0.341429,0.619982},
											1
										},
										
										{
											{0.341429,0.57565898},
											1
										},
										{},
										
										{
											{0.374286,0.29965201},
											1
										},
										
										{
											{0.341429,0.29965201},
											1
										},
										
										{
											{0.341429,0.342967},
											1
										}
									};
								};
								class ModeText
								{
									type="text";
									source="static";
									text="Mode: TI WHOT";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.039999999,0.31999999},
										1
									};
									right[]=
									{
										{0.07,0.31999999},
										1
									};
									down[]=
									{
										{0.039999999,0.345},
										1
									};
								};
								class RangeText
								{
									type="text";
									source="static";
									text="Range:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.36000001,0.81},
										1
									};
									right[]=
									{
										{0.40000001,0.81},
										1
									};
									down[]=
									{
										{0.36000001,0.84500003},
										1
									};
								};
								class Fuel
								{
									type="text";
									source="laserDist";
									sourceScale=1;
									sourceLength=4;
									align="right";
									scale=1;
									pos[]=
									{
										{0.50999999,0.81},
										1
									};
									right[]=
									{
										{0.55000001,0.81},
										1
									};
									down[]=
									{
										{0.50999999,0.84500003},
										1
									};
								};
							};
						};
			};
			class MFD_Pilot_8
			{
						topLeft="MFD_8_TL";
						topRight="MFD_8_TR";
						bottomLeft="MFD_8_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class Time
							{
								type="text";
								source="time";
								text="%X";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.11},
									1
								};
								right[]=
								{
									{0.13,0.11},
									1
								};
								down[]=
								{
									{0.029999999,0.2},
									1
								};
							};
							class Fuel
							{
								type="text";
								source="fuel";
								text="%X";
								sourceScale=2517;
								sourceLength=4;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.31},
									1
								};
								right[]=
								{
									{0.13,0.31},
									1
								};
								down[]=
								{
									{0.029999999,0.40000001},
									1
								};
							};
							class LBSText
							{
								type="text";
								source="static";
								text="LBS";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.30000001,0.31},
									1
								};
								right[]=
								{
									{0.40000001,0.31},
									1
								};
								down[]=
								{
									{0.30000001,0.40000001},
									1
								};
							};
							class GridX
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceOffset=-0.5;
								sourceLength=3;
								align="right";
								scale=1;
								pos[]=
								{
									{0.029999999,0.61000001},
									1
								};
								right[]=
								{
									{0.13,0.61000001},
									1
								};
								down[]=
								{
									{0.029999999,0.69999999},
									1
								};
							};
							class GridY: GridX
							{
								source="coordinateY";
								pos[]=
								{
									{0.23999999,0.61000001},
									1
								};
								right[]=
								{
									{0.34,0.61000001},
									1
								};
								down[]=
								{
									{0.23999999,0.69999999},
									1
								};
							};
							class GridText
							{
								type="text";
								source="static";
								text="GRID:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.029999999,0.50999999},
									1
								};
								right[]=
								{
									{0.13,0.50999999},
									1
								};
								down[]=
								{
									{0.029999999,0.60000002},
									1
								};
							};
						};
			};
			class MFD_Pilot_9
			{
						topLeft="MFD_9_TL";
						topRight="MFD_9_TR";
						bottomLeft="MFD_9_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=0;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={-2};
						class Bones
						{
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on";
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="left";
								scale=1;
								pos[]=
								{
									{0.28,0.45199999},
									1
								};
								right[]=
								{
									{0.31999999,0.45199999},
									1
								};
								down[]=
								{
									{0.28,0.49200001},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.75,0.45199999},
									1
								};
								right[]=
								{
									{0.79000002,0.45199999},
									1
								};
								down[]=
								{
									{0.75,0.49200001},
									1
								};
							};
							class CruiseMode
							{
								condition="1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.85000002,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
						};
			};
			class AirplaneHUD
			{
						topLeft="HUD_top_left";
						topRight="HUD_top_right";
						bottomLeft="HUD_bottom_left";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={1.0,0.65,0,1};
						helmetMountedDisplay=1;
						helmetPosition[]={-0.037500001,0.037500001,0.1};
						helmetRight[]={0.075000003,0,0};
						helmetDown[]={0,-0.075000003,0};
						font="PuristaMedium";
						turret[]={0};
						class Bones
						{
							class HUDCenter
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class WeaponAim
							{
								type="vector";
								source="weapon";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WeaponAimRelative: WeaponAim
							{
								source="weapontoview";
							};
							class VelocityVector
							{
								type="vector";
								source="velocityToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class ForwardVector
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.234,0.23};
							};
							class HorizonVector
							{
								type="horizontoview";
								pos0[]={0.5,0.5};
								pos10[]={0.83092302,0.825266};
								angle=0;
							};
							class GunnerAim
							{
								type="vector";
								source="turret";
								pos0[]={0,-2};
								pos10[]={0.0068000001,-0.0099999998};
								projection=0;
							};
							class VerticalSpeedBone
							{
								type="linear";
								source="vspeed";
								sourceScale=1;
								min=-10;
								max=10;
								minPos[]={0,-0.31999999};
								maxPos[]={0,0.31999999};
							};
							class HorizonBankRot
							{
								type="linear";
								source="horizonBank";
								min=-0.52359998;
								max=0.52359998;
								minPos[]={0.41,0.83999997};
								maxPos[]={0.58999997,0.83999997};
								aspectRatio=1;
							};
							class ImpactPoint
							{
								type="vector";
								source="ImpactPointToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Target
							{
								source="targettoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class LimitWaypoint
							{
								type="limit";
								limits[]={0.2,0.1,0.80000001,0.1};
							};
							class WPPoint
							{
								type="vector";
								source="WPPoint";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class WPPointToView: WPPoint
							{
								source="WPPointToView";
							};
							class RadarHeight
							{
								type="linear";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								min=0;
								max=100;
								minPos[]={0.903,0.18000001};
								maxPos[]={0.903,0.81999999};
							};
							class HorizonBankRotFull
							{
								type="rotational";
								source="horizonBank";
								center[]={0,0};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
						};
						class Draw
						{
							alpha=1;
							color[]={1.0,0.65,0,1};
							condition="on - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24)";
							class HeadingNumber
							{
								type="text";
								source="Heading";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									{0.5,0.0060000001},
									1
								};
								right[]=
								{
									{0.55000001,0.0060000001},
									1
								};
								down[]=
								{
									{0.5,0.046},
									1
								};
							};
							class HeadingRotation
							{
								condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
								class HeadingHeadNumber
								{
									type="text";
									source="cameraDir";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										
										{
											"0.80-0.302",
											"0.082-0.025"
										},
										1
									};
									right[]=
									{
										
										{
											"0.83-0.302",
											"0.082-0.025"
										},
										1
									};
									down[]=
									{
										
										{
											"0.80-0.302",
											"0.113-0.025"
										},
										1
									};
								};
								class HeadingArrow
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0.47799999,0.045000002},
											1
										},
										
										{
											{0.52200001,0.045000002},
											1
										},
										
										{
											{0.55199999,0.07},
											1
										},
										
										{
											{0.52200001,0.094999999},
											1
										},
										
										{
											{0.47799999,0.094999999},
											1
										},
										
										{
											{0.44800001,0.07},
											1
										},
										
										{
											{0.47799999,0.045000002},
											1
										},
										{}
									};
								};
								class HeadingScaleRight
								{
									clipTL[]={0.55000001,0.050000001};
									clipBR[]={0.82999998,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.5;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.49599999,0.050000001};
										right[]={0.53600001,0.050000001};
										down[]={0.49599999,0.090000004};
									};
								};
								class HeadingScaleMidle
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=1;
									width=4;
									top=0.44999999;
									center=0.5;
									bottom=0.55000001;
									lineXleft=0.11;
									lineYright=0.1;
									lineXleftMajor=0.11;
									lineYrightMajor=0.1;
									majorLineEach=2;
									step=22.5;
									stepSize=0.075000003;
									align="center";
									scale=1;
									numberEach=0;
									pos[]={0.47,0.050000001};
									right[]={0.5,0.050000001};
									down[]={0.44999999,0.090000004};
								};
								class HeadingScaleLeft
								{
									clipTL[]={0.18000001,0.050000001};
									clipBR[]={0.44999999,0.11};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.55000001;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class HeadingScaleFull
							{
								condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
								class HeadingScale
								{
									clipTL[]={0.18000001,0};
									clipBR[]={0.82999998,1};
									class lines
									{
										type="scale";
										horizontal=1;
										source="heading";
										sourceScale=1;
										width=4;
										top=0.15000001;
										center=0.5;
										bottom=0.85000002;
										lineXleft=0.11;
										lineYright=0.1;
										lineXleftMajor=0.11;
										lineYrightMajor=0.090000004;
										majorLineEach=2;
										numberEach=2;
										step=22.5;
										stepSize=0.075000003;
										align="center";
										scale=1;
										pos[]={0.146,0.050000001};
										right[]={0.186,0.050000001};
										down[]={0.146,0.090000004};
									};
								};
							};
							class CollectiveGroup
							{
								condition="simulRTD";
								class CollectiveText
								{
									type="text";
									source="static";
									text="%";
									align="right";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
								class CollectiveNumber
								{
									type="text";
									source="rtdCollective";
									sourceScale=100;
									align="left";
									scale=1;
									pos[]=
									{
										{0.22,0.2},
										1
									};
									right[]=
									{
										{0.28,0.2},
										1
									};
									down[]=
									{
										{0.22,0.23999999},
										1
									};
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="right";
								scale=1;
								pos[]=
								{
									{0.16,0.47999999},
									1
								};
								right[]=
								{
									{0.22,0.47999999},
									1
								};
								down[]=
								{
									{0.16,0.51999998},
									1
								};
							};
							class AltNumber
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									{0.81,0.47999999},
									1
								};
								right[]=
								{
									{0.87,0.47999999},
									1
								};
								down[]=
								{
									{0.81,0.51999998},
									1
								};
							};
							class HoverMode
							{
								condition="autohover";
								class HoverText
								{
									type="text";
									source="static";
									text="HOVER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class CruiseMode
							{
								condition="((altitudeASL-27) min 1) - autohover";
								class CruiseText
								{
									type="text";
									source="static";
									text="CRUISE";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
								class AltNumberASL
								{
									type="text";
									source="altitudeASL";
									sourceScale=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.81,0.16},
										1
									};
									right[]=
									{
										{0.87,0.16},
										1
									};
									down[]=
									{
										{0.81,0.2},
										1
									};
								};
							};
							class TransitionMode
							{
								condition="((27-altitudeASL) min 1) - autohover";
								class TransText
								{
									type="text";
									source="static";
									text="TRANS";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.0049999999,0.075000003},
										1
									};
									right[]=
									{
										{0.045000002,0.075000003},
										1
									};
									down[]=
									{
										{0.0049999999,0.11},
										1
									};
								};
							};
							class HoverModeHide
							{
								condition="1-autohover";
								class VelocityLine
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{0.0099999998,-0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0.01732,-0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{0.01732,0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{0.0099999998,0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0,0.0196581},
											1
										},
										
										{
											"VelocityVector",
											{-0.0099999998,0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{-0.01732,0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.01732,-0.0098290602},
											1
										},
										
										{
											"VelocityVector",
											{-0.0099999998,-0.017023901},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{-0.039999999,0},
											1
										},
										
										{
											"VelocityVector",
											{-0.02,0},
											1
										},
										{},
										
										{
											"VelocityVector",
											{0,-0.0393162},
											1
										},
										
										{
											"VelocityVector",
											{0,-0.0196581},
											1
										},
										{}
									};
								};
							};
							class LaserGroup
							{
								condition="laseron";
								class laserText
								{
									type="text";
									source="static";
									text="LASER";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.37},
										1
									};
									right[]=
									{
										{0.055,0.37},
										1
									};
									down[]=
									{
										{0.015,0.405},
										1
									};
								};
							};
							class RadarGroup
							{
								condition="activeSensorsOn";
								class radarText
								{
									type="text";
									source="static";
									text="RADAR";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.015,0.41},
										1
									};
									right[]=
									{
										{0.055,0.41},
										1
									};
									down[]=
									{
										{0.015,0.44499999},
										1
									};
								};
							};
							class VerticalSpeedScale
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"WeaponAimRelative",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{-0.02,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0.02,0},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.02},
										1
									},
									
									{
										"WeaponAimRelative",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{-0.029999999,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{-0.0099999998,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0.0099999998,0},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0.029999999,0},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,-0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,-0.029999999},
										1
									},
									{},
									
									{
										"HUDCenter",
										1,
										{0,0.0099999998},
										1
									},
									
									{
										"HUDCenter",
										1,
										{0,0.029999999},
										1
									},
									{},
									
									{
										{0.91500002,0.18000001},
										1
									},
									
									{
										{0.935,0.18000001},
										1
									},
									{},
									
									{
										{0.87,0.18000001},
										1
									},
									
									{
										{0.88999999,0.18000001},
										1
									},
									{},
									
									{
										{0.91500002,0.34},
										1
									},
									
									{
										{0.935,0.34},
										1
									},
									{},
									
									{
										{0.87,0.34},
										1
									},
									
									{
										{0.88999999,0.34},
										1
									},
									{},
									
									{
										{0.875,0.37200001},
										1
									},
									
									{
										{0.88499999,0.37200001},
										1
									},
									{},
									
									{
										{0.875,0.40400001},
										1
									},
									
									{
										{0.88499999,0.40400001},
										1
									},
									{},
									
									{
										{0.875,0.43599999},
										1
									},
									
									{
										{0.88499999,0.43599999},
										1
									},
									{},
									
									{
										{0.875,0.46799999},
										1
									},
									
									{
										{0.88499999,0.46799999},
										1
									},
									{},
									
									{
										{0.87,0.5},
										1
									},
									
									{
										{0.88999999,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.5},
										1
									},
									
									{
										{0.935,0.5},
										1
									},
									{},
									
									{
										{0.91500002,0.66000003},
										1
									},
									
									{
										{0.935,0.66000003},
										1
									},
									{},
									
									{
										{0.87,0.66000003},
										1
									},
									
									{
										{0.88999999,0.66000003},
										1
									},
									{},
									
									{
										{0.875,0.62800002},
										1
									},
									
									{
										{0.88499999,0.62800002},
										1
									},
									{},
									
									{
										{0.875,0.59600002},
										1
									},
									
									{
										{0.88499999,0.59600002},
										1
									},
									{},
									
									{
										{0.875,0.56400001},
										1
									},
									
									{
										{0.88499999,0.56400001},
										1
									},
									{},
									
									{
										{0.875,0.53200001},
										1
									},
									
									{
										{0.88499999,0.53200001},
										1
									},
									{},
									
									{
										{0.92000002,0.69199997},
										1
									},
									
									{
										{0.93000001,0.69199997},
										1
									},
									{},
									
									{
										{0.92000002,0.72399998},
										1
									},
									
									{
										{0.93000001,0.72399998},
										1
									},
									{},
									
									{
										{0.92000002,0.75599998},
										1
									},
									
									{
										{0.93000001,0.75599998},
										1
									},
									{},
									
									{
										{0.92000002,0.78799999},
										1
									},
									
									{
										{0.93000001,0.78799999},
										1
									},
									{},
									
									{
										{0.91500002,0.81999999},
										1
									},
									
									{
										{0.935,0.81999999},
										1
									},
									{},
									
									{
										{0.87,0.81999999},
										1
									},
									
									{
										{0.88999999,0.81999999},
										1
									},
									{}
								};
							};
							class VerticalSpeedArrow
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.48800001},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.87,0.5},
											1
										},
										
										{
											"VerticalSpeedBone",
											{0.85000002,0.51200002},
											1
										}
									}
								};
							};
							class RadarAltitude
							{
								condition="101-altitudeAGL";
								class RadarHeight
								{
									type="line";
									width=15;
									points[]=
									{
										
										{
											{0.903,0.81999999},
											1
										},
										
										{
											"RadarHeight",
											{0,0},
											1
										},
										{}
									};
								};
							};
							class HorizonLine
							{
								condition="1-autohover";
								clipTL[]={0.2,0.145};
								clipBR[]={0.80000001,0.85500002};
								class HorizonLineDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"HorizonVector",
											{-0.22499999,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1875,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.15000001,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.1125,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{-0.075000003,0},
											1
										},
										
										{
											"HorizonVector",
											{-0.037500001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.037500001,0},
											1
										},
										
										{
											"HorizonVector",
											{0.075000003,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1125,0},
											1
										},
										
										{
											"HorizonVector",
											{0.15000001,0},
											1
										},
										{},
										
										{
											"HorizonVector",
											{0.1875,0},
											1
										},
										
										{
											"HorizonVector",
											{0.22499999,0},
											1
										}
									};
								};
							};
							class WeaponsText
							{
								condition="1- mgun";
								class Weapons
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="left";
									scale=0.5;
									pos[]=
									{
										{0.38,0.86900002},
										1
									};
									right[]=
									{
										{0.41499999,0.86900002},
										1
									};
									down[]=
									{
										{0.38,0.90399998},
										1
									};
								};
							};
							class Ammo
							{
								type="text";
								source="ammo";
								sourceScale=1;
								align="left";
								scale=0.5;
								pos[]=
								{
									{0.38,0.90100002},
									1
								};
								right[]=
								{
									{0.41499999,0.90100002},
									1
								};
								down[]=
								{
									{0.38,0.93599999},
									1
								};
							};
							class MGun
							{
								condition="mgun";
								class Weapons
								{
									type="text";
									source="static";
									text="GUN";
									sourceScale=1;
									align="left";
									scale=0.5;
									pos[]=
									{
										{0.38,0.86900002},
										1
									};
									right[]=
									{
										{0.41499999,0.86900002},
										1
									};
									down[]=
									{
										{0.38,0.90399998},
										1
									};
								};
								class Circle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0.025,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0099999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,0.0245726},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0098290602},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.025,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0245726},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
											1
										},
										
										{
											"ImpactPoint",
											{0.0049999999,-0.0085119698},
											1
										},
										
										{
											"ImpactPoint",
											{0.0086599998,-0.0049145301},
											1
										},
										
										{
											"ImpactPoint",
											{0.0099999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0086599998,0.0049145301},
											1
										},
										
										{
											"ImpactPoint",
											{0.0049999999,0.0085119698},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0098290602},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0049999999,0.0085119698},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0086599998,0.0049145301},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0086599998,-0.0049145301},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0049999999,-0.0085119698},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.0098290602},
											1
										}
									};
								};
							};
							class AAMissile
							{
								condition="AAmissile";
								class Circle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,-0.245726},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.043400001,-0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.085500002,-0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.125,-0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.16069999,-0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.19149999,-0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2165,-0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.234925,-0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2462,-0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.25,0},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2462,0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.234925,0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.2165,0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.19149999,0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.16069999,0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.125,0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.085500002,0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.043400001,0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,0.245726},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.043400001,0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.085500002,0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.125,0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.16069999,0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.19149999,0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2165,0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.234925,0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2462,0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.25,0},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2462,-0.042658102},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.234925,-0.084038503},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.2165,-0.122863},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.19149999,-0.15795299},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.16069999,-0.188226},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.125,-0.212799},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.085500002,-0.230909},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.043400001,-0.241991},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0,-0.245726},
											1
										}
									};
								};
							};
							class ATMissile
							{
								condition="ATmissile";
								class Circle
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.12777799},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.13,-0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{-0.13,0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,-0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.13,-0.14743599},
											1
										},
										{},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.15000001,0.14743599},
											1
										},
										
										{
											"ForwardVector",
											1,
											"HUDCenter",
											{0.13,0.14743599},
											1
										}
									};
								};
							};
							class Rockets
							{
								condition="rocket";
								class RocketDummy
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0.0099999998,-0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,-0.0294872},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0.0099999998,0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,0.0294872},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0294872},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0294872},
											1
										},
										{}
									};
								};
							};
							class WP
							{
								condition="wpvalid - autohover";
								class WPdist
								{
									type="text";
									source="wpdist";
									sourceScale=0.001;
									sourcePrecision=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.235,0.77403802},
										1
									};
									right[]=
									{
										{0.27500001,0.77403802},
										1
									};
									down[]=
									{
										{0.235,0.80155998},
										1
									};
								};
								class WPIndex
								{
									type="text";
									source="wpIndex";
									sourceScale=1;
									sourceLength=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.096000001,0.77600402},
										1
									};
									right[]=
									{
										{0.126,0.77600402},
										1
									};
									down[]=
									{
										{0.096000001,0.79959399},
										1
									};
								};
								class WPstatic
								{
									type="text";
									source="static";
									text="W";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										{0.075000003,0.77499998},
										1
									};
									right[]=
									{
										{0.105,0.77499998},
										1
									};
									down[]=
									{
										{0.075000003,0.80000001},
										1
									};
								};
								class WPAuto
								{
									type="text";
									source="static";
									text="A";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.035",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.14,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.035",
											0.82499999
										},
										1
									};
								};
								class WPKM
								{
									type="text";
									source="static";
									text="KM";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.16",
											0.77499998
										},
										1
									};
									right[]=
									{
										{0.26499999,0.77499998},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.16",
											0.80299997
										},
										1
									};
								};
								class WPTime
								{
									type="text";
									source="static";
									text="-:--";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.075 +0.11",
											0.80000001
										},
										1
									};
									right[]=
									{
										{0.215,0.80000001},
										1
									};
									down[]=
									{
										
										{
											"0.075 +0.11",
											0.82499999
										},
										1
									};
								};
								class WP
								{
									width=2;
									type="line";
									points[]=
									{
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{-0.02,0.039999999},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0,0.02},
											1
										},
										
										{
											"WPPoint",
											1,
											"LimitWaypoint",
											1,
											{0.02,0.039999999},
											1
										},
										{}
									};
								};
							};
							class WeaponsLocking
							{
								condition="missilelocking";
								blinkingPattern[]={0.2,0.2};
								blinkingStartsOn=1;
								class Text
								{
									type="text";
									source="static";
									text="LOCKING";
									align="center";
									scale=1;
									pos[]=
									{
										{0.493,0.76666701},
										1
									};
									right[]=
									{
										{0.55299997,0.76666701},
										1
									};
									down[]=
									{
										{0.493,0.81581199},
										1
									};
								};
							};
							class IncomingMissile
							{
								condition="incomingmissile";
								blinkingPattern[]={0.30000001,0.30000001};
								blinkingStartsOn=1;
							    color[]={1,0,0,1};
								class Text
								{
									type="text";
									source="static";
									text="!INCOMING MISSILE!";
									align="center";
									scale=1;
									pos[]=
									{
										{0.48500001,0.21623901},
										1
									};
									right[]=
									{
										{0.54500002,0.21623901},
										1
									};
									down[]=
									{
										{0.48500001,0.265385},
										1
									};
								};
							};
							class RadarTargets
							{
								class RadarBoxes
								{
									type="radartoview";
									pos0[]={0.5,0.5};
									pos10[]={0.73400003,0.73000002};
									width=4;
									points[]=
									{
										
										{
											{-0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,-0.0034401701},
											1
										},
										
										{
											{0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,0.0034401701},
											1
										},
										
										{
											{-0.0035000001,-0.0034401701},
											1
										}
									};
								};
							};
							class TargetDiamond
							{
								class shape
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0074999998,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0125,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0175,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.022500001,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0275,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.032499999,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.037500001,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.0425,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.047499999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.052499998,0},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.051602598},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0073717898},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0122863},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0172009},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0221154},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.0270299},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.031944402},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.036858998},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.041773502},
											1
										},
										{},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.046688002},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.051602598},
											1
										},
										{}
									};
								};
							};
							class TargetLocked
							{
								condition="missilelocked";
								class TargetLockedText
								{
									type="text";
									source="static";
									text="VALID LOCK";
									scale=1;
									sourceScale=1;
									align="center";
									pos[]=
									{
										{0.493,0.77899998},
										1
									};
									right[]=
									{
										{0.53299999,0.77899998},
										1
									};
									down[]=
									{
										{0.493,0.81},
										1
									};
								};
								class TimeOfFlightText
								{
									type="text";
									source="static";
									text="TOF:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.127+0.49",
											0.86900002
										},
										1
									};
									right[]=
									{
										{0.65200001,0.86900002},
										1
									};
									down[]=
									{
										
										{
											"0.127+0.49",
											0.90399998
										},
										1
									};
								};
								class DistanceText
								{
									type="text";
									source="static";
									text="DIST:";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.125+0.49",
											0.90100002
										},
										1
									};
									right[]=
									{
										{0.64999998,0.90100002},
										1
									};
									down[]=
									{
										
										{
											"0.125+0.49",
											0.93599999
										},
										1
									};
								};
								class TOF_source
								{
									type="text";
									scale=1;
									sourceScale=1;
									source="missileflighttime";
									align="right";
									pos[]=
									{
										{0.73900002,0.86900002},
										1
									};
									right[]=
									{
										{0.77399999,0.86900002},
										1
									};
									down[]=
									{
										{0.73900002,0.90399998},
										1
									};
								};
								class TargetDistance: TOF_source
								{
									source="targetDist";
									sourceLength=0;
									sourcePrecision=1;
									sourceScale=0.001;
									align="right";
									pos[]=
									{
										{0.73900002,0.90100002},
										1
									};
									right[]=
									{
										{0.77399999,0.90100002},
										1
									};
									down[]=
									{
										{0.73900002,0.93599999},
										1
									};
								};
							};
						};
			};
		};
				
	};class B_Heli_Attack_01_dynamicLoadout_F;
	class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class AnimationSources; class Turrets; };
	class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 {
		class AnimationSources;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class PXLA_Comanche: B_Heli_Attack_01_dynamicLoadout_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Comanche";
		editorSubcategory = "PXLA_HijackedAirVehicles";
		editorPreview="\pxla\previews\vehicles\PXLA_Comanche.jpg";
		side = 0;
		faction = "O_PXLA";
		crew = "O_PXLA_Crewman";
		armor = 120; // Default 40
		fuelCapacity = 3750; // Default 2500
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"O_PXLA_Crewman"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\comanche\heli_attack_01_co.paa"
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
		editorPreview="\pxla\previews\units\O_PXLA_Grunt.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_pxla",
			"H_SSU_Cap_HS_Black",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_pxla",
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
	class B_soldier_AT_F;
	class O_PXLA_AT_Grunt: B_soldier_AT_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Anti-Tank Grunt";
		editorPreview="\pxla\previews\units\O_PXLA_AT_Grunt.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_pxla",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_pxla",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_AKM_F",
			"launch_MRAWS_green_rail_F"
		};
		respawnWeapons[] = {
			"arifle_AKM_F",
			"launch_MRAWS_green_rail_F"
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

		backpack="B_Kitbag_PXLA_MAAWS";
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
	class B_soldier_AA_F;
	class O_PXLA_AA_Grunt: B_soldier_AA_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Anti-Air Grunt";
		editorPreview="\pxla\previews\units\O_PXLA_AA_Grunt.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_pxla",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_pxla",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_AKM_F",
			"launch_B_Titan_olive_F"
		};
		respawnWeapons[] = {
			"arifle_AKM_F",
			"launch_B_Titan_olive_F"
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

		backpack="B_Kitbag_PXLA_TitanAA";
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
	class O_PXLA_Crewman: B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "PXLA Crewman";
		editorPreview="\pxla\previews\units\O_PXLA_Crewman.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_Chestrig_pxla",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_Chestrig_pxla",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"SMG_05_F"
		};
		respawnWeapons[] = {
			"SMG_05_F"
		};

		magazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
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
		editorPreview="\pxla\previews\units\O_PXLA_Grenadier.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_XLA_Defector_Carrier_Rig_Red",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_XLA_Defector_Carrier_Rig_Red",
			"H_PASGT_pxla_red_F",
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
		editorPreview="\pxla\previews\units\O_PXLA_Machinegunner.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_TacVest_pxla",
			"H_Booniehat_pxla",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_TacVest_pxla",
			"H_Booniehat_pxla",
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

		backpack = "B_AssaultPack_PXLA";
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
		editorPreview="\pxla\previews\units\O_PXLA_HeavyGunner.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_TacVest_pxla",
			"H_XDF_Stealth_Combat_Helmet_NM_Black_b",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_TacVest_pxla",
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
		editorPreview="\pxla\previews\units\O_PXLA_Marksman.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_TacVest_pxla",
			"H_Booniehat_pxla",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_TacVest_pxla",
			"H_Booniehat_pxla",
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
		editorPreview="\pxla\previews\units\O_PXLA_Medic.jpg";
		side = 0;
		faction = "O_PXLA";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_PXLA_Uniform_Red";
		linkedItems[] = {
			"V_TacVest_pxla",
			"H_PASGT_pxla_red_F",
			"ItemMap",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGoggles_OPFOR",
			"G_PXLA_Bandana_Sports"
		};
		respawnlinkedItems[] = {
			"V_TacVest_pxla",
			"H_PASGT_pxla_red_F",
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
		backpack = "B_AssaultPack_PXLA_medic";
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
		editorPreview="\pxla\previews\units\O_PXLA_Defector.jpg";
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
		editorPreview="\pxla\previews\units\O_PXLA_Infiltrator.jpg";
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
		editorPreview="\pxla\previews\units\O_PXLA_Rifleman.jpg";
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
			"arifle_SPAR_01_blk_F_PXLA"
		};
		respawnWeapons[] = {
			"arifle_SPAR_01_blk_F_PXLA"
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

	// Backpacks //
	class B_SSU_Kitbag_Black;
	class B_Kitbag_PXLA: B_SSU_Kitbag_Black
	{
		author="Radium";
		displayName="PXLA Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\backpacks\B_XDF_Kitbag_PXLA.paa"
		};
	};
	class B_AssaultPack_blk;
	class B_AssaultPack_PXLA: B_AssaultPack_blk
	{
		author="Radium";
		displayName="PXLA Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\backpacks\B_XDF_Assault_Pack_PXLA.paa"
		};
	};
	
	// Hidden Unit Backpacks
	class B_AssaultPack_PXLA;
	class B_AssaultPack_PXLA_medic: B_AssaultPack_PXLA
	{
		scope = 1;
		class TransportMagazines {};
		class TransportItems 
		{
			ITEM_XX(Medikit, 1);
			ITEM_XX(FirstAidKit, 10);
		};
	};
	class B_Kitbag_PXLA;
	class B_Kitbag_PXLA_MAAWS : B_Kitbag_PXLA
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MRAWS_HEAT_F, 3);
			MAG_XX(MRAWS_HE_F, 2);
		};
		class TransportItems {};
	};
	class B_Kitbag_PXLA_TitanAA : B_Kitbag_PXLA
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(Titan_AA, 3);
		};
		class TransportItems {};
	};
};