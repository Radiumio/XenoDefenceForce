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
		editorPreview="\xdf\previews\misc\Flag_TaskForceLotus.jpg";
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
		editorPreview="\xdf\previews\vehicles\XDF_Gemini.jpg";
		faction = "B_XDF";
		crew = "B_XDF_Jet_Pilot";
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
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
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
		editorPreview="\xdf\previews\vehicles\XDF_Caiman.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 180; // Default 60
		maxSpeed = 450; // Default 365
		fuelCapacity = 3750; // Default 2500
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\caiman\Heli_Attack_02_body1_black_CO.paa",
			"\xdf\retextures\caiman\Heli_Attack_02_body2_black_CO.paa"
		};
	};
	class B_Heli_Transport_03_base_F;
    class B_Heli_Transport_03_base_F_OCimport_01 : B_Heli_Transport_03_base_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Transport_03_base_F_OCimport_02 : B_Heli_Transport_03_base_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
	class XDF_Skyhawk: B_Heli_Transport_03_base_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Skyhawk";
		editorPreview="\xdf\previews\vehicles\XDF_Skyhawk.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		maxSpeed = 500; // Default 300
		fuelCapacity = 2300; // Default 1360
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\skyhawk\Heli_Transport_03_ext01_black_CO.paa",
			"\xdf\retextures\skyhawk\Heli_Transport_03_ext02_black_CO.paa"
		};
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class MainTurret : MainTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
            class RightDoorGun : RightDoorGun 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_F_OCimport_01 : B_Heli_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Transport_01_F_OCimport_02 : B_Heli_Transport_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
			class CopilotTurret;
            class MainTurret;
			class RightDoorGun;
        };
    };
	class XDF_Dragonfly: B_Heli_Transport_01_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Dragonfly";
		editorPreview="\xdf\previews\vehicles\XDF_Dragonfly.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		maxSpeed = 500; // Default 300
		fuelCapacity = 2300; // Default 1360
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\dragonfly\heli_transport_01_ext01_co.paa",
			"\xdf\retextures\dragonfly\heli_transport_01_ext02_co.paa"
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class MainTurret : MainTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
            class RightDoorGun : RightDoorGun 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class Components; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { 
		class Components;
    };
	class XDF_Hornet: B_Heli_Light_01_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Hornet";
		editorPreview="\xdf\previews\vehicles\XDF_Hornet.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 30
		armorStructural = 4; // Default none
		maxSpeed = 400; // Default 245
		fuelCapacity = 484; // Default 242
		damageResistance = 0.02; // Default 0.01039
		typicalCargo[]=
		{
			"B_XDF_Pilot"
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
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class XDF_Wraith_IT: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Wraith (Infantry Transport)";
		editorPreview="\xdf\previews\vehicles\XDF_Wraith_IT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 200; // Default 100
		armorStructural = 4; // Default 2
		maxSpeed = 1400; // Default 700
		fuelCapacity = 2500; // Default 1000
		damageResistance = 0.02; // Default 0.00039999999
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
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
					"\xdf\retextures\wraith\VTOL_02_EXT01_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT02_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT03_L_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT03_R_XDF_co.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class XDF_Wraith_VT: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Wraith (Vehicle Transport)";
		editorPreview="\xdf\previews\vehicles\XDF_Wraith_VT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 200; // Default 100
		armorStructural = 4; // Default 2
		maxSpeed = 1400; // Default 700
		fuelCapacity = 2500; // Default 1000
		damageResistance = 0.02; // Default 0.00039999999
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
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
					"\xdf\retextures\wraith\VTOL_02_EXT01_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT02_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT03_L_XDF_co.paa",
					"\xdf\retextures\wraith\VTOL_02_EXT03_R_XDF_co.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_UGV_01_rcws_F;
	class XDF_Mars: B_UGV_01_rcws_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF M.A.R.S";
		editorPreview="\xdf\previews\vehicles\XDF_Mars.jpg";
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
	class B_UAV_01_F;
	class XDF_Mosquito: B_UAV_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Mosquito";
		editorPreview="\xdf\previews\vehicles\XDF_Mosquito.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 10; // Default 0.5
		maxSpeed = 200; // Default 100
		fuelCapacity = 200; // Default 100
		damageResistance = 0.01; // Default 0.0071899998	    
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\mosquito\xdf_uav_01_co.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_XDF_UAV_01_backpack_F"
			};
		};
	};
	class B_UAV_05_F;
	class XDF_Guardian: B_UAV_05_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Guardian";
		editorPreview="\xdf\previews\vehicles\XDF_Guardian.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 100; // Default 50
		maxSpeed = 1000; // Default 800
		// fuelCapacity = 200; // Default 100
		damageResistance = 0.02; // Default 0.0040000002	    
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\guardian\xdf_uav05_fuselage_01_co.paa",
			"\xdf\retextures\guardian\xdf_uav05_fuselage_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\guardian\xdf_uav05_fuselage_01_co.paa",
					"\xdf\retextures\guardian\xdf_uav05_fuselage_02_co.paa"
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
	class B_T_UAV_03_dynamicLoadout_F;
	class XDF_Kestrel: B_T_UAV_03_dynamicLoadout_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Kestrel";
		editorPreview="\xdf\previews\vehicles\XDF_Kestrel.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 100; // Default 25
		maxSpeed = 500; // Default 250
		fuelCapacity = 200; // Default 100
		damageResistance = 0.02; // Default 0	    
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\kestrel\uav_03_1_co.paa",
			"\xdf\retextures\kestrel\uav_03_2_co.paa",
			"\xdf\retextures\kestrel\uav_03_mlod_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\kestrel\uav_03_1_co.paa",
					"\xdf\retextures\kestrel\uav_03_2_co.paa",
					"\xdf\retextures\kestrel\uav_03_mlod_co.paa"
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
	class B_MRAP_01_F;
	class XDF_Boar: B_MRAP_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar";
		editorPreview="\xdf\previews\vehicles\XDF_Boar.jpg";
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
		editorPreview="\xdf\previews\vehicles\XDF_Boar_GMG.jpg";
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
		editorPreview="\xdf\previews\vehicles\XDF_Boar_HMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Jackal.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Jackal_HMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Jackal_AT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Puma.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Puma_GMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Puma_HMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
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
			"B_XDF_Operative"
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
		editorPreview="\xdf\previews\vehicles\XDF_Odin.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 960; // Default 480
		armorStructural = 7; // Default 5
		maxSpeed = 240; // Default 120
		fuelCapacity = 48; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 50.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
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
	class O_Truck_03_ammo_F;
	class XDF_Cyclone_Ammo: O_Truck_03_ammo_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone (Ammo)";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone_Ammo.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_ammo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_ammo_co.paa"
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
	class O_Truck_03_covered_F;
	class XDF_Cyclone_Covered: O_Truck_03_covered_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone (Covered)";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone_Covered.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_cargo_co.paa",
			"\xdf\retextures\cyclone\truck_03_cover_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_cargo_co.paa",
					"\xdf\retextures\cyclone\truck_03_cover_co.paa"
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
	class O_Truck_03_fuel_F;
	class XDF_Cyclone_Fuel: O_Truck_03_fuel_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone (Fuel)";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone_Fuel.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_fuel_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_fuel_co.paa"
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
	class O_Truck_03_medical_F;
	class XDF_Cyclone_Medical: O_Truck_03_medical_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone (Medical)";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone_Medical.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_cargo_co.paa",
			"\xdf\retextures\cyclone\truck_03_cover_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_cargo_co.paa",
					"\xdf\retextures\cyclone\truck_03_cover_co.paa"
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
	class O_Truck_03_repair_F;
	class XDF_Cyclone_Repair: O_Truck_03_repair_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone (Repair)";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone_Repair.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_ammo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_ammo_co.paa"
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
	class O_Truck_03_transport_F;
	class XDF_Cyclone: O_Truck_03_transport_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Cyclone";
		editorPreview="\xdf\previews\vehicles\XDF_Cyclone.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 180; // Default 90
		fuelCapacity = 56; // Default 28
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
			"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
			"\xdf\retextures\cyclone\truck_03_cargo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\cyclone\truck_03_ext01_co.paa",
					"\xdf\retextures\cyclone\truck_03_ext02_co.paa",
					"\xdf\retextures\cyclone\truck_03_cargo_co.paa"
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
		editorPreview="\xdf\previews\vehicles\XDF_Titan.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1700; // Default 850
		armorStructural = 9; // Default 6
		maxSpeed = 150; // Default 75
		fuelCapacity = 45; // Default 15
		damageResistance = 0.1; // Default 0.0038900001
		engineMOI = 2;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 40.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
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

	// Uniforms
	class B_SSU_Stealth_Uniform_base;
	class B_SSU_Stealth_Uniform_Rolled_base;
	class B_SSU_Stealth_Uniform_Sleeved_base;
	class B_SSU_Stealth_Uniform_Ghillie_base;
	class B_SSU_Coveralls_base;
	class B_CTRG_Soldier_2_F;
	class B_Pilot_F;
	class TCGM_Bra_B_MTP_Soldier_SL;
	class TCGM_RollUp_B_CTRG_Soldier;
	class TCGM_Stealth_B_CTRG_Soldier_arid;
	class B_XDF_Uniform_Black: B_SSU_Stealth_Uniform_base
	{
		author="Clasless & Radium";
		uniformClass="U_XDF_Uniform_Black";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};
	class B_XDF_Uniform_Rolled_Black: B_SSU_Stealth_Uniform_Rolled_base
	{
		author="Clasless & Radium";
		uniformClass="U_XDF_Uniform_Rolled_Black";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Rolled_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};
	class B_XDF_Uniform_Sleeved_Black: B_SSU_Stealth_Uniform_Sleeved_base
	{
		author="Clasless & Radium";
		uniformClass="U_XDF_Uniform_Sleeved_Black";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Sleeved_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};
	class B_XDF_Coveralls_Black: B_SSU_Coveralls_base
	{
		author="Clasless & Radium";
		uniformClass="U_XDF_Coveralls_Black";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Coveralls_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Coveralls_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\xdf_boots_black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Coveralls_Black_gloves.paa"
		};
	};
	class B_XDF_Uniform_Ghillie_Black: B_SSU_Stealth_Uniform_Ghillie_base
	{
		author="Clasless & Radium";
		uniformClass="U_XDF_Uniform_Ghillie_Black";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Ghillie_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\xdf_ghillie_black.paa"
		};
	};
	class B_XDF_Uniform_Tee_Black: B_CTRG_Soldier_2_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Uniform_Tee_Black";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
	};
	class B_XDF_Jet_Pilot_Suit: B_Pilot_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Jet_Pilot_Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\XDF_Jet_Pilot_Suit_co.paa"
		};
	};
	class U_XDF_Female_Uniform_Black: TCGM_Stealth_B_CTRG_Soldier_arid
	{
		author="TCGM & Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Female_Uniform_Black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};
	class U_XDF_Female_Uniform_Black_Rolled: TCGM_RollUp_B_CTRG_Soldier
	{
		author="TCGM & Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Female_Uniform_Black_Rolled";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};
	class U_XDF_Female_Uniform_Black_Bra: TCGM_Bra_B_MTP_Soldier_SL
	{
		author="TCGM & Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Female_Uniform_Black_Bra";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F\common\data\basicbody_black_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
	};

	// Backpacks
	class B_SSU_Viper_Harness_base;
	class B_SSU_Viper_Light_Harness_base;
	class B_SSU_Assault_Pack_base;
	class B_SSU_LegStrapBag_base;
	class B_SSU_TacticalPack_base;
	class B_SSU_Kitbag_base;
	class B_SSU_RadioBag_base;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_XDF_Viper_Harness_Black: B_SSU_Viper_Harness_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Viper Harness";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Viper_Harness_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Viper_Harness_Black.paa"
		};
	};
	class B_XDF_Viper_Light_Harness_Black: B_SSU_Viper_Light_Harness_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Viper Light Harness";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Viper_Light_Harness_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Viper_Harness_Black.paa"
		};
	};
	class B_XDF_Assault_Pack_Black: B_SSU_Assault_Pack_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Assault Pack";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Assault_Pack_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Assault_Pack_Black.paa"
		};
	};
	class B_XDF_LegStrapBag_Black: B_SSU_LegStrapBag_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Leg Strap Bag";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_LegStrapBag_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_LegStrapBag_Black.paa"
		};
	};
	class B_XDF_TacticalPack_Black: B_SSU_TacticalPack_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Tactical Backpack";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
		};
	};
	class B_XDF_Kitbag_Black: B_SSU_Kitbag_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Kitbag";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Kitbag_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Kitbag_Black.paa"
		};
	};
	class B_XDF_RadioBag_Black: B_SSU_RadioBag_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Radio Pack";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_RadioBag_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_RadioBag_Black.paa"
		};
	};
	class B_XDF_UAV_01_backpack_F: Weapon_Bag_Base
	{
		author="Radium";
		mapSize=0.60000002;
		_generalMacro="B_UAV_01_backpack_F";
		scope=2;
		scopeCurator=2;
		displayName="XDF UAV Bag (Mosquito)";
		model="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="B_XDF";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\xdf_uav_01_backpack_co.paa"
		};
		maximumLoad=0;
		mass=300;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="XDF Mosquito";
			assembleTo="XDF_Mosquito";
		};
	};

	// Units
	class B_Soldier_F;
	class B_medic_F;
	class B_engineer_F;
	class B_recon_JTAC_F;
	class B_soldier_LAT2_F;
	class B_Soldier_GL_F;
	class B_soldier_UAV_F;
	class B_crew_F;
	class B_Helipilot_F;
	class B_helicrew_F;
	class B_Fighter_Pilot_F;
	class B_HeavyGunner_F;
	class B_recon_F;
	class B_Recon_Sharpshooter_F;
	class B_sniper_F;
	class TCGM_RollUp_B_MTP_Soldier_LT;
	class TCGM_RollUp_B_MTP_Soldier_M;
	class TCGM_RollUp_B_MTP_Medic;
	class TCGM_RollUp_B_MTP_engineer;
	class TCGM_RollUp_B_MTP_soldier_UAV;
	class TCGM_RollUp_B_MTP_Soldier_AR;
	class B_XDF_Operative : B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Operative";
		editorPreview="\xdf\previews\units\B_XDF_Operative.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Sleeved_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Assault_Pack_Black";
		items[]=
		{
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
			"FirstAidKit"
		};
	};
	class B_XDF_Operative_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Operative";
		editorPreview="\xdf\previews\units\B_XDF_Operative_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Assault_Pack_Black";
		items[]=
		{
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
			"FirstAidKit"
		};
	};
	class B_XDF_Light_Operative : B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Light Operative";
		editorPreview="\xdf\previews\units\B_XDF_Light_Operative.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Tee_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
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
	class B_XDF_Light_Operative_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Light Operative";
		editorPreview="\xdf\previews\units\B_XDF_Light_Operative_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Bra";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
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
	class B_XDF_Marksman : B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Marksman";
		editorPreview="\xdf\previews\units\B_XDF_Marksman.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_03_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_03_F",
			"hgun_P07_blk_F",
			"Rangefinder"
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_LegStrapBag_Black";
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
	class B_XDF_Marksman_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Markswoman";
		editorPreview="\xdf\previews\units\B_XDF_Marksman_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_03_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_03_F",
			"hgun_P07_blk_F",
			"Rangefinder"
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_LegStrapBag_Black";
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
	class B_XDF_Sniper : B_sniper_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Sniper";
		editorPreview="\xdf\previews\units\B_XDF_Sniper.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Ghillie_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_LRR_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_LRR_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_LegStrapBag_Black";
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
	class B_XDF_Sniper_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Sniper";
		editorPreview="\xdf\previews\units\B_XDF_Sniper_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Camo_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_LRR_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_LRR_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_LegStrapBag_Black";
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
	class B_XDF_Medic : B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medic";
		editorPreview="\xdf\previews\units\B_XDF_Medic.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
			"FirstAidKit",
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
			"FirstAidKit",
		};
	};
	class B_XDF_Medic_F : TCGM_RollUp_B_MTP_Medic
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medic";
		editorPreview="\xdf\previews\units\B_XDF_Medic_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_Engineer : B_engineer_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Engineer";
		editorPreview="\xdf\previews\units\B_XDF_Engineer.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"ToolKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ToolKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Engineer_F : TCGM_RollUp_B_MTP_engineer
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Engineer";
		editorPreview="\xdf\previews\units\B_XDF_Engineer_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"ToolKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"ToolKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_JTAC : B_recon_JTAC_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF JTAC";
		editorPreview="\xdf\previews\units\B_XDF_JTAC.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_JTAC_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF JTAC";
		editorPreview="\xdf\previews\units\B_XDF_JTAC_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Ear_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Goggles"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_UAV : B_soldier_UAV_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_UAV.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Tee_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_UAV_F : TCGM_RollUp_B_MTP_soldier_UAV
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_UAV_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Bra";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_Grenadier : B_Soldier_GL_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Grenadier";
		editorPreview="\xdf\previews\units\B_XDF_Grenadier.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_Grenadier_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Grenadier";
		editorPreview="\xdf\previews\units\B_XDF_Grenadier_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_HAT : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_HAT.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_HAT_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_HAT_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
				linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Enhanced_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_Crew : B_crew_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Crewman";
		editorPreview="\xdf\previews\units\B_XDF_Crew.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_CRW_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Coveralls_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Helmet_Crew_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Helmet_Crew_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Pilot : B_Helipilot_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Helicopter Pilot";
		editorPreview="\xdf\previews\units\B_XDF_Pilot.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_CRW_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Coveralls_Black";
		linkedItems[] = {
			"V_XDF_Tactical_Vest_Black",
			"H_XDF_Helmet_Heli_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Tactical_Vest_Black",
			"H_XDF_Helmet_Heli_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_SMG_01_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_SMG_01_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Heli_Crew : B_helicrew_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Helicopter Crew";
		editorPreview="\xdf\previews\units\B_XDF_Heli_Crew.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_CRW_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Coveralls_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Helmet_Heli_Crew_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Helmet_Heli_Crew_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Jet_Pilot : B_Fighter_Pilot_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Jet Pilot";
		editorPreview="\xdf\previews\units\B_XDF_Jet_Pilot.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_CRW_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Jet_Pilot_Suit";
		linkedItems[] = {
			"H_XDF_Jet_Pilot_Helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"H_XDF_Jet_Pilot_Helmet",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_SMG_01_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_SMG_01_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "";
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_AX_Operative : B_recon_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Operative";
		editorPreview="\xdf\previews\units\B_XDF_AX_Operative.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Operative_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Operative";
		editorPreview="\xdf\previews\units\B_XDF_AX_Operative_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Medic : B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Medic";
		editorPreview="\xdf\previews\units\B_XDF_AX_Medic.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_AX_Medic_F : TCGM_RollUp_B_MTP_Medic
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Medic";
		editorPreview="\xdf\previews\units\B_XDF_AX_Medic_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_AX_JTAC : B_recon_JTAC_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX JTAC";
		editorPreview="\xdf\previews\units\B_XDF_AX_JTAC.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_JTAC_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX JTAC";
		editorPreview="\xdf\previews\units\B_XDF_AX_JTAC_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_UAV : B_soldier_UAV_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_AX_UAV.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_AX_UAV_F : TCGM_RollUp_B_MTP_soldier_UAV
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_AX_UAV_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Advanced_Modular_Helmet_Chops_Black",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_AX_Gunner : B_HeavyGunner_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Gunner";
		editorPreview="\xdf\previews\units\B_XDF_AX_Gunner.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_02_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_02_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Gunner_F : TCGM_RollUp_B_MTP_Soldier_AR
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Gunner";
		editorPreview="\xdf\previews\units\B_XDF_AX_Gunner_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_02_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_02_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Hunter : B_Recon_Sharpshooter_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Hunter";
		editorPreview="\xdf\previews\units\B_XDF_AX_Hunter.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_02_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_02_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Hunter_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Hunter";
		editorPreview="\xdf\previews\units\B_XDF_AX_Hunter_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_02_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_02_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_HAT : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_AX_HAT.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_AX_HAT_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_AX_HAT_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_AX_Elite_Operative : B_recon_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Operative";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Operative.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_AX_Elite_Operative_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Operative";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Operative_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Lite_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_AX_Elite_Medic : B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Medic";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Medic.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_AX_Elite_Medic_F : TCGM_RollUp_B_MTP_Medic
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Medic";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Medic_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black";
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
	class B_XDF_AX_Elite_JTAC : B_recon_JTAC_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite JTAC";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_JTAC.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Elite_JTAC_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite JTAC";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_JTAC_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Elite_UAV : B_soldier_UAV_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_UAV.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_AX_Elite_UAV_F : TCGM_RollUp_B_MTP_soldier_UAV
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite UAV Operator";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_UAV_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"B_UavTerminal",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
			"hgun_P07_blk_F",
			"Laserdesignator_03"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
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
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"6Rnd_12Gauge_Pellets",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries",
			"Laserbatteries"
		};

		backpack = "B_XDF_UAV_01_backpack_F";
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
	class B_XDF_AX_Elite_Gunner : B_HeavyGunner_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Gunner";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Gunner.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Light_Harness_Black";
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
	class B_XDF_AX_Elite_Gunner_F : TCGM_RollUp_B_MTP_Soldier_AR
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Gunner";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Gunner_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Light_Harness_Black";
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
	class B_XDF_AX_Elite_Hunter : B_Recon_Sharpshooter_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Hunter";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Hunter.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_GM6_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_GM6_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Elite_Hunter_F : TCGM_RollUp_B_MTP_Soldier_M
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Hunter";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_Hunter_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_GM6_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_GM6_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_XDF_AX_Elite_HAT : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_HAT.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_AX_Elite_HAT_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF AX Elite Heavy Anti-Tank";
		editorPreview="\xdf\previews\units\B_XDF_AX_Elite_HAT_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_AX_F";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Stealth_Combat_Helmet_Black_b",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"hgun_P07_blk_F",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"Vorona_HEAT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
	class B_XDF_Xenohunter : B_recon_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XH Operative";
		editorPreview="\xdf\previews\units\B_XDF_Xenohunter.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_XE_F";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_arifle_ARX_blk_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_arifle_ARX_blk_F",
			"hgun_P07_blk_F",
			"Rangefinder"
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
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
		items[]=
		{
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
			"FirstAidKit"
		};
	};
	class B_XDF_Xenohunter_Sharpshooter : B_sniper_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XH Sharpshooter";
		editorPreview="\xdf\previews\units\B_XDF_Xenohunter_Sharpshooter.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_XE_F";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_05_blk_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_05_blk_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
		items[]=
		{
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
			"FirstAidKit"
		};
	};
	class B_XDF_Xenohunter_Exterminator: B_HeavyGunner_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XH Exterminator";
		editorPreview="\xdf\previews\units\B_XDF_Xenohunter_Exterminator.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_XE_F";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_GL_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Light_Harness_Black";
		items[]=
		{
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
			"FirstAidKit"
		};
	};
	class B_XDF_Xenohunter_Corpsman: B_medic_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XH Corpsman";
		editorPreview="\xdf\previews\units\B_XDF_Xenohunter_Corpsman.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_XE_F";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Carrier_Special_Rig_Black",
			"H_XDF_Special_Purpose_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"G_XDF_Balaclava_TI_G_Black"
		};

		weapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"hgun_P07_blk_F",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"10Rnd_127x54_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black";
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
};