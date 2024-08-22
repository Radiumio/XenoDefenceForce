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
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class FlagCarrierCore;
	class FlagCarrier: FlagCarrierCore
	{
		author="Radium";
		_generalMacro="FlagCarrier";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Flags";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=1;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"
		};
	};
    class Flag_TaskForceLotus: FlagCarrier
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\Flag_TaskForceLotus.jpg";
		_generalMacro="Flag_TaskForceLotus";
		scope=2;
		scopeCurator=2;
		displayName="XNV Xenohunter - Task Force Lotus";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\tfl_flag.paa'";
		};
	};
	class B_Plane_Fighter_01_F;
	class XDF_Gemini: B_Plane_Fighter_01_F
    {
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Gemini";
		faction = "B_XDF";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoGlass",
			"camo_cockpit_1",
			"camo_cockpit_2",
			"camo_cockpit_3",
			"camo_cockpit_5",
			"number_01",
			"number_02",
			"number_03"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\gemini\Fighter_01_fuselage_01_co.paa",
			"\xdf\retextures\gemini\Fighter_01_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"\xdf\retextures\gemini\Fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		fuelCapacity=3000; // Default 1550
		armor=240; // Default 60
		armorStructural=8; // Default 2
		damageResistance=0.2; // Default 0.0040000002
		maxSpeed=2500; // Default 1200
		landingSpeed=300;
		stallSpeed=180;
		acceleration=200;
        airBrakeFrictionCoef=3.0;
		altFullForce				= 5000;				/// CRUISE ALTITUDE
		altNoForce					= 15000;			/// SERVICE CEILING
		rudderInfluence				= 0.7660;			/// Basic angle (cos angle) of the rudder extent
		noseDownCoef 				= 0;
		angleOfIndicence            = 0.04;

		aileronSensitivity	= 1.6;			/// coefficient of ailerons affecting roll of the plane
		elevatorSensitivity	= 1.8;			/// coefficient of elevators affecting changing of plane horizontal heading

		elevatorControlsSensitivityCoef	= 4.0;	    /// elevator coefficient of player's controller sensitivity (does not affect AI)
		aileronControlsSensitivityCoef	= 3.5;		/// aileron coefficient of player's controller sensitivity (does not affect AI)
		rudderControlsSensitivityCoef	= 4.0;		/// rudder coefficient of player's controller sensitivity (does not affect AI)

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		/// this setting is linked to geometry LOD in the model, and usees the weight data from GEO LOD
		envelope[] =
		{
			0.8,	// 	0
			1.1,	// 	100
			1.33,	// 	200
			1.97,	// 	300
			2.42,	// 	400
			2.69,	// 	500
			3.87,	// 	600
			5.27,	// 	700
			6.89,	// 	800
			8.72,	// 	900
			9.7,	// 	1000
			10,	// 	1100
			9.2,	// 	1200
			9.1,	// 	1300
			9.0,	// 	1400
			8.8		// 	1500
		};

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		/// effectiveness according to current speed and maxSpeed ratio
		/// last value goes for 150% of max speed
		thrustCoef[] =
		{
			2.76,	// 	0
			2.69,	// 	120
			2.62,	// 	240
			2.68,	// 	360
			2.74,	// 	480
			2.81,	// 	600
			2.89,	// 	720
			2.95,	// 	840
			2.96,	// 	960
			2.96,	// 	1080
			2.92,	// 	1200
			2.4,	// 	1320
			1.4,	// 	1440
			0.3,	// 	1560
			0.2,	// 	1680
			0.0		// 	1800
		};		/// default value is 1
		elevatorCoef[] =
		{
			0.8,	// 	0
			0.80,	// 	120
			0.80,	// 	240
			1.00,	// 	360
			1.49,	// 	480
			1.46,	// 	600
			1.43,	// 	720
			1.40,	// 	840
			1.35,	// 	960
			1.30,	// 	1080
			1.25,	// 	1200
			1.18,	// 	1320
			1.17,	// 	1440
			1.16,	// 	1560
			0.55,	// 	1680
			0.55	// 	1800
		}; 							/// default value is 1
		aileronCoef[] =
		{
			0.8,	// 	0
			0.8,	// 	120
			1.0,	// 	240
			1.01,	// 	360
			1.02,	// 	480
			1.04,	// 	600
			1.03,	// 	720
			1.01,	// 	840
			1.0,	// 	960
			0.7,	// 	1080
			0.6,	// 	1200
			0.55,	// 	1320
			0.5,	// 	1440
			0.45,	// 	1560
			0.4,	// 	1680
			0.35	// 	1800
		};   							/// default value is 1
		rudderCoef[] =
		{
			1.1,	// 	0
			1.8,	// 	120
			2.6,	// 	240
			2.75,	// 	360
			2.8,	// 	480
			2.85,	// 	600
			2.9,	// 	720
			2.95,	// 	840
			2.98,	// 	960
			3.01, 	// 	1080
			2.7,	// 	1200
			1.1,	// 	1320
			0.9,	// 	1440
			0.7,	// 	1560
			0.5,	// 	1680
			0.3		// 	1800
		};    			
    };
	class O_Heli_Attack_02_dynamicLoadout_black_F;
	class XDF_Caiman: O_Heli_Attack_02_dynamicLoadout_black_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Caiman";
		side = 1;
		faction = "B_XDF";
		crew = "B_Helipilot_F";
		armor = 180; // Default 60
		maxSpeed = 450; // Default 365
		fuelCapacity = 3750; // Default 2500
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\caiman\Heli_Attack_02_body1_black_CO.paa",
			"\xdf\retextures\caiman\Heli_Attack_02_body2_black_CO.paa"
		};
	};
	class B_Heli_Transport_03_base_F;
	class XDF_Skyhawk: B_Heli_Transport_03_base_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Skyhawk";
		side = 1;
		faction = "B_XDF";
		crew = "B_Helipilot_F";
		armor = 120; // Default 40
		maxSpeed = 500; // Default 300
		fuelCapacity = 2300; // Default 1360
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\skyhawk\Heli_Transport_03_ext01_black_CO.paa",
			"\xdf\retextures\skyhawk\Heli_Transport_03_ext02_black_CO.paa"
		};
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class B_Heli_Light_01_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class Components;
	};
	class XDF_Hornet: B_Heli_Light_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Hornet";
		side = 1;
		faction = "B_XDF";
		crew = "B_Helipilot_F";
		armor = 120; // Default 30
		armorStructural = 4; // Default none
		maxSpeed = 400; // Default 245
		fuelCapacity = 484; // Default 242
		damageResistance = 0.02; // Default 0.01039
		typicalCargo[]=
		{
			"B_Helipilot_F"
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
		armor=120;
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\hornet\heli_light_01_ext_blufor_co.paa"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
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
		};
	};
	class B_UGV_01_rcws_F;
	class XDF_Mars: B_UGV_01_rcws_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF M.A.R.S";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 120; // Default 30
		armorStructural = 16; // Default none
		maxSpeed = 70; // Default 45
		fuelCapacity = 56; // Default 14
		damageResistance = 0.05; // Default 0.0071899998	    
		engineMOI = 1;
		accelAidForceCoef = 5.5;
		accelAidForceSpd = 40.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\mars\ugv_01_ext_co.paa",
			"\xdf\retextures\mars\ugv_01_int_co.paa",
			"\xdf\retextures\mars\turret_co.paa"
		};
	};
	class B_MRAP_01_F;
	class XDF_Boar: B_MRAP_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
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
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf\retextures\boar\turret_co.paa"
		};
	};
	class B_MRAP_01_gmg_F;
	class XDF_Boar_GMG: B_MRAP_01_gmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar (GMG)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
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
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf\retextures\boar\turret_co.paa"
		};
	};
	class B_MRAP_01_hmg_F;
	class XDF_Boar_HMG: B_MRAP_01_hmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar (HMG)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 600; // Default 200
		armorStructural = 10; // Default 5
		maxSpeed = 230; // Default 115
		fuelCapacity = 52; // Default 242
		damageResistance = 0.05; // Default 0
	    engineMOI = 1.2;
		accelAidForceCoef = 4.5;
		accelAidForceSpd = 80.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\boar\mrap_01_base_co.paa",
			"\xdf\retextures\boar\mrap_01_adds_co.paa",
			"\xdf\retextures\boar\turret_co.paa"
		};
	};
	class B_LSV_01_unarmed_black_F;
	class XDF_Jackal: B_LSV_01_unarmed_black_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Jackal";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 160; // Default 80
		armorStructural = 5; // Default none
		maxSpeed = 240; // Default 170
		fuelCapacity = 40; // Default 20
		damageResistance = 0.05; // Default 0
		engineMOI = 0.6;
		accelAidForceCoef = 3.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa"
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
	class B_LSV_01_armed_black_F;
	class XDF_Jackal_HMG: B_LSV_01_armed_black_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Jackal (Armed)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 160; // Default 80
		armorStructural = 5; // Default none
		maxSpeed = 240; // Default 170
		fuelCapacity = 40; // Default 20
		damageResistance = 0.05; // Default 0
		engineMOI = 0.6;
		accelAidForceCoef = 3.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
			"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa"
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
	class B_LSV_01_AT_F;
	class XDF_Jackal_AT: B_LSV_01_AT_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Jackal (AT)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 160; // Default 80
		armorStructural = 5; // Default none
		maxSpeed = 240; // Default 170
		fuelCapacity = 40; // Default 20
		damageResistance = 0.05; // Default 0
		engineMOI = 0.6;
		accelAidForceCoef = 3.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
				"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
				"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
				"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
				"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa",
				"\xdf\retextures\jackal\launcher_co.paa",
			    "\xdf\retextures\jackal\tubem_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\jackal\NATO_LSV_01_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_02_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_03_black_CO.paa",
					"\xdf\retextures\jackal\NATO_LSV_Adds_black_CO.paa",
					"\xdf\retextures\jackal\launcher_co.paa",
			        "\xdf\retextures\jackal\tubem_co.paa"
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
	class I_MRAP_03_F;
	class XDF_Puma: I_MRAP_03_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Puma";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 400; // Default 200
		armorStructural = 12; // Default 7
		maxSpeed = 240; // Default 125
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0.030990001
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\puma\mrap_03_ext_co.paa",
			"\xdf\retextures\puma\turret_co.paa"
		};
	};
	class I_MRAP_03_gmg_F;
	class XDF_Puma_GMG: I_MRAP_03_gmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Puma (GMG)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 400; // Default 200
		armorStructural = 12; // Default 7
		maxSpeed = 240; // Default 125
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0.030990001
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\puma\mrap_03_ext_co.paa",
			"\xdf\retextures\puma\turret_co.paa"
		};
	};
	class I_MRAP_03_hmg_F;
	class XDF_Puma_HMG: I_MRAP_03_hmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Puma (HMG)";
		side = 1;
		faction = "B_XDF";
		crew = "B_Soldier_F";
		armor = 400; // Default 200
		armorStructural = 12; // Default 7
		maxSpeed = 240; // Default 125
		fuelCapacity = 52; // Default 26
		damageResistance = 0.05; // Default 0.030990001
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\puma\mrap_03_ext_co.paa",
			"\xdf\retextures\puma\turret_co.paa"
		};
	};
	class B_AFV_Wheeled_01_up_cannon_F;
	class XDF_Odin: B_AFV_Wheeled_01_up_cannon_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Odin";
		side = 1;
		faction = "B_XDF";
		crew = "B_crew_F";
		armor = 1440; // Default 480
		armorStructural = 15; // Default 5
		maxSpeed = 240; // Default 120
		fuelCapacity = 48; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 50.0;
		typicalCargo[]=
		{
			"B_crew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\odin\afv_wheeled_01_ext1_co.paa",
			"\xdf\retextures\odin\afv_wheeled_01_ext2_co.paa",
			"\xdf\retextures\odin\afv_wheeled_01_wheel_co.paa",
			"\xdf\retextures\odin\afv_wheeled_01_ext3_co.paa",
			"\xdf\retextures\odin\afv_commander_tow_co.paa",
			"\xdf\retextures\odin\camonet_nato_black_co.paa",
			"\xdf\retextures\odin\afv_wheeled_01_ext3_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\odin\afv_wheeled_01_ext1_co.paa",
					"\xdf\retextures\odin\afv_wheeled_01_ext2_co.paa",
					"\xdf\retextures\odin\afv_wheeled_01_wheel_co.paa",
					"\xdf\retextures\odin\afv_wheeled_01_ext3_co.paa",
					"\xdf\retextures\odin\afv_commander_tow_co.paa",
					"\xdf\retextures\odin\camonet_nato_black_co.paa",
					"\xdf\retextures\odin\afv_wheeled_01_ext3_co.paa"
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
	class O_MBT_02_railgun_F;
	class XDF_Titan: O_MBT_02_railgun_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF TI-200 'Titan'";
		side = 1;
		faction = "B_XDF";
		crew = "B_crew_F";
		armor = 2550; // Default 850
		armorStructural = 12; // Default 6
		maxSpeed = 150; // Default 75
		fuelCapacity = 45; // Default 15
		damageResistance = 0.1; // Default 0.0038900001
		engineMOI = 2;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 40.0;
		typicalCargo[]=
		{
			"B_crew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\titan\mbt_02_body_co.paa",
			"\xdf\retextures\titan\mbt_02_turret_co.paa",
			"\xdf\retextures\titan\mbt_02_co.paa",
			"\xdf\retextures\titan\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\titan\mbt_02_body_co.paa",
					"\xdf\retextures\titan\mbt_02_turret_co.paa",
					"\xdf\retextures\titan\mbt_02_co.paa",
					"\xdf\retextures\titan\camonet_nato_black_co.paa"
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