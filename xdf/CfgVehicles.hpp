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
			"\xdf\retextures\blackwasp\Fighter_01_fuselage_01_co.paa",
			"\xdf\retextures\blackwasp\Fighter_01_fuselage_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"\xdf\retextures\blackwasp\Fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
		fuelCapacity=3000;
		armor=240;
		armorStructural=60;
		damageResistance=0.5;
		maxSpeed=2500;
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
	class B_Heli_Transport_03_F;
	class XDF_Skyhawk: B_Heli_Transport_03_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Caiman";
		side = 1;
		faction = "B_XDF";
		crew = "B_Helipilot_F";
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
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\mars\ugv_01_ext_co.paa",
			"\xdf\retextures\mars\ugv_01_int_co.paa"
		};
	};
};