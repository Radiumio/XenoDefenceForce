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
		displayName="Flag (XDF - Task Force Lotus)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\lotus_flag.paa'";
		};
	};
    class Flag_TaskForceArtificer: FlagCarrier
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
		editorPreview="\xdf\previews\misc\Flag_TaskForceArtificer.jpg";
		_generalMacro="Flag_TaskForceArtificer";
		scope=2;
		scopeCurator=2;
		displayName="Flag (XDF - Task Force Artificer)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\artificer_flag.paa'";
		};
	};
    class Flag_TaskForceCeto: FlagCarrier
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
		editorPreview="\xdf\previews\misc\Flag_TaskForceCeto.jpg";
		_generalMacro="Flag_TaskForceCeto";
		scope=2;
		scopeCurator=2;
		displayName="Flag (XDF - Task Force Ceto)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\ceto_flag.paa'";
		};
	};
    class Flag_TaskForceDamocles: FlagCarrier
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
		editorPreview="\xdf\previews\misc\Flag_TaskForceDamocles.jpg";
		_generalMacro="Flag_TaskForceDamocles";
		scope=2;
		scopeCurator=2;
		displayName="Flag (XDF - Task Force Damocles)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\damocles_flag.paa'";
		};
	};
    class Flag_TaskForceIon: FlagCarrier
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
		editorPreview="\xdf\previews\misc\Flag_TaskForceIon.jpg";
		_generalMacro="Flag_TaskForceIon";
		scope=2;
		scopeCurator=2;
		displayName="Flag (XDF - Task Force Ion)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\ion_flag.paa'";
		};
	};
    class Flag_XenoDefenceForce: FlagCarrier
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
		editorPreview="\xdf\previews\misc\Flag_XenoDefenceForce.jpg";
		_generalMacro="Flag_XenoDefenceForce";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Xeno Defence Force)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\xdf\flags\xdf_flag.paa'";
		};
	};
	class Banner_01_F;
	class Banner_TaskForceLotus: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_TaskForceLotus.jpg";
		_generalMacro="Banner_TaskForceLotus";
		scope=2;
		scopeCurator=2;
		displayName="Banner (XDF - Task Force Lotus)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\lotus_flag.paa"
		};
	};
	class Banner_TaskForceArtificer: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_TaskForceArtificer.jpg";
		_generalMacro="Banner_TaskForceArtificer";
		scope=2;
		scopeCurator=2;
		displayName="Banner (XDF - Task Force Artificer)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\artificer_flag.paa"
		};
	};
	class Banner_TaskForceCeto: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_TaskForceCeto.jpg";
		_generalMacro="Banner_TaskForceCeto";
		scope=2;
		scopeCurator=2;
		displayName="Banner (XDF - Task Force Ceto)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\ceto_flag.paa"
		};
	};
	class Banner_TaskForceDamocles: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_TaskForceDamocles.jpg";
		_generalMacro="Banner_TaskForceDamocles";
		scope=2;
		scopeCurator=2;
		displayName="Banner (XDF - Task Force Damocles)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\damocles_flag.paa"
		};
	};
	class Banner_TaskForceIon: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_TaskForceIon.jpg";
		_generalMacro="Banner_TaskForceIon";
		scope=2;
		scopeCurator=2;
		displayName="Banner (XDF - Task Force Ion)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\ion_flag.paa"
		};
	};
	class Banner_XenoDefenceForce: Banner_01_F
	{
		author="Radium";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\xdf\previews\misc\Banner_XenoDefenceForce.jpg";
		_generalMacro="Banner_XenoDefenceForce";
		scope=2;
		scopeCurator=2;
		displayName="Banner (Xeno Defence Force)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\flags\xdf_flag.paa"
		};
	};


	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_F_OCimport_01 : B_Plane_Fighter_01_F { scope = 0; class AnimationSources; };
	class B_Plane_Fighter_01_F_OCimport_02 : B_Plane_Fighter_01_F_OCimport_01 {
		class AnimationSources;
	};
	class XDF_Gemini: B_Plane_Fighter_01_F_OCimport_02
    {
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Gemini";
		editorPreview="\xdf\previews\vehicles\XDF_Gemini.jpg";
		side=1;
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
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AX",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher_Singles"
		};
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AX_x450",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_20mm
			{
				source="ammorandom";
				weapon="weapon_Fighter_Gun20mm_AX";
			};
			class mfd_ammo_count_source
			{
				source="revolving";
				weapon="weapon_Fighter_Gun20mm_AX";
			};
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
			0.8,	// 	1
			1.1,	// 	2
			1.33,	// 	3
			1.97,	// 	4
			2.42,	// 	5
			2.69,	// 	6
			3.87,	// 	7
			5.27,	// 	8
			6.89,	// 	9
			8.72,	// 	10
			9.7,	// 	11
			10,	// 	12
			9.2,	// 	13
			9.1,	// 	14
			9.0,	// 	15
			8.8		// 	16
		};

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		/// effectiveness according to current speed and maxSpeed ratio
		/// last value goes for 150% of max speed
		thrustCoef[] =
		{
			2.76,	// 	1
			2.69,	// 	2
			2.62,	// 	3
			2.68,	// 	4
			2.74,	// 	5
			2.81,	// 	6
			2.89,	// 	7
			2.95,	// 	8
			2.96,	// 	9
			2.96,	// 	10
			2.92,	// 	11
			2.4,	// 	12
			1.4,	// 	13
			0.3,	// 	14
			0.2,	// 	15
			0.0		// 	16
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
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_F_OCimport_01 : O_Plane_Fighter_02_F { scope = 0; class AnimationSources; };
	class O_Plane_Fighter_02_F_OCimport_02 : O_Plane_Fighter_02_F_OCimport_01 {
		class AnimationSources;
	};
	class XDF_Accipiter: O_Plane_Fighter_02_F_OCimport_02
    {
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF X-121 Accipiter";
		editorPreview="\xdf\previews\vehicles\XDF_Accipiter.jpg";
		side=1;
		faction = "B_XDF";
		crew = "B_XDF_Jet_Pilot";
		hiddenSelections[]=
		{
			"Camo_01",
			"Camo_02",
			"",
			"number_01",
			"number_02",
			"number_03"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\accipiter\Fighter_02_fuselage_01_co.paa",
			"\xdf\retextures\accipiter\Fighter_02_fuselage_02_co.paa",
			"\xdf\retextures\accipiter\Fighter_02_fuselage_01_co.paa",
			"\xdf\retextures\accipiter\fighter_02_number_01_co",
			"\xdf\retextures\accipiter\fighter_02_number_02_co",
			"\xdf\retextures\accipiter\fighter_02_number_01_co"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\accipiter\Fighter_02_fuselage_01_co.paa",
					"\xdf\retextures\accipiter\Fighter_02_fuselage_02_co.paa",
					"\xdf\retextures\accipiter\Fighter_02_fuselage_01_co.paa",
					"\xdf\retextures\accipiter\fighter_02_number_01_co",
					"\xdf\retextures\accipiter\fighter_02_number_02_co",
					"\xdf\retextures\accipiter\fighter_02_number_01_co"
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
		weapons[]=
		{
			"weapon_Fighter_Gun_30mm_AX",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter02_Gun30mm_AX_x180",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_30mm
			{
				source="ammorandom";
				weapon="weapon_Fighter_Gun_30mm_AX";
			};
		};
		fuelCapacity=5080; // Default 2540
		armor=325; // Default 65
		armorStructural=10; // Default 2
		damageResistance=0.2; // Default 0.0040000002
		maxSpeed=4500; // Default 1500
		landingSpeed=300; // Default 300
		stallSpeed=220; // Default 220
		acceleration=220; // Default 220
        airBrakeFrictionCoef=4.5;
		ejectSpeed[] = { 0, 150, 0 };
		altFullForce				= 8000;				/// CRUISE ALTITUDE
		altNoForce					= 20000;			/// SERVICE CEILING
		rudderInfluence				= 0.7660;			/// Basic angle (cos angle) of the rudder extent
		noseDownCoef 				= 0;
		angleOfIndicence			= "-0.5*3.1415/180";

		aileronSensitivity	= 1.6;			/// coefficient of ailerons affecting roll of the plane
		elevatorSensitivity	= 1.8;			/// coefficient of elevators affecting changing of plane horizontal heading

		elevatorControlsSensitivityCoef	= 3;	    /// elevator coefficient of player's controller sensitivity (does not affect AI)
		aileronControlsSensitivityCoef	= 4;		/// aileron coefficient of player's controller sensitivity (does not affect AI)
		rudderControlsSensitivityCoef	= 4;		/// rudder coefficient of player's controller sensitivity (does not affect AI)

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		/// this setting is linked to geometry LOD in the model, and usees the weight data from GEO LOD
		envelope[] = 
		{
			1.0, // 1
			2.1, // 2
			2.3, // 3
			2.7, // 4
			2.9, // 5
			3.0, // 6
			3.1, // 7
			3.3, // 8
			3.6, // 9
			10.9, // 10
			11.1, // 11
			11.2, // 12
			12.0, // 13
			13.0, // 14
			14.0, // 15
			14.5, // 16
		};

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		/// effectiveness according to current speed and maxSpeed ratio
		/// last value goes for 150% of max speed
		thrustCoef[] = 
		{
			3.5,	// 	1
			3.7,	// 	2
			3.9,	// 	3
			4.0,	// 	4
			4.1,	// 	5
			4.3,	// 	6
			4.5,	// 	7
			4.7,	// 	8
			4.9,	// 	9
			5.0,	// 	10
			5.1,	// 	11
			5.2,	// 	12
			5.25,	// 	13
			5.30,	// 	14
			5.35,	// 	15
			5.40    // 	16
		};
		elevatorCoef[]=
		{
			1.8,	// 	1
			1.80,	// 	2
			1.80,	// 	3
			1.00,	// 	4
			1.49,	// 	5
			1.46,	// 	6
			1.43,	// 	7
			1.40,	// 	8
			1.35,	// 	9
			1.30,	// 	10
			1.25,	// 	11
			1.18,	// 	12
			1.17,	// 	13
			1.16,	// 	14
			1.55,	// 	15
			1.55	// 	16
		};
		aileronCoef[]=
		{
			1.8,	// 	1
			1.8,	// 	2
			1.0,	// 	3
			1.01,	// 	4
			1.02,	// 	5
			1.04,	// 	6
			1.03,	// 	7
			1.01,	// 	8
			1.0,	// 	9
			1.7,	// 	10
			1.6,	// 	11
			1.55,	// 	12
			1.5,	// 	13
			1.45,	// 	14
			1.4,	// 	15
			1.35	// 	16
		};
		rudderCoef[]=
		{
			1.1,	// 	1
			1.8,	// 	2
			1.6,	// 	3
			1.75,	// 	4
			1.8,	// 	5
			1.85,	// 	6
			1.9,	// 	7
			1.95,	// 	8
			1.98,	// 	9
			1.01, 	// 	10
			1.7,	// 	11
			1.1,	// 	12
			1.9,	// 	13
			1.7,	// 	14
			1.5,	// 	15
			1.3		// 	16
		};
		class MFD
		{
			class FA18_MFD_HORIZON
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0.1;
				borderRight=0.1;
				borderTop=0.1;
				borderBottom=0.1;
				//color[]={0.082000002,0.40799999,0.039000001,1};
				color[]={1.0,0.65,0,1};
				enableParallax=0;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.40000001};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={0.77399999,0.67000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					//color[]={0.082000002,0.40799999,0.039000001,1};
					color[]={1.0,0.65,0};
					alpha=1;
					condition="on";
					enableParallax=0;
					class Horizont
					{
						clipTL[]={0.255,0.105};
						clipBR[]={0.84500003,0.72500002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.1,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									
									{
										"LevelM5",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.19,0},
										1
									},
									
									{
										"LevelM5",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.16,0},
										1
									},
									
									{
										"LevelM5",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.13,0},
										1
									},
									
									{
										"LevelM5",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.07,0},
										1
									},
									
									{
										"LevelM5",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM5",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.19,0},
										1
									},
									
									{
										"LevelM5",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.16,0},
										1
									},
									
									{
										"LevelM5",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.13,0},
										1
									},
									
									{
										"LevelM5",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.07,0},
										1
									},
									
									{
										"LevelM5",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_5_R
							{
								type="text";
								source="static";
								text=-5;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_5_R
							{
								type="text";
								source="static";
								text="5";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									
									{
										"LevelM10",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.19,0},
										1
									},
									
									{
										"LevelM10",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.16,0},
										1
									},
									
									{
										"LevelM10",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.13,0},
										1
									},
									
									{
										"LevelM10",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.07,0},
										1
									},
									
									{
										"LevelM10",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM10",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.19,0},
										1
									},
									
									{
										"LevelM10",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.16,0},
										1
									},
									
									{
										"LevelM10",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.13,0},
										1
									},
									
									{
										"LevelM10",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.07,0},
										1
									},
									
									{
										"LevelM10",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_10_R
							{
								type="text";
								source="static";
								text=-10;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_10_R
							{
								type="text";
								source="static";
								text="10";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									
									{
										"LevelM15",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.19,0},
										1
									},
									
									{
										"LevelM15",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.16,0},
										1
									},
									
									{
										"LevelM15",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.13,0},
										1
									},
									
									{
										"LevelM15",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.07,0},
										1
									},
									
									{
										"LevelM15",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM15",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.19,0},
										1
									},
									
									{
										"LevelM15",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.16,0},
										1
									},
									
									{
										"LevelM15",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.13,0},
										1
									},
									
									{
										"LevelM15",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.07,0},
										1
									},
									
									{
										"LevelM15",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_15_R
							{
								type="text";
								source="static";
								text=-15;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_15_R
							{
								type="text";
								source="static";
								text="15";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									
									{
										"LevelM20",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.19,0},
										1
									},
									
									{
										"LevelM20",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.16,0},
										1
									},
									
									{
										"LevelM20",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.13,0},
										1
									},
									
									{
										"LevelM20",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.07,0},
										1
									},
									
									{
										"LevelM20",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM20",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.19,0},
										1
									},
									
									{
										"LevelM20",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.16,0},
										1
									},
									
									{
										"LevelM20",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.13,0},
										1
									},
									
									{
										"LevelM20",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.07,0},
										1
									},
									
									{
										"LevelM20",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_20_R
							{
								type="text";
								source="static";
								text=-20;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_20_R
							{
								type="text";
								source="static";
								text="20";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									
									{
										"LevelM25",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.19,0},
										1
									},
									
									{
										"LevelM25",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.16,0},
										1
									},
									
									{
										"LevelM25",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.13,0},
										1
									},
									
									{
										"LevelM25",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.07,0},
										1
									},
									
									{
										"LevelM25",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM25",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.19,0},
										1
									},
									
									{
										"LevelM25",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.16,0},
										1
									},
									
									{
										"LevelM25",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.13,0},
										1
									},
									
									{
										"LevelM25",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.07,0},
										1
									},
									
									{
										"LevelM25",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_25_R
							{
								type="text";
								source="static";
								text=-25;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_25_R
							{
								type="text";
								source="static";
								text="25";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									
									{
										"LevelM30",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.19,0},
										1
									},
									
									{
										"LevelM30",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.16,0},
										1
									},
									
									{
										"LevelM30",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.13,0},
										1
									},
									
									{
										"LevelM30",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.07,0},
										1
									},
									
									{
										"LevelM30",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM30",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.19,0},
										1
									},
									
									{
										"LevelM30",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.16,0},
										1
									},
									
									{
										"LevelM30",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.13,0},
										1
									},
									
									{
										"LevelM30",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.07,0},
										1
									},
									
									{
										"LevelM30",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_30_R
							{
								type="text";
								source="static";
								text=-30;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_30_R
							{
								type="text";
								source="static";
								text="30";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									
									{
										"LevelM35",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.19,0},
										1
									},
									
									{
										"LevelM35",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.16,0},
										1
									},
									
									{
										"LevelM35",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.13,0},
										1
									},
									
									{
										"LevelM35",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.07,0},
										1
									},
									
									{
										"LevelM35",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM35",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.19,0},
										1
									},
									
									{
										"LevelM35",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.16,0},
										1
									},
									
									{
										"LevelM35",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.13,0},
										1
									},
									
									{
										"LevelM35",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.07,0},
										1
									},
									
									{
										"LevelM35",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_35_R
							{
								type="text";
								source="static";
								text=-35;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_35_R
							{
								type="text";
								source="static";
								text="35";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									
									{
										"LevelM40",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.19,0},
										1
									},
									
									{
										"LevelM40",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.16,0},
										1
									},
									
									{
										"LevelM40",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.13,0},
										1
									},
									
									{
										"LevelM40",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.07,0},
										1
									},
									
									{
										"LevelM40",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM40",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.19,0},
										1
									},
									
									{
										"LevelM40",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.16,0},
										1
									},
									
									{
										"LevelM40",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.13,0},
										1
									},
									
									{
										"LevelM40",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.07,0},
										1
									},
									
									{
										"LevelM40",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_40_R
							{
								type="text";
								source="static";
								text=-40;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_40_R
							{
								type="text";
								source="static";
								text="40";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									
									{
										"LevelM45",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.19,0},
										1
									},
									
									{
										"LevelM45",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.16,0},
										1
									},
									
									{
										"LevelM45",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.13,0},
										1
									},
									
									{
										"LevelM45",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.07,0},
										1
									},
									
									{
										"LevelM45",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM45",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.19,0},
										1
									},
									
									{
										"LevelM45",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.16,0},
										1
									},
									
									{
										"LevelM45",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.13,0},
										1
									},
									
									{
										"LevelM45",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.07,0},
										1
									},
									
									{
										"LevelM45",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_45_R
							{
								type="text";
								source="static";
								text=-45;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_45_R
							{
								type="text";
								source="static";
								text="45";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.22,0},
										1
									},
									
									{
										"LevelM50",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.19,0},
										1
									},
									
									{
										"LevelM50",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.16,0},
										1
									},
									
									{
										"LevelM50",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.13,0},
										1
									},
									
									{
										"LevelM50",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.07,0},
										1
									},
									
									{
										"LevelM50",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM50",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.22,0},
										1
									},
									
									{
										"LevelM50",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.19,0},
										1
									},
									
									{
										"LevelM50",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.16,0},
										1
									},
									
									{
										"LevelM50",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.13,0},
										1
									},
									
									{
										"LevelM50",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.07,0},
										1
									},
									
									{
										"LevelM50",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_50_R
							{
								type="text";
								source="static";
								text=-50;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_50_R
							{
								type="text";
								source="static";
								text="50";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM60",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.22,0},
										1
									},
									
									{
										"LevelM60",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.19,0},
										1
									},
									
									{
										"LevelM60",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.16,0},
										1
									},
									
									{
										"LevelM60",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.13,0},
										1
									},
									
									{
										"LevelM60",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.07,0},
										1
									},
									
									{
										"LevelM60",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM60",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.22,0},
										1
									},
									
									{
										"LevelM60",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.19,0},
										1
									},
									
									{
										"LevelM60",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.16,0},
										1
									},
									
									{
										"LevelM60",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.13,0},
										1
									},
									
									{
										"LevelM60",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.07,0},
										1
									},
									
									{
										"LevelM60",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_60
							{
								type="text";
								source="static";
								text=-60;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_60_R
							{
								type="text";
								source="static";
								text=-60;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP60",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_60
							{
								type="text";
								source="static";
								text="60";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_60_R
							{
								type="text";
								source="static";
								text="60";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM70",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.22,0},
										1
									},
									
									{
										"LevelM70",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.19,0},
										1
									},
									
									{
										"LevelM70",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.16,0},
										1
									},
									
									{
										"LevelM70",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.13,0},
										1
									},
									
									{
										"LevelM70",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.07,0},
										1
									},
									
									{
										"LevelM70",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM70",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.22,0},
										1
									},
									
									{
										"LevelM70",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.19,0},
										1
									},
									
									{
										"LevelM70",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.16,0},
										1
									},
									
									{
										"LevelM70",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.13,0},
										1
									},
									
									{
										"LevelM70",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.07,0},
										1
									},
									
									{
										"LevelM70",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_70
							{
								type="text";
								source="static";
								text=-70;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_70_R
							{
								type="text";
								source="static";
								text=-70;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP70",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_70
							{
								type="text";
								source="static";
								text="70";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_70_R
							{
								type="text";
								source="static";
								text="70";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM80",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.22,0},
										1
									},
									
									{
										"LevelM80",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.19,0},
										1
									},
									
									{
										"LevelM80",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.16,0},
										1
									},
									
									{
										"LevelM80",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.13,0},
										1
									},
									
									{
										"LevelM80",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.07,0},
										1
									},
									
									{
										"LevelM80",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM80",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.22,0},
										1
									},
									
									{
										"LevelM80",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.19,0},
										1
									},
									
									{
										"LevelM80",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.16,0},
										1
									},
									
									{
										"LevelM80",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.13,0},
										1
									},
									
									{
										"LevelM80",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.07,0},
										1
									},
									
									{
										"LevelM80",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_80
							{
								type="text";
								source="static";
								text=-80;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_80_R
							{
								type="text";
								source="static";
								text=-80;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP80",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_80
							{
								type="text";
								source="static";
								text="80";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_80_R
							{
								type="text";
								source="static";
								text="80";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM90",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.22,0},
										1
									},
									
									{
										"LevelM90",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.19,0},
										1
									},
									
									{
										"LevelM90",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.16,0},
										1
									},
									
									{
										"LevelM90",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.13,0},
										1
									},
									
									{
										"LevelM90",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.07,0},
										1
									},
									
									{
										"LevelM90",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM90",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.22,0},
										1
									},
									
									{
										"LevelM90",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.19,0},
										1
									},
									
									{
										"LevelM90",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.16,0},
										1
									},
									
									{
										"LevelM90",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.13,0},
										1
									},
									
									{
										"LevelM90",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.07,0},
										1
									},
									
									{
										"LevelM90",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_90
							{
								type="text";
								source="static";
								text=-90;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_90_R
							{
								type="text";
								source="static";
								text=-90;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP90",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_90
							{
								type="text";
								source="static";
								text="90";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_90_R
							{
								type="text";
								source="static";
								text="90";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.25999999,0.033},
									1
								};
							};
						};
					};
				};
			};
			class FA18_MFD_HORIZON_NUMBERS
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				//color[]={0.082000002,0.40799999,0.039000001,1};
				color[]={1.0,0.65,0,1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					//color[]={0.082000002,0.40799999,0.039000001,1};
					color[]={1.0,0.65,0};
					alpha=0.69999999;
					condition="on";
					enableParallax=0;
					class ASNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"-0.375 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.145"
							},
							1
						};
					};
					class ALTNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"0.35 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.145"
							},
							1
						};
					};
				};
			};
			class To201_MFD_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				//color[]={0.082000002,0.40799999,0.039000001,1};
				color[]={1.0,0.65,0,1};
				enableParallax=0;
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0.44299999,0.49000001};
					};
				};
				class Draw
				{
					condition="on";
					class Pylon1
					{
						type="pylonicon";
						pos[]=
						{
							"Center",
							{0.234,0.11},
							1
						};
						pylon=1;
						name="Plane_Fighter_02";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.234,0.11},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							"Center",
							{0.19499999,0.090000004},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.19499999,0.090000004},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							"Center",
							{0.156,0.050000001},
							1
						};
						pylon=5;
					};
					class Pylon6: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.156,0.050000001},
							1
						};
						pylon=6;
					};
					class Pylon7: Pylon1
					{
						pos[]=
						{
							"Center",
							{0.117,0.050000001},
							1
						};
						pylon=7;
					};
					class Pylon8: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.117,0.050000001},
							1
						};
						pylon=8;
					};
					class Pylon9: Pylon1
					{
						pos[]=
						{
							"Center",
							{0.078000002,0.050000001},
							1
						};
						pylon=9;
					};
					class Pylon10: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.078000002,0.050000001},
							1
						};
						pylon=10;
					};
					class Pylon11: Pylon1
					{
						pos[]=
						{
							"Center",
							{0.039000001,0},
							1
						};
						pylon=11;
					};
					class Pylon12: Pylon1
					{
						pos[]=
						{
							"Center",
							{-0.039000001,0},
							1
						};
						pylon=12;
					};
					class Pylon13: Pylon1
					{
						pos[]=
						{
							"Center",
							{0,0},
							1
						};
						pylon=13;
					};
				};
			};
			class To201_static_systems_MFD
			{
				topLeft="hud_lh_sys";
				topRight="hud_ph_sys";
				bottomLeft="hud_ld_sys";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				//color[]={0.83999997,0.86000001,0.83999997};
				color[]={1.0,0.65,0};
				alpha=0.5;
				enableParallax=0;
				class Bones
				{
					class systemsPos
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					//color[]={0.83999997,0.86000001,0.83999997};
					color[]={1.0,0.65,0};
					alpha=0.5;
					condition="on";
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=80;
						pos[]=
						{
							{0.80500001,0.685},
							1
						};
						right[]=
						{
							
							{
								"0.805 + 0.08",
								0.685
							},
							1
						};
						down[]=
						{
							
							{
								0.80500001,
								"0.685 + 0.06"
							},
							1
						};
					};
					class VSpeedNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=80;
						pos[]=
						{
							{0.405,0.70499998},
							1
						};
						right[]=
						{
							
							{
								"0.405 + 0.08",
								0.70499998
							},
							1
						};
						down[]=
						{
							
							{
								0.405,
								"0.705 + 0.06"
							},
							1
						};
					};
				};
			};
			class To201_static_weapon_MFD
			{
				topLeft="hud_lh_wep";
				topRight="hud_ph_wep";
				bottomLeft="hud_ld_wep";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				//color[]={0.83999997,0.86000001,0.83999997};
				color[]={1.0,0.65,0};
				alpha=0.5;
				enableParallax=0;
				class Bones
				{
					class WeponPos
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					//color[]={0.83999997,0.86000001,0.83999997};
					color[]={1.0,0.65,0};
					alpha=0.5;
					condition="on";
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=10;
						align="right";
						scale=80;
						pos[]=
						{
							{0.44,0.15000001},
							1
						};
						right[]=
						{
							{0.49000001,0.15000001},
							1
						};
						down[]=
						{
							{0.44,0.2},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=10;
						align="right";
						scale=80;
						pos[]=
						{
							{0.44,0.25999999},
							1
						};
						right[]=
						{
							{0.49000001,0.25999999},
							1
						};
						down[]=
						{
							{0.44,0.30000001},
							1
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						align="right";
						scale=80;
						pos[]=
						{
							
							{
								0.11,
								"0.23-0.05"
							},
							1
						};
						right[]=
						{
							
							{
								0.18000001,
								"0.23-0.05"
							},
							1
						};
						down[]=
						{
							
							{
								0.11,
								"0.29-0.05"
							},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="AGL";
						align="left";
						scale=80;
						pos[]=
						{
							{0.11,0.41},
							1
						};
						right[]=
						{
							{0.16,0.41},
							1
						};
						down[]=
						{
							{0.11,0.44999999},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.075 - 0.018",
									"0.25 - 0.016"
								},
								1
							},
							
							{
								{0.075000003,0.25},
								1
							},
							
							{
								
								{
									"0.075 - 0.018",
									"0.25 + 0.016"
								},
								1
							}
						};
					};
					class AltitudeLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.079999998,0.40000001},
								1
							},
							
							{
								{0.079999998,0.1},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeAGL";
						sourceScale=1;
						width=4;
						top=0.40000001;
						center=0.25;
						bottom=0.1;
						lineXleft=0.090000004;
						lineYright=0.1;
						lineXleftMajor=0.090000004;
						lineYrightMajor=0.1;
						majorLineEach=5;
						numberEach=0;
						step=10;
						stepSize=0.025;
						align="right";
						scale=80;
						pos[]={0.02,0.28};
						right[]={0.07,0.28};
						down[]={0.02,0.31999999};
					};
					class ASLNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="left";
						scale=80;
						pos[]=
						{
							
							{
								0.28,
								"0.23+0.05"
							},
							1
						};
						right[]=
						{
							
							{
								0.36000001,
								"0.23+0.05"
							},
							1
						};
						down[]=
						{
							
							{
								0.28,
								"0.29+0.05"
							},
							1
						};
					};
					class ASLText
					{
						type="text";
						source="static";
						text="ASL";
						align="right";
						scale=80;
						pos[]=
						{
							{0.27000001,0.41},
							1
						};
						right[]=
						{
							{0.33000001,0.41},
							1
						};
						down[]=
						{
							{0.27000001,0.44999999},
							1
						};
					};
					class ASLArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.32 + 0.018",
									"0.25 - 0.016"
								},
								1
							},
							
							{
								{0.31999999,0.25},
								1
							},
							
							{
								
								{
									"0.32 + 0.018",
									"0.25 + 0.016"
								},
								1
							}
						};
					};
					class ASLLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.31,0.40000001},
								1
							},
							
							{
								{0.31,0.1},
								1
							}
						};
					};
					class ASLScale
					{
						type="scale";
						horizontal=0;
						source="altitudeASL";
						sourceScale=1;
						width=4;
						top=0.40000001;
						center=0.25;
						bottom=0.1;
						lineXleft=0.28999999;
						lineYright=0.30000001;
						lineXleftMajor=0.28999999;
						lineYrightMajor=0.30000001;
						majorLineEach=2;
						numberEach=0;
						step=2;
						stepSize=0.025;
						align="right";
						scale=80;
						pos[]={0.31999999,0.18000001};
						right[]={0.37,0.18000001};
						down[]={0.31999999,0.22};
					};
				};
			};
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				//color[]={0.082000002,0.40799999,0.039000001,1};
				color[]={1.0,0.65,0,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
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
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					//color[]=
					//{
					//	"user0",
					//	"user1",
					//	"user2"
					//};
					color[]=
					{
						"1.0",
						"0.65",
						"0"
					};
					condition="(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Tailhook
					{
						condition="user4";
						class TailhookText
						{
							type="text";
							source="static";
							text="TAILHOOK";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.88},
								1
							};
							right[]=
							{
								{0.98699999,0.88},
								1
							};
							down[]=
							{
								{0.93199998,0.92500001},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0,0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.118248},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
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
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
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
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
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
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
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
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5			)"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5			)"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045	)"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
    };
	class B_Plane_CAS_01_dynamicLoadout_F;
	class B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 : B_Plane_CAS_01_dynamicLoadout_F { scope = 0; class AnimationSources; };
	class B_Plane_CAS_01_dynamicLoadout_F_OCimport_02 : B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 {
		class AnimationSources;
	};
	class XDF_Tusk: B_Plane_CAS_01_dynamicLoadout_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF A-21 Tusk";
		editorPreview="\xdf\previews\vehicles\XDF_Tusk.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Jet_Pilot";
		armor = 160; // Default 80
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Jet_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\tusk\plane_cas_01_ext01_co.paa",
			"\xdf\retextures\tusk\plane_cas_01_ext02_co.paa"
		};
		weapons[]=
		{
			"Gatling_30mm_AX_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_AX_CAS_01_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_30mm_ammorandom
			{
				source="ammorandom";
				weapon="Gatling_30mm_AX_CAS_01_F";
			};
			class Gatling_30mm_reload
			{
				source="reload";
				weapon="Gatling_30mm_AX_CAS_01_F";
			};
			class Gatling_30mm_revolving
			{
				source="revolving";
				weapon="Gatling_30mm_AX_CAS_01_F";
			};
		};
	};
	class O_Plane_CAS_02_dynamicLoadout_F;
	class XDF_Vulture: O_Plane_CAS_02_dynamicLoadout_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF A-33 Vulture";
		editorPreview="\xdf\previews\vehicles\XDF_Vulture.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Jet_Pilot";
		armor = 160; // Default 80
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Jet_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\vulture\fighter02_ext01_co.paa",
			"\xdf\retextures\vulture\fighter02_ext02_co.paa"
		};
	};
	class O_Heli_Attack_02_dynamicLoadout_black_F;
	class O_Heli_Attack_02_dynamicLoadout_black_F_OCimport_01 : O_Heli_Attack_02_dynamicLoadout_black_F { scope = 0; class AnimationSources; class Turrets; };
	class O_Heli_Attack_02_dynamicLoadout_black_F_OCimport_02 : O_Heli_Attack_02_dynamicLoadout_black_F_OCimport_01 {
		class AnimationSources;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class XDF_Caiman: O_Heli_Attack_02_dynamicLoadout_black_F_OCimport_02
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
		maxSpeed = 365; // Default 365
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
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="AX_gatling_30mm";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="AX_gatling_30mm";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"AX_gatling_30mm",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"250Rnd_30mm_AXHE_shells",
					"250Rnd_30mm_AXHE_shells",
					"250Rnd_30mm_AXAPDS_shells",
					"250Rnd_30mm_AXAPDS_shells",
					"Laserbatteries"
				};
			};
		};
	};
	class O_Heli_Transport_04_F;
    class O_Heli_Transport_04_F_OCimport_01 : O_Heli_Transport_04_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_F_OCimport_02 : O_Heli_Transport_04_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa: O_Heli_Transport_04_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class O_Heli_Transport_04_ammo_F;
    class O_Heli_Transport_04_ammo_F_OCimport_01 : O_Heli_Transport_04_ammo_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_ammo_F_OCimport_02 : O_Heli_Transport_04_ammo_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Ammo: O_Heli_Transport_04_ammo_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Ammo)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Ammo.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class Heli_Transport_04_base_F;
    class Heli_Transport_04_base_F_OCimport_01 : Heli_Transport_04_base_F { scope = 0; class EventHandlers; class Turrets; class AnimationSources; class CopilotTurret; class LoadmasterTurret; class CargoTurret; };
	class XDF_Medusa_Bench: Heli_Transport_04_base_F_OCimport_01
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Bench)";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_bench_F.p3d";
		DLC="Heli";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_bench_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_bench_CA.paa";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Bench.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 40
		fuelCapacity = 3750; // Default 2500
		damageResistance = 0.02; // Default 0
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		class EventHandlers
		{
			init="[(_this select 0), ""XDF"", [""Bench_default_hide"", 1, ""Bench_black_hide"", 0], false] call bis_fnc_initVehicle;";
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_bench_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_bench_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="Cargo_R1_pos";
				memoryPointsGetInGunnerDir="Cargo_R1_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R1";
				proxyIndex=1;
				maxElev=20;
				minElev=-45;
				maxTurn=55;
				minTurn=-65;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
					CargoTurret_03[]={-75,95};
					CargoTurret_04[]={-80,95};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="Cargo_R2_pos";
				memoryPointsGetInGunnerDir="Cargo_R2_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_03[]={-65,95};
					CargoTurret_04[]={-75,95};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=3;
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="Cargo_R3_pos";
				memoryPointsGetInGunnerDir="Cargo_R3_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R3";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,75};
					CargoTurret_02[]={-95,65};
					CargoTurret_04[]={-65,95};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=4;
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="Cargo_R4_pos";
				memoryPointsGetInGunnerDir="Cargo_R4_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R4";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,80};
					CargoTurret_02[]={-95,75};
					CargoTurret_03[]={-95,65};
				};
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="Cargo_L4_pos";
				memoryPointsGetInGunnerDir="Cargo_L4_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L4";
				proxyIndex=5;
				class dynamicViewLimits
				{
					CargoTurret_06[]={-65,95};
					CargoTurret_07[]={-75,95};
					CargoTurret_08[]={-80,95};
				};
			};
			class CargoTurret_06: CargoTurret_05
			{
				proxyIndex=6;
				gunnerCompartments="Compartment7";
				memoryPointsGetInGunner="Cargo_L3_pos";
				memoryPointsGetInGunnerDir="Cargo_L3_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L3";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,65};
					CargoTurret_07[]={-65,95};
					CargoTurret_08[]={-75,95};
				};
			};
			class CargoTurret_07: CargoTurret_05
			{
				proxyIndex=7;
				gunnerCompartments="Compartment8";
				memoryPointsGetInGunner="Cargo_L2_pos";
				memoryPointsGetInGunnerDir="Cargo_L2_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L2";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,75};
					CargoTurret_06[]={-95,65};
					CargoTurret_08[]={-65,95};
				};
			};
			class CargoTurret_08: CargoTurret_05
			{
				proxyIndex=8;
				gunnerCompartments="Compartment9";
				memoryPointsGetInGunner="Cargo_L1_pos";
				memoryPointsGetInGunnerDir="Cargo_L1_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L1";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,80};
					CargoTurret_06[]={-95,75};
					CargoTurret_07[]={-95,65};
				};
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic03"
		};
		class AnimationSources: AnimationSources
		{
			class Bench_default_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class Bench_black_source: Bench_default_source
			{
				initPhase=1;
			};
		};
	};
	class O_Heli_Transport_04_box_F;
    class O_Heli_Transport_04_box_F_OCimport_01 : O_Heli_Transport_04_box_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_box_F_OCimport_02 : O_Heli_Transport_04_box_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Cargo: O_Heli_Transport_04_box_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Cargo)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Cargo.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class O_Heli_Transport_04_fuel_F;
    class O_Heli_Transport_04_fuel_F_OCimport_01 : O_Heli_Transport_04_fuel_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_fuel_F_OCimport_02 : O_Heli_Transport_04_fuel_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Fuel: O_Heli_Transport_04_fuel_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Fuel)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Fuel.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_fuel_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_fuel_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class O_Heli_Transport_04_medevac_F;
    class O_Heli_Transport_04_medevac_F_OCimport_01 : O_Heli_Transport_04_medevac_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_medevac_F_OCimport_02 : O_Heli_Transport_04_medevac_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Medical: O_Heli_Transport_04_medevac_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Medical)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Medical.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class O_Heli_Transport_04_repair_F;
    class O_Heli_Transport_04_repair_F_OCimport_01 : O_Heli_Transport_04_repair_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_repair_F_OCimport_02 : O_Heli_Transport_04_repair_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Repair: O_Heli_Transport_04_repair_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Repair)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Repair.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};
	class O_Heli_Transport_04_covered_F;
    class O_Heli_Transport_04_covered_F_OCimport_01 : O_Heli_Transport_04_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Transport_04_covered_F_OCimport_02 : O_Heli_Transport_04_covered_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class LoadmasterTurret;
        };
    };
	class XDF_Medusa_Transport: O_Heli_Transport_04_covered_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Medusa (Transport)";
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Transport.jpg";
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_base_01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_base_02_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
		class Turrets : Turrets
		{
            class CopilotTurret : CopilotTurret 
			{ 
				gunnerType = "B_XDF_Pilot"; 
			};
            class LoadmasterTurret : LoadmasterTurret 
			{ 
				gunnerType = "B_XDF_Heli_Crew"; 
			};
		};
	};

	// Medusa Pods
	class Land_Pod_Heli_Transport_04_ammo_F;
	class XDF_Medusa_Ammo_Pod: Land_Pod_Heli_Transport_04_ammo_F
	{
		author="Radium";
		displayName="XDF Medusa Ammo Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Ammo_Pod.jpg";
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
	class Land_Pod_Heli_Transport_04_bench_F;
	class XDF_Medusa_Bench_Pod: Land_Pod_Heli_Transport_04_bench_F
	{
		author="Radium";
		displayName="XDF Medusa Bench Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Bench_Pod.jpg";
		side=1;
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_bench_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_bench_co.paa"
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
	class Land_Pod_Heli_Transport_04_medevac_F;
	class XDF_Medusa_Medical_Pod: Land_Pod_Heli_Transport_04_medevac_F
	{
		author="Radium";
		displayName="XDF Medusa Medical Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Medical_Pod.jpg";
		side=1;
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
	class Land_Pod_Heli_Transport_04_covered_F;
	class XDF_Medusa_Transport_Pod: Land_Pod_Heli_Transport_04_covered_F
	{
		author="Radium";
		displayName="XDF Medusa Transport Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Transport_Pod.jpg";
		side=1;
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
	class Land_Pod_Heli_Transport_04_box_F;
	class XDF_Medusa_Cargo_Pod: Land_Pod_Heli_Transport_04_box_F
	{
		author="Radium";
		displayName="XDF Medusa Cargo Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Cargo_Pod.jpg";
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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
	class Land_Pod_Heli_Transport_04_fuel_F;
	class XDF_Medusa_Fuel_Pod: Land_Pod_Heli_Transport_04_fuel_F
	{
		author="Radium";
		displayName="XDF Medusa Fuel Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Fuel_Pod.jpg";
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_fuel_co.paa",
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_fuel_co.paa"
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
	class Land_Pod_Heli_Transport_04_repair_F;
	class XDF_Medusa_Repair_Pod: Land_Pod_Heli_Transport_04_repair_F
	{
		author="Radium";
		displayName="XDF Medusa Repair Pod";
		scope = 2;
		scopeCurator = 2;
		editorPreview="\xdf\previews\vehicles\XDF_Medusa_Repair_Pod.jpg";
		faction = "B_XDF";
		editorSubcategory="XDF_Medusa_Pods";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
			"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
		};		
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\medusa\heli_transport_04_pod_ext01_co.paa",
					"\xdf\retextures\medusa\heli_transport_04_pod_ext02_co.paa"
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

	// Medusa Pods

	class B_Heli_Attack_01_dynamicLoadout_F;
	class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class AnimationSources; class Turrets; };
	class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 {
		class AnimationSources;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class XDF_Comanche: B_Heli_Attack_01_dynamicLoadout_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Comanche";
		editorPreview="\xdf\previews\vehicles\XDF_Comanche.jpg";
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
			"\xdf\retextures\comanche\heli_attack_01_co.paa"
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
		maxSpeed = 300; // Default 300
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
		maxSpeed = 300; // Default 300
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
		maxSpeed = 245; // Default 245
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
	};
	class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class Components; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { 
		class Components;
    };
	class XDF_Hornet_Armed: B_Heli_Light_01_dynamicLoadout_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Hornet (Armed)";
		editorPreview="\xdf\previews\vehicles\XDF_Hornet_Armed.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 120; // Default 30
		armorStructural = 4; // Default none
		maxSpeed = 245; // Default 245
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
			"\xdf\retextures\hornet\heli_light_01_ext_blufor_co.paa",
			"\xdf\retextures\hornet\heli_light_01_crosshair_ca.paa"
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
		maxSpeed = 700; // Default 700
		fuelCapacity = 2500; // Default 1000
		damageResistance = 0.02; // Default 0.00039999999
		typicalCargo[]=
		{
			"B_XDF_Pilot"
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
		maxSpeed = 700; // Default 700
		fuelCapacity = 2500; // Default 1000
		damageResistance = 0.02; // Default 0.00039999999
		typicalCargo[]=
		{
			"B_XDF_Pilot"
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
	class B_T_VTOL_01_infantry_olive_F;
	class XDF_Albatross_IT: B_T_VTOL_01_infantry_olive_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF X-44 Albatross (Infantry Transport)";
		editorPreview="\xdf\previews\vehicles\XDF_Albatross_IT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 800; // Default 400
		armorStructural = 4; // Default 0
		maxSpeed = 550; // Default 550
		fuelCapacity = 3000; // Default ?
		damageResistance = 0.02; // Default 0.001
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
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
					"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_T_VTOL_01_vehicle_olive_F;
	class XDF_Albatross_VT: B_T_VTOL_01_vehicle_olive_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF X-44 Albatross (Vehicle Transport)";
		editorPreview="\xdf\previews\vehicles\XDF_Albatross_VT.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 800; // Default 400
		armorStructural = 4; // Default 0
		maxSpeed = 550; // Default 550
		fuelCapacity = 3000; // Default ?
		damageResistance = 0.02; // Default 0.001
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
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
					"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
	};
	class B_T_VTOL_01_armed_olive_F;
	class XDF_Retributor: B_T_VTOL_01_armed_olive_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF X-44 Retributor";
		editorPreview="\xdf\previews\vehicles\XDF_Retributor.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Pilot";
		armor = 800; // Default 400
		armorStructural = 4; // Default 0
		maxSpeed = 550; // Default 550
		fuelCapacity = 3000; // Default ?
		damageResistance = 0.02; // Default 0.001
		typicalCargo[]=
		{
			"B_XDF_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
			"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
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
					"\xdf\retextures\albatross\vtol_01_ext01_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext02_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext03_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_ext04_black_co.paa",
					"\xdf\retextures\albatross\vtol_01_signs_ca.paa"
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
		displayName = "XDF AR-5 Mosquito";
		editorPreview="\xdf\previews\vehicles\XDF_Mosquito.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 10; // Default 0.5
		maxSpeed = 100; // Default 100
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
	class B_Static_Designator_01_F;
	class XDF_Sentinel: B_Static_Designator_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF LS-2 Sentinel Designator";
		editorPreview="\xdf\previews\vehicles\XDF_Sentinel.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 10; // Default ??
		damageResistance = 0.01; // Default ?? 
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\sentinel\xdf_ld01_remote_co.paa",
			"\xdf\retextures\turrets\sentinel\xdf_ltlm_co.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_XDF_Sentinel_Backpack"
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
		maxSpeed = 800; // Default 800
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
	class B_UAV_02_dynamicLoadout_F;
	class XDF_Reaper: B_UAV_02_dynamicLoadout_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF MQ-50 Reaper";
		editorPreview="\xdf\previews\vehicles\XDF_Reaper.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 80; // Default ??
		maxSpeed = 400; // Default 400
		// fuelCapacity = 200; // Default 100
		damageResistance = 0.02; // Default 0.0040000002	    
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\reaper\uav_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\guardian\uav_02_co.paa"
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
		maxSpeed = 250; // Default 250
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
	class B_Quadbike_01_F;
	class XDF_Quadbike: B_Quadbike_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Quadbike";
		editorPreview="\xdf\previews\vehicles\XDF_Quadbike.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 60; // Default 30
		armorStructural = 2; // Default 0
		maxSpeed = 160; // Default 80
		fuelCapacity = 20; // Default 10
		damageResistance = 0.01; // Default 0
		engineMOI = 0.5;
		accelAidForceCoef = 4.5;
		accelAidForceSpd = 50.0;
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\quadbike\quadbike_01_co.paa",
			"\xdf\retextures\quadbike\quadbike_01_wheel_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\quadbike\quadbike_01_co.paa",
					"\xdf\retextures\quadbike\quadbike_01_wheel_co.paa"
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_RB",
			"Door_LB"
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
	class O_MRAP_02_F;
	class XDF_Punisher: O_MRAP_02_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Punisher";
		editorPreview="\xdf\previews\vehicles\XDF_Punisher.jpg";
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
			"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
			"\xdf\retextures\punisher\mrap_02_ext_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
					"\xdf\retextures\punisher\mrap_02_ext_02_co.paa"
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_LM",
			"Door_RM",
			"Door_rear"
		};
	};
	class O_MRAP_02_gmg_F;
	class XDF_Punisher_GMG: O_MRAP_02_gmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Punisher (GMG)";
		editorPreview="\xdf\previews\vehicles\XDF_Punisher_GMG.jpg";
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
			"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
			"\xdf\retextures\punisher\mrap_02_ext_02_co.paa",
			"\xdf\retextures\punisher\turret_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
					"\xdf\retextures\punisher\mrap_02_ext_02_co.paa",
					"\xdf\retextures\punisher\turret_co.paa"
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_LM",
			"Door_RM",
			"Door_rear"
		};
	};
	class O_MRAP_02_hmg_F;
	class XDF_Punisher_HMG: O_MRAP_02_hmg_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Punisher (HMG)";
		editorPreview="\xdf\previews\vehicles\XDF_Punisher_HMG.jpg";
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
			"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
			"\xdf\retextures\punisher\mrap_02_ext_02_co.paa",
			"\xdf\retextures\punisher\turret_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\punisher\mrap_02_ext_01_co.paa",
					"\xdf\retextures\punisher\mrap_02_ext_02_co.paa",
					"\xdf\retextures\punisher\turret_co.paa"
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_LM",
			"Door_RM",
			"Door_rear"
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF"
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
	class B_AFV_Wheeled_01_up_cannon_F_OCimport_01: B_AFV_Wheeled_01_up_cannon_F { scope = 0; class Turrets; class AnimationSources; };
	class B_AFV_Wheeled_01_up_cannon_F_OCimport_02: B_AFV_Wheeled_01_up_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
		};
		class AnimationSources;
	};
	class XDF_Odin: B_AFV_Wheeled_01_up_cannon_F_OCimport_02
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
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="cannon_120mm_AX";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_120mm_AX";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="LMG_Minigun_AX_HE";
			};
			class cannon_120mm_revolving
			{
				source="revolving";
				weapon="cannon_120mm_AX";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"cannon_120mm_AX",
					"LMG_Minigun_AX_HE"
				};
				magazines[]=
				{
					"18Rnd_120mm_APFSDS_T_Blue_AX",
					"12Rnd_120mm_APFSDS_shells_Tracer_Red",
					"8Rnd_120mm_HE_shells_Tracer_Red",
					"8Rnd_120mm_HEAT_MP_T_Red",
					"1000Rnd_20mm_GPR_shells",
					"1000Rnd_20mm_GPR_shells",
					"4Rnd_120mm_LG_cannon_missiles"
				};
			};
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
	class B_MBT_01_mlrs_F;
	class XDF_Hurricane: B_MBT_01_mlrs_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Hurricane";
		editorPreview="\xdf\previews\vehicles\XDF_Hurricane.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1100; // Default 900
		armorStructural = 8; // Default 6
		maxSpeed = 120; // Default 60
		fuelCapacity = 60; // Default 20
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
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\hurricane\mbt_01_body_co.paa",
			"\xdf\retextures\hurricane\mbt_01_mlrs_co.paa",
			"\xdf\retextures\hurricane\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hurricane\mbt_01_body_co.paa",
					"\xdf\retextures\hurricane\mbt_01_mlrs_co.paa",
					"\xdf\retextures\hurricane\camonet_nato_black_co.paa"
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
	class B_MBT_01_arty_F;
	class XDF_Scoria: B_MBT_01_arty_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Scoria SPG";
		editorPreview="\xdf\previews\vehicles\XDF_Scoria.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 800; // Default 500
		armorStructural = 8; // Default 6
		maxSpeed = 120; // Default 60
		fuelCapacity = 36; // Default 18
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
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\scoria\MBT_01_body_CO.paa",
			"\xdf\retextures\scoria\mbt_01_scorcher_co.paa",
			"\xdf\retextures\scoria\turret_co.paa",
			"\xdf\retextures\scoria\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\scoria\MBT_01_body_CO.paa",
					"\xdf\retextures\scoria\MBT_01_scorcher_co.paa",
					"\xdf\retextures\scoria\Turret_CO.paa",
					"\xdf\retextures\scoria\camonet_NATO_Desert_CO.paa"
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
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Wheeled_01_cannon_F_OCimport_01: B_APC_Wheeled_01_cannon_F { scope = 0; class Turrets; };
	class B_APC_Wheeled_01_cannon_F_OCimport_02: B_APC_Wheeled_01_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Commando: B_APC_Wheeled_01_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Commando";
		editorPreview="\xdf\previews\vehicles\XDF_Commando.jpg";
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
			"\xdf\retextures\commando\cage_black_co.paa"
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
					"\xdf\retextures\commando\cage_black_co.paa"
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
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
			};
		};
	};
	class O_APC_Tracked_02_cannon_F;
	class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class Turrets; };
	class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Scorpion: O_APC_Tracked_02_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Scorpion";
		editorPreview="\xdf\previews\vehicles\XDF_Scorpion.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 700; // Default 500
		armorStructural = 7; // Default 6
		maxSpeed = 120; // Default 87
		fuelCapacity = 36; // Default 18
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
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
			"\xdf\retextures\scorpion\apc_tracked_02_ext_01_black_co.paa",
			"\xdf\retextures\scorpion\apc_tracked_02_ext_02_black_co.paa",
			"\xdf\retextures\scorpion\rcws30_black_co.paa",
			"\xdf\retextures\scorpion\camonet_nato_black_co.paa",
			"\xdf\retextures\scorpion\cage_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\scorpion\apc_tracked_02_ext_01_black_co.paa",
					"\xdf\retextures\scorpion\apc_tracked_02_ext_02_black_co.paa",
					"\xdf\retextures\scorpion\rcws30_black_co.paa",
					"\xdf\retextures\scorpion\camonet_nato_black_co.paa",
					"\xdf\retextures\scorpion\cage_black_co.paa"
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
					"autocannon_30mm_CTWS",
					"LMG_Minigun_AX",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
	};
	class O_APC_Tracked_02_AA_F;
	class XDF_Huntress: O_APC_Tracked_02_AA_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Huntress";
		editorPreview="\xdf\previews\vehicles\XDF_Huntress.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 700; // Default 500
		armorStructural = 7; // Default 6
		maxSpeed = 120; // Default 87
		fuelCapacity = 36; // Default 18
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
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
			"\xdf\retextures\scorpion\apc_tracked_02_ext_01_aa_black_co.paa",
			"\xdf\retextures\scorpion\apc_tracked_02_ext_02_black_co.paa",
			"\xdf\retextures\scorpion\apc_tracked_01_aa_tower_black_co.paa",
			"\xdf\retextures\scorpion\camonet_nato_black_co.paa",
			"\xdf\retextures\scorpion\cage_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\scorpion\apc_tracked_02_ext_01_aa_black_co.paa",
					"\xdf\retextures\scorpion\apc_tracked_02_ext_02_black_co.paa",
					"\xdf\retextures\scorpion\apc_tracked_01_aa_tower_black_co.paa",
					"\xdf\retextures\scorpion\camonet_nato_black_co.paa",
					"\xdf\retextures\scorpion\cage_black_co.paa"
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
	class I_APC_Wheeled_03_cannon_F;
	class I_APC_Wheeled_03_cannon_F_OCimport_01 : I_APC_Wheeled_03_cannon_F { scope = 0; class Turrets; };
	class I_APC_Wheeled_03_cannon_F_OCimport_02 : I_APC_Wheeled_03_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Dementer: I_APC_Wheeled_03_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Dementer";
		editorPreview="\xdf\previews\vehicles\XDF_Dementer.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
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
			"B_XDF_Crew"
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
			"\xdf\retextures\dementer\apc_wheeled_03_ext_co.paa",
			"\xdf\retextures\dementer\apc_wheeled_03_ext2_co.paa",
			"\xdf\retextures\dementer\rcws30_black_co.paa",
			"\xdf\retextures\dementer\apc_wheeled_03_ext_alpha_co.paa",
			"\xdf\retextures\dementer\camonet_nato_black_co.paa",
			"\xdf\retextures\dementer\cage_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\dementer\apc_wheeled_03_ext_co.paa",
					"\xdf\retextures\dementer\apc_wheeled_03_ext2_co.paa",
					"\xdf\retextures\dementer\rcws30_black_co.paa",
					"\xdf\retextures\dementer\apc_wheeled_03_ext_alpha_co.paa",
					"\xdf\retextures\dementer\camonet_nato_black_co.paa",
					"\xdf\retextures\dementer\cage_black_co.paa"
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
					"autocannon_30mm_CTWS",
					"LMG_Minigun_AX",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
			};
		};
	};
	class I_MBT_03_cannon_F;
	class I_MBT_03_cannon_F_OCimport_01: I_MBT_03_cannon_F { scope = 0; class Turrets; };
	class I_MBT_03_cannon_F_OCimport_02: I_MBT_03_cannon_F_OCimport_01 {
		class Turrets: Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Kodiak: I_MBT_03_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Kodiak";
		editorPreview="\xdf\previews\vehicles\XDF_Kodiak.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1200; // Default 800
		armorStructural = 8; // Default 6
		maxSpeed = 130; // Default 65
		fuelCapacity = 40; // Default 20
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\kodiak\mbt_03_ext01_co.paa",
			"\xdf\retextures\kodiak\mbt_03_ext02_co.paa",
			"\xdf\retextures\kodiak\mbt_03_rcws_co.paa",
			"\xdf\retextures\kodiak\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\kodiak\mbt_03_ext01_co.paa",
					"\xdf\retextures\kodiak\mbt_03_ext02_co.paa",
					"\xdf\retextures\kodiak\mbt_03_rcws_co.paa",
					"\xdf\retextures\kodiak\camonet_nato_black_co.paa"
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
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_120mm",
					"LMG_Minigun_AX",
				};
				magazines[]=
				{
					"20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					"12Rnd_120mm_HE_shells_Tracer_Yellow",
					"12Rnd_120mm_HEAT_MP_T_Yellow",
					"2000Rnd_65x39_Belt_Tracer_Yellow",
					"2000Rnd_65x39_Belt_Tracer_Yellow"
				};
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_MBT_01_cannon_F_OCimport_01 : B_MBT_01_cannon_F { scope = 0; class Turrets; };
	class B_MBT_01_cannon_F_OCimport_02 : B_MBT_01_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Basilisk: B_MBT_01_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Basilisk";
		editorPreview="\xdf\previews\vehicles\XDF_Basilisk.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1000; // Default 900
		armorStructural = 8; // Default 6
		maxSpeed = 120; // Default 65
		fuelCapacity = 60; // Default 20
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\basilisk\mbt_01_body_co.paa",
			"\xdf\retextures\basilisk\mbt_01_tow_co.paa",
			"\xdf\retextures\basilisk\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\basilisk\mbt_01_body_co.paa",
					"\xdf\retextures\basilisk\mbt_01_tow_co.paa",
					"\xdf\retextures\basilisk\camonet_nato_black_co.paa"
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
					"cannon_120mm",
					"LMG_Minigun_AX",
				};
				magazines[]=
				{
					"24Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_MBT_01_TUSK_F_OCimport_01: B_MBT_01_TUSK_F { scope = 0; class Turrets; };
	class B_MBT_01_TUSK_F_OCimport_02: B_MBT_01_TUSK_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Basilisk_LIC: B_MBT_01_TUSK_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Basilisk LIC";
		editorPreview="\xdf\previews\vehicles\XDF_Basilisk_LIC.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1000; // Default 900
		armorStructural = 8; // Default 6
		maxSpeed = 120; // Default 65
		fuelCapacity = 60; // Default 20
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\basilisk\mbt_01_body_co.paa",
			"\xdf\retextures\basilisk\mbt_01_tow_co.paa",
			"\xdf\retextures\basilisk\mbt_addons_co.paa",
			"\xdf\retextures\basilisk\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\basilisk\mbt_01_body_co.paa",
					"\xdf\retextures\basilisk\mbt_01_tow_co.paa",
					"\xdf\retextures\basilisk\mbt_addons_co.paa",
					"\xdf\retextures\basilisk\camonet_nato_black_co.paa"
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
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_120mm",
					"LMG_Minigun_AX",
				};
				magazines[]=
				{
					"24Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
			};
		};
	};
	class I_APC_tracked_03_cannon_F;
	class I_APC_tracked_03_cannon_F_OCimport_01: I_APC_tracked_03_cannon_F { scope = 0; class Turrets; };
	class I_APC_tracked_03_cannon_F_OCimport_02: I_APC_tracked_03_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Champion: I_APC_tracked_03_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Champion";
		editorPreview="\xdf\previews\vehicles\XDF_Champion.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 800; // Default 900
		armorStructural = 10; // Default 6
		maxSpeed = 144; // Default 72
		fuelCapacity = 72; // Default 24
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\champion\apc_tracked_03_ext_co.paa",
			"\xdf\retextures\champion\apc_tracked_03_ext2_co.paa",
			"\xdf\retextures\champion\camonet_nato_black_co.paa",
			"\xdf\retextures\champion\cage_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\champion\apc_tracked_03_ext_co.paa",
					"\xdf\retextures\champion\apc_tracked_03_ext2_co.paa",
					"\xdf\retextures\champion\camonet_nato_black_co.paa",
					"\xdf\retextures\champion\cage_black_co.paa"
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
					"autocannon_30mm",
					"LMG_Minigun_AX"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
			};
		};
	};
	class O_MBT_04_cannon_F;
	class O_MBT_04_cannon_F_OCimport_01 : O_MBT_04_cannon_F { scope = 0; class AnimationSources; class Turrets; };
	class O_MBT_04_cannon_F_OCimport_02 : O_MBT_04_cannon_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Minotaur: O_MBT_04_cannon_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Minotaur";
		editorPreview="\xdf\previews\vehicles\XDF_Minotaur.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1400; // Default 700
		armorStructural = 10; // Default 6
		maxSpeed = 140; // Default 70
		fuelCapacity = 60; // Default 20
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\minotaur\mbt_04_exterior_1_co.paa",
			"\xdf\retextures\minotaur\mbt_04_exterior_2_co.paa",
			"\xdf\retextures\minotaur\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\minotaur\mbt_04_exterior_1_co.paa",
					"\xdf\retextures\minotaur\mbt_04_exterior_2_co.paa",
					"\xdf\retextures\minotaur\camonet_nato_black_co.paa"
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
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_125mm_advanced_AX";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="LMG_Minigun_AX";
			};
			class muzzle_hide_coax
			{
				source="reload";
				weapon="LMG_Minigun_AX";
			};
			class recoil_source
			{
				source="reload";
				weapon="cannon_125mm_advanced_AX";
			};
			class zeroing_cannon
			{
				source="zeroing";
				weapon="cannon_125mm_advanced_AX";
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
						weapons[]=
						{
							"HMG_127_APC",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"500Rnd_127x99_mag_Tracer_Yellow",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_125mm_advanced_AX",
					"LMG_Minigun_AX"
				};
				magazines[]=
				{
					"12Rnd_125mm_APFSDS_T_Blue_AX",
					"20Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"2000Rnd_65x39_Belt_Tracer_Red",
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
			};
		};
	};
	class O_MBT_04_command_F;
	class O_MBT_04_command_F_OCimport_01 : O_MBT_04_command_F { scope = 0; class AnimationSources; class Turrets; };
	class O_MBT_04_command_F_OCimport_02 : O_MBT_04_command_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Minotaur_CTWS: O_MBT_04_command_F_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Minotaur CTWS";
		editorPreview="\xdf\previews\vehicles\XDF_Minotaur_CTWS.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Crew";
		armor = 1400; // Default 700
		armorStructural = 10; // Default 6
		maxSpeed = 140; // Default 70
		fuelCapacity = 60; // Default 20
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 60.0;
		typicalCargo[]=
		{
			"B_XDF_Crew"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\minotaur\mbt_04_exterior_1_co.paa",
			"\xdf\retextures\minotaur\mbt_04_exterior_2_co.paa",
			"\xdf\retextures\minotaur\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\minotaur\mbt_04_exterior_1_co.paa",
					"\xdf\retextures\minotaur\mbt_04_exterior_2_co.paa",
					"\xdf\retextures\minotaur\camonet_nato_black_co.paa"
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
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_125mm_advanced_AX";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="LMG_Minigun_AX";
			};
			class muzzle_hide_coax
			{
				source="reload";
				weapon="LMG_Minigun_AX";
			};
			class recoil_source
			{
				source="reload";
				weapon="cannon_125mm_advanced_AX";
			};
			class zeroing_cannon
			{
				source="zeroing";
				weapon="cannon_125mm_advanced_AX";
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
						weapons[]=
						{
							"autocannon_30mm_RCWS",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_125mm_advanced_AX",
					"LMG_Minigun_AX_HE"
				};
				magazines[]=
				{
					"12Rnd_125mm_APFSDS_T_Blue_AX",
					"20Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"1000Rnd_20mm_GPR_shells"
				};
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class XDF_Onyx: B_APC_Tracked_01_CRV_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF CRV Onyx";
		editorPreview="\xdf\previews\vehicles\XDF_Onyx.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Engineer";
		armor = 800; // Default 500
		armorStructural = 8; // Default 6
		maxSpeed = 120; // Default 60
		fuelCapacity = 36; // Default 18
		damageResistance = 0.1; // Default 0.0071899998
		engineMOI = 1; // 7
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 50.0;
		typicalCargo[]=
		{
			"B_XDF_Engineer"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\onyx\apc_tracked_01_body_co.paa",
			"\xdf\retextures\onyx\mbt_01_body_co.paa",
			"\xdf\retextures\onyx\turret_co.paa",
			"\xdf\retextures\onyx\apc_tracked_01_crv_co.paa",
			"\xdf\retextures\onyx\camonet_nato_black_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{			
					"\xdf\retextures\onyx\apc_tracked_01_body_co.paa",
					"\xdf\retextures\onyx\mbt_01_body_co.paa",
					"\xdf\retextures\onyx\turret_co.paa",
					"\xdf\retextures\onyx\apc_tracked_01_crv_co.paa",
					"\xdf\retextures\onyx\camonet_nato_black_co.paa"
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
	class B_Truck_01_flatbed_F;
	class XDF_HEMTT_Flatbed: B_Truck_01_flatbed_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Flatbed";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Flatbed.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
			"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
					"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
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
	class B_Truck_01_cargo_F;
	class XDF_HEMTT_Cargo: B_Truck_01_cargo_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Cargo";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Cargo.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
			"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
					"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
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
	class B_Truck_01_medical_F;
	class XDF_HEMTT_Medical: B_Truck_01_medical_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Medical";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Medical.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_cargo_co.paa",
			"\xdf\retextures\hemtt\truck_01_cover_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_cargo_co.paa",
					"\xdf\retextures\hemtt\truck_01_cover_co.paa"
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
	class B_Truck_01_fuel_F;
	class XDF_HEMTT_Fuel: B_Truck_01_fuel_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Fuel";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Fuel.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_fuel_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_fuel_co.paa"
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
	class B_Truck_01_Repair_F;
	class XDF_HEMTT_Repair: B_Truck_01_Repair_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Repair";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Repair.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
			"\xdf\retextures\hemtt\containers_02_set_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
					"\xdf\retextures\hemtt\containers_02_set_co.paa"
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
	class B_Truck_01_ammo_F;
	class XDF_HEMTT_Ammo: B_Truck_01_ammo_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Ammo";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Ammo.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_ammo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_ammo_co.paa"
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
	class B_Truck_01_box_F;
	class XDF_HEMTT_Box: B_Truck_01_box_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Container";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Box.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
			"\xdf\retextures\hemtt\containers_02_set_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_ammo_co.paa",
					"\xdf\retextures\hemtt\containers_02_set_co.paa"
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
	class B_Truck_01_covered_F;
	class XDF_HEMTT_Transport_Covered: B_Truck_01_covered_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Transport (Covered)";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Transport_Covered.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_cargo_co.paa",
			"\xdf\retextures\hemtt\truck_01_cover_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_cargo_co.paa",
					"\xdf\retextures\hemtt\truck_01_cover_co.paa"
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
	class B_Truck_01_transport_F;
	class XDF_HEMTT_Transport: B_Truck_01_transport_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT Transport";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Transport.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_cargo_co.paa"
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
	class B_Truck_01_mover_F;
	class XDF_HEMTT_Mover: B_Truck_01_mover_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF HEMTT";
		editorPreview="\xdf\previews\vehicles\XDF_HEMTT_Mover.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 400; // Default 200
		maxSpeed = 160; // Default 80
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
			"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
			"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
			"\xdf\retextures\hemtt\truck_01_mprimer_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\hemtt\truck_01_ext_01_co.paa",
					"\xdf\retextures\hemtt\truck_01_ext_02_co.paa",
					"\xdf\retextures\hemtt\truck_01_mprimer_co.paa"
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
	class C_Offroad_01_comms_F;
	class XDF_Offroad_Comms: C_Offroad_01_comms_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Offroad (Comms)";
		editorPreview="\xdf\previews\vehicles\XDF_Offroad_Comms.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
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
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\offroad\offroad_01_ext_co.paa",
			"\xdf\retextures\offroad\offroad_01_ext_co.paa",
			"\xdf\retextures\offroad\offroad_01_cover_blk_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\offroad\offroad_01_ext_co.paa",
					"\xdf\retextures\offroad\offroad_01_ext_co.paa",
					"\xdf\retextures\offroad\offroad_01_cover_blk_co.paa"
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
	class C_Offroad_01_covered_F;
	class XDF_Offroad_Covered: C_Offroad_01_covered_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Offroad (Covered)";
		editorPreview="\xdf\previews\vehicles\XDF_Offroad_Covered.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 60; // Default 30
		maxSpeed = 300; // Default 200
		fuelCapacity = 32; // Default 16
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
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\offroad\offroad_01_ext_co.paa",
			"\xdf\retextures\offroad\offroad_01_ext_co.paa",
			"\xdf\retextures\offroad\offroad_01_cover_blk_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\offroad\offroad_01_ext_co.paa",
					"\xdf\retextures\offroad\offroad_01_ext_co.paa",
					"\xdf\retextures\offroad\offroad_01_cover_blk_co.paa"
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
	class O_MBT_02_railgun_F_OCimport_01 : O_MBT_02_railgun_F { scope = 0; class AnimationSources; class Turrets; };
	class O_MBT_02_railgun_F_OCimport_02 : O_MBT_02_railgun_F_OCimport_01 {
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
		};
	};
	class XDF_Titan: O_MBT_02_railgun_F_OCimport_02
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
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_AX_railgun_fake",
					"cannon_AX_railgun"
				};
				magazines[]=
				{
					"45Rnd_75mm_RailGun_APFSDS_AX_mag",
					"AX_RailGun_01_DummyMagazine"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="cannon_AX_railgun";
			};
			class muzzle_hide_cannon2
			{
				source="reload";
				weapon="cannon_AX_railgun_fake";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_AX_railgun";
			};
		};
	};
	class B_Boat_Armed_01_minigun_F;
	class XDF_Trident: B_Boat_Armed_01_minigun_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Trident Speedboat";
		editorPreview="\xdf\previews\vehicles\XDF_Trident.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 600; // Default 400
		maxSpeed = 150; // Default 75
		fuelCapacity = 50; // Default ?
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
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\trident\boat_armed_01_ext_co.paa",
			"\xdf\retextures\trident\boat_armed_01_int_co.paa",
			"\xdf\retextures\trident\turret_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\trident\boat_armed_01_ext_co.paa",
					"\xdf\retextures\trident\boat_armed_01_int_co.paa",
					"\xdf\retextures\trident\turret_co.paa"
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
	class C_Boat_Transport_02_F;
	class XDF_RHIB: C_Boat_Transport_02_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF RHIB";
		editorPreview="\xdf\previews\vehicles\XDF_RHIB.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		armor = 100; // Default 50
		maxSpeed = 180; // Default 90
		fuelCapacity = 70; // Default ?
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
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\rhib\boat_transport_02_exterior_co.paa",
			"\xdf\retextures\rhib\boat_transport_02_interior_2_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\rhib\boat_transport_02_exterior_co.paa",
					"\xdf\retextures\rhib\boat_transport_02_interior_2_co.paa"
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
	class B_SDV_01_F;
	class XDF_SDV: B_SDV_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF MK-81 SDV";
		editorPreview="\xdf\previews\vehicles\XDF_SDV.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Combat_Diver";
		armor = 80; // Default 30
		maxSpeed = 80; // Default 30
		fuelCapacity = 240; // Default 120
		damageResistance = 0.05; // Default 0.0048000002
		engineMOI = 0.8;
		accelAidForceCoef = 5.0;
		accelAidForceSpd = 30.0;
		typicalCargo[]=
		{
			"B_XDF_Combat_Diver"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\sdv\sdv_ext_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\sdv\sdv_ext_co.paa"
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

	// Turrets
	class B_Radar_System_01_F;
	class XDF_Stratoseeker: B_Radar_System_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF RDR-23 Stratoseeker";
		editorPreview="\xdf\previews\vehicles\XDF_Stratoseeker.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 120; // Default 80
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\stratoseeker\radar_system_01_mat_01_co.paa",
			"\xdf\retextures\turrets\stratoseeker\radar_system_01_mat_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\stratoseeker\radar_system_01_mat_01_co.paa",
					"\xdf\retextures\turrets\stratoseeker\radar_system_01_mat_02_co.paa"
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
	class B_SAM_System_03_F;
	class XDF_Patriot: B_SAM_System_03_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF MIM-55 Patriot";
		editorPreview="\xdf\previews\vehicles\XDF_Patriot.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 120; // Default 80
		damageResistance = 0.05; // Default 0.0048000002
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\patriot\sam_system_03_mat_01_co.paa",
			"\xdf\retextures\turrets\patriot\sam_system_03_mat_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\patriot\sam_system_03_mat_01_co.paa",
					"\xdf\retextures\turrets\patriot\sam_system_03_mat_02_co.paa"
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
	class B_AAA_System_01_F;
	class XDF_Praetorian: B_AAA_System_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Praetorian CIWS";
		editorPreview="\xdf\previews\vehicles\XDF_Praetorian.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 160; // Default 80
		damageResistance = 0.05; // Default 0.0040000002
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\praetorian\aaa_system_01_co.paa",
			"\xdf\retextures\turrets\praetorian\aaa_system_02_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\praetorian\aaa_system_01_co.paa",
					"\xdf\retextures\turrets\praetorian\aaa_system_02_co.paa"
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
	class B_Ship_MRLS_01_F;
	class XDF_Typhon_VLS: B_Ship_MRLS_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Typhon VLS";
		editorPreview="\xdf\previews\vehicles\XDF_Typhon_VLS.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 500; // Default 400
		armorStructural=8; // Default 6
		damageResistance = 0.05; // Default 0.0040000002
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\typhon\ship_mrls_01_co.paa",
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\typhon\ship_mrls_01_co.paa"
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
	class B_static_AA_F;
	class XDF_StaticLance: B_static_AA_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF R-4 Lance (Static)";
		editorPreview="\xdf\previews\vehicles\XDF_StaticLance.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\titan\tubel_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
					"\xdf\retextures\xdf_uniform\weapons\titan\tubel_co.paa"		
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
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_R3_Spear_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_static_AT_F;
	class XDF_StaticSpear: B_static_AT_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF R-3 Spear (Static)";
		editorPreview="\xdf\previews\vehicles\XDF_StaticSpear.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\titan\tubem_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
					"\xdf\retextures\xdf_uniform\weapons\titan\tubem_co.paa"		
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
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_R4_Lance_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_GMG_01_F;
	class XDF_XM307: B_GMG_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM307 GMG";
		editorPreview="\xdf\previews\vehicles\XDF_XM307.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM307_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_GMG_01_high_F;
	class XDF_XM307_Raised: B_GMG_01_high_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM307 GMG (Raised)";
		editorPreview="\xdf\previews\vehicles\XDF_XM307_Raised.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM307_Raised_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_GMG_01_A_F;
	class XDF_XM307A: B_GMG_01_A_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM307 GMG (Autonomous)";
		editorPreview="\xdf\previews\vehicles\XDF_XM307A.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM307A_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_HMG_01_A_F;
	class XDF_XM312A: B_HMG_01_A_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM312 HMG (Autonomous)";
		editorPreview="\xdf\previews\vehicles\XDF_XM307A.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM312A_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_HMG_01_F;
	class XDF_XM312: B_HMG_01_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM312 HMG";
		editorPreview="\xdf\previews\vehicles\XDF_XM312.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM312A_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_HMG_01_high_F;
	class XDF_XM312_Raised: B_HMG_01_high_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF XM312 HMG (Raised)";
		editorPreview="\xdf\previews\vehicles\XDF_XM312_Raised.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_XM312_Raised_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_G_HMG_02_F;
	class XDF_M2HMG: B_G_HMG_02_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF M2 HMG .50";
		editorPreview="\xdf\previews\vehicles\XDF_M2HMG.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\m2hmg\static_m2_co.paa",
			"\xdf\retextures\turrets\m2hmg\m2_combined_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\m2hmg\static_m2_co.paa",
					"\xdf\retextures\turrets\m2hmg\m2_combined_co.paa"
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
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_M2HMG_Pack"
		//	};
		//	displayName="";
		//};
	};
	class B_G_HMG_02_high_F;
	class XDF_M2HMG_Raised: B_G_HMG_02_high_F
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF M2 HMG .50 (Raised)";
		editorPreview="\xdf\previews\vehicles\XDF_M2HMG_Raised.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_XDF_Operative";
		typicalCargo[]=
		{
			"B_XDF_Operative"
		};
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\turrets\m2hmg\static_m2_co.paa",
			"\xdf\retextures\turrets\m2hmg\m2_combined_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf\retextures\turrets\m2hmg\static_m2_co.paa",
					"\xdf\retextures\turrets\m2hmg\m2_combined_co.paa"
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
		//class assembleInfo
		//{
		//	primary=0;
		//	base="";
		//	assembleTo="";
		//	dissasembleTo[]=
		//	{
		//		"B_XDF_FUWT_Pack",
		//		"B_XDF_M2HMG_Raised_Pack"
		//	};
		//	displayName="";
		//};
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
	class B_CBRN_Man_Oversuit_01_MTP_F;
	class O_V_Soldier_Viper_hex_F;
	class TCGM_Viper_O_AHex_Soldier;
	class B_diver_F;
	class TCGM_F_Diver_B;
	class TCGM_F_DiverShort_B;
	class b_soldier_survival_F;
	class TCGM_Survival_Bra_B_MTP_Soldier;
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
	class B_XDF_CBRN_Suit: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_CBRN_Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_CBRN_Suit_co.paa"
		};
	};
	class B_XDF_SP_Suit: O_V_Soldier_Viper_hex_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_SP_Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_SP_Suit.paa"
		};
	};
	class B_XDF_Wetsuit: B_diver_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Wetsuit";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
	};
	class B_XDF_Female_Wetsuit: TCGM_F_Diver_B
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="B_XDF_Female_Wetsuit";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
	};
	class B_XDF_Female_Wetsuit_Short: TCGM_F_DiverShort_B
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="B_XDF_Female_Wetsuit_Short";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
	};
	class B_XDF_Survival_Suit: b_soldier_survival_F
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Survival_Suit";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
	};
	class B_XDF_Female_Survival_Suit: TCGM_Survival_Bra_B_MTP_Soldier
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Female_Survival_Suit";
		hiddenSelections[]=
		{
			"camo2",
			"camo",
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
	};
	class B_XDF_Female_SP_Suit: TCGM_Viper_O_AHex_Soldier
	{
		author="Radium";
		scope=1;
		scopeCurator=0;
		uniformClass="U_XDF_Female_SP_Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_SP_Suit.paa"
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
	class B_FieldPack_blk;
	class B_SSU_LegStrapBag_base;
	class B_SSU_TacticalPack_base;
	class B_SSU_Kitbag_base;
	class B_SSU_RadioBag_base;
	class B_Carryall_blk;
	class B_CombinationUnitRespirator_01_F;
	class B_Messenger_Black_F;
	class B_Bergen_mcamo_F;
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
	class B_XDF_Viper_Harness_Black_med: B_SSU_Viper_Harness_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Viper Harness (Medical)";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Viper_Harness_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Viper_Harness_Black_med.paa"
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
	class B_XDF_Assault_Pack_Black_med: B_SSU_Assault_Pack_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Assault Pack (Medical)";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Assault_Pack_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Assault_Pack_Black_med.paa"
		};
	};
	class B_XDF_Field_Pack_Black: B_FieldPack_blk
	{
		author="Radium";
		scope=2;
		displayName="XDF Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Field_Pack_Black.paa"
		};
	};
	class B_XDF_Field_Pack_Black_med: B_FieldPack_blk
	{
		author="Radium";
		scope=2;
		displayName="XDF Field Pack (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Field_Pack_Black_med.paa"
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
	class B_XDF_TacticalPack_Black_med: B_SSU_TacticalPack_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Tactical Backpack (Medical)";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black_med.paa"
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
	class B_XDF_Kitbag_Black_med: B_SSU_Kitbag_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Kitbag (Medical)";
		picture="\SSU_Black_Backpacks\UI\Icon_SSU_Kitbag_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Kitbag_Black_med.paa"
		};
	};
	class B_XDF_CarryAll_Black: B_Carryall_blk
	{
		author="Radium";
		scope=2;
		displayName="XDF Carryall";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_CarryAll_black.paa"
		};
	};
	class B_XDF_CarryAll_Black_med: B_Carryall_blk
	{
		author="Radium";
		scope=2;
		displayName="XDF Carryall (Medical)";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_CarryAll_black_med.paa"
		};
	};
	class B_XDF_Messenger_Bag: B_Messenger_Black_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Messenger Bag";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Messenger_Bag.paa"
		};
	};
	class B_XDF_Messenger_Bag_med: B_Messenger_Black_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Messenger Bag (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Messenger_Bag_med.paa"
		};
	};
	class B_XDF_Bergen: B_Bergen_mcamo_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Bergen.paa"
		};
	};
	class B_XDF_CUR: B_CombinationUnitRespirator_01_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Combination Unit Respirator";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_CUR_co.paa",
			"",
			"",
			"",
			""
		};
		maximumLoad=190;
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
		displayName="XDF UAV Bag (AR-5 Mosquito)";
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
	class B_XDF_Patrol_Backpack: Weapon_Bag_Base
	{
		author="Radium";
		mapSize=0.60000002;
		_generalMacro="B_UAV_01_backpack_F";
		scope=2;
		scopeCurator=2;
		displayName="XDF Patrol Backpack";
		model="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="B_XDF";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Patrol_Backpack.paa"
		};
		maximumLoad=400;
		mass=75;
	};
	class B_XDF_Patrol_Backpack_med: Weapon_Bag_Base
	{
		author="Radium";
		mapSize=0.60000002;
		_generalMacro="B_UAV_01_backpack_F";
		scope=2;
		scopeCurator=2;
		displayName="XDF Patrol Backpack (Medical)";
		model="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="B_XDF";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Patrol_Backpack_med.paa"
		};
		maximumLoad=400;
		mass=75;
	};
	class B_XDF_Sentinel_Backpack: Weapon_Bag_Base
	{
		author="Radium";
		mapSize=0.60000002;
		_generalMacro="B_UAV_01_backpack_F";
		scope=2;
		scopeCurator=2;
		displayName="XDF Designator Bag (LS-2 Sentinel)";
		model="\A3\Supplies_F_Mark\Bags\Backpack_Compact.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="B_XDF";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_b_c_compact_mcamo_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\backpacks\B_XDF_Sentinel_Backpack.paa"
		};
		maximumLoad=0;
		mass=180;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="XDF LS-2 Sentinel Designator";
			assembleTo="XDF_Sentinel";
		};
	};

	// Turret Backpacks
	//class B_XDF_FUWT_Pack: B_SSU_TacticalPack_base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Folded Universal Weapon Tripod";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=180;
	//};
	//class B_XDF_R3_Spear_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled R-3 Spear (Static)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF R-3 Spear (Static)";
	//		assembleTo="XDF_StaticSpear";
	//	};
	//};
	//class B_XDF_R4_Lance_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled R-3 Lance (Static)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF R-4 Lance (Static)";
	//		assembleTo="XDF_StaticLance";
	//	};
	//};
	//class B_XDF_XM307_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM307 GMG";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM307 GMG";
	//		assembleTo="XDF_XM307";
	//	};
	//};
	//class B_XDF_XM307_Raised_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM307 GMG (Raised)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM307 HMG (Raised)";
	//		assembleTo="XDF_XM307_Raised";
	//	};
	//};
	//class B_XDF_XM307A_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM307 GMG (Autonomous)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM307 GMG (Autonomous)";
	//		assembleTo="XDF_XM307A";
	//	};
	//};
	//class B_XDF_XM312A_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM312 HMG (Autonomous)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM312 HMG (Autonomous)";
	//		assembleTo="XDF_XM312A";
	//	};
	//};
	//class B_XDF_XM312_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM312 HMG";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM312 HMG";
	//		assembleTo="XDF_XM312";
	//	};
	//};
	//class B_XDF_XM312_Raised_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled XM312 HMG (Raised)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF XM312 HMG (Raised)";
	//		assembleTo="XDF_XM312_Raised";
	//	};
	//};
	//class B_XDF_M2HMG_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled M2 HMG .50";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		displayName="XDF M2 HMG .50";
	//		assembleTo="XDF_M2HMG";
	//	};
	//};
	//class B_XDF_M2HMG_Raised_Pack: Weapon_Bag_Base
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="XDF Disassembled M2 HMG .50 (Raised)";
	//	picture="\SSU_Black_Backpacks\UI\Icon_SSU_TacticalPack_Black.paa";
	//	faction="B_XDF";
	//	hiddenSelectionsTextures[]=
	//	{
	//		"\xdf\retextures\xdf_uniform\backpacks\B_XDF_TacticalPack_Black.paa"
	//	};
	//	maximumLoad=0;
	//	mass=320;
	//	class assembleInfo: assembleInfo
	//	{
	//		base="B_XDF_FUWT_Pack";
	//		displayName="XDF M2 HMG .50 (Raised)";
	//		assembleTo="XDF_M2HMG_Raised";
	//	};
	//};


	// Units
	class B_Soldier_F;
	class B_Soldier_AR_F;
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
	class B_XDF_Combat_Diver : B_Soldier_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Combat Diver";
		editorPreview="\xdf\previews\units\B_XDF_Combat_Diver.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Survival_Suit";
		linkedItems[] = {
			"V_XDF_Rebreather_Mask",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Rebreather_Mask",
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
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Combat_Diver_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Combat Diver";
		editorPreview="\xdf\previews\units\B_XDF_Combat_Diver_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Survival_Suit";
		linkedItems[] = {
			"V_XDF_Rebreather_Mask",
			"H_XDF_Light_Combat_Helmet_Black",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch",
			"NVGogglesB_SSU_blk",
			"G_XDF_Balaclava_TI_G_Black"
		};
		respawnlinkedItems[] = {
			"V_XDF_Rebreather_Mask",
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
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Autorifleman : B_Soldier_AR_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Autorifleman";
		editorPreview="\xdf\previews\units\B_XDF_Autorifleman.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Rolled_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_LMG_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_LMG_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class B_XDF_Autorifleman_F : TCGM_RollUp_B_MTP_Soldier_AR
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Autoriflewoman";
		editorPreview="\xdf\previews\units\B_XDF_Autorifleman_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black_Rolled";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_LMG_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_LMG_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"200Rnd_556x45_Box_Tracer_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
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
			"SmokeShell"
		};
		respawnMagazines[] = {
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_03_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
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
			"SmokeShell"
		};
		respawnMagazines[] = {
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
			"20Rnd_762x51_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_LRR_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
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
			"SmokeShell"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_LRR_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
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
			"SmokeShell"
		};
		respawnMagazines[] = {
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
			"7Rnd_408_Mag_blue_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
			"XDF_hgun_P07",
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
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_P07",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_MRAWS_black_F",
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
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"XDF_hgun_P07",
			"XDF_launch_MRAWS_black_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_MRAWS_black_F",
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
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
	class B_XDF_MS_AT : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Missile Specialist (AT)";
		editorPreview="\xdf\previews\units\B_XDF_MS_AT.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_hgun_P07",
			"XDF_launch_B_Titan_short_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_B_Titan_short_F",
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
			"Titan_AT_XDF",
			"Titan_AT_XDF",
			"Titan_AT_XDF",
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
			"Titan_AT_XDF",
			"Titan_AT_XDF",
			"Titan_AT_XDF",
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
	class B_XDF_MS_AT_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Missile Specialist (AT)";
		editorPreview="\xdf\previews\units\B_XDF_MS_AT_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_hgun_P07",
			"XDF_launch_B_Titan_short_F",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_B_Titan_short_F",
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
			"Titan_AT_XDF",
			"Titan_AT_XDF",
			"Titan_AT_XDF",
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
			"Titan_AT_XDF",
			"Titan_AT_XDF",
			"Titan_AT_XDF",
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
	class B_XDF_MS_AA : B_soldier_LAT2_F
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Missile Specialist (AA)";
		editorPreview="\xdf\previews\units\B_XDF_MS_AA.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_M";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};
		uniformClass = "U_XDF_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_hgun_P07",
			"XDF_launch_B_Titan",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_B_Titan",
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
			"Titan_AA_XDF",
			"Titan_AA_XDF",
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
			"Titan_AA_XDF",
			"Titan_AA_XDF",
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
	class B_XDF_MS_AA_F : TCGM_RollUp_B_MTP_Soldier_LT
	{
		author = "Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Missile Specialist (AA)";
		editorPreview="\xdf\previews\units\B_XDF_MS_AA_F.jpg";
		side = 1;
		faction = "B_XDF";
		editorSubcategory = "XDF_FO_F";
		icon="iconManAT";
		role="MissileSpecialist";
		identityTypes[] = {"Head_TCGM_Girls_White","Head_TCGM_Girls_Asian","Head_TCGM_Girls_Afro"};
		uniformClass = "U_XDF_Female_Uniform_Black";
		linkedItems[] = {
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"V_XDF_Modular_Carrier_Lite_Black",
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
			"XDF_hgun_P07",
			"XDF_launch_B_Titan",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_GL_XDF_black_F",
			"XDF_hgun_P07",
			"XDF_launch_B_Titan",
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
			"Titan_AA_XDF",
			"Titan_AA_XDF",
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
			"Titan_AA_XDF",
			"Titan_AA_XDF",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_SMG_01_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_CRW_XDF_black_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_P07",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_SMG_01_F",
			"XDF_hgun_P07",
			"Rangefinder"
		};

		magazines[] = {
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"30rnd_45acp_mag_smg_01_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
			"16Rnd_9x21_Mag_blue_reload_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
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

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_XDF_black_F",
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

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
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
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT_XDF",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
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
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
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

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
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
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
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

		backpack = "B_XDF_Kitbag_Black_med";
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
			"XDF_hgun_P07",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AXGL_XDF_black_F",
			"XDF_hgun_P07",
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
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Laserdesignator_03"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_UBS_XDF_black_F",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
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
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
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
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_GM6_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
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
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_GM6_F",
			"XDF_hgun_Pistol_heavy_01",
			"Rangefinder"
		};

		magazines[] = {
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
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
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
			"5Rnd_127x108_APDS_Mag_blue_tracer",
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
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_O_Vorona_black",
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
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
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
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_O_Vorona_black",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"arifle_MSBS65_AX_XDF_black_F",
			"XDF_hgun_Pistol_heavy_01",
			"XDF_launch_O_Vorona_black",
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
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
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
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"30Rnd_65x39_caseless_msbs_mag_blue_reload_tracer",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
			"Vorona_HEAT_XDF",
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
		uniformClass = "U_XDF_SP_Suit";
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
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_arifle_ARX_blk_F",
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"30Rnd_65x39_caseless_blue_reload_tracer",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
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
		uniformClass = "U_XDF_SP_Suit";
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
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_05_blk_F",
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"10Rnd_93x64_DMR_05_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
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
		uniformClass = "U_XDF_SP_Suit";
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
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_MMG_01_black_F",
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};

		magazines[] = {
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"150Rnd_93x64_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
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
		uniformClass = "U_XDF_SP_Suit";
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
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"XDF_srifle_DMR_04_F",
			"XDF_hgun_ACPC2",
			"Rangefinder"
		};

		magazines[] = {
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
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
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"10Rnd_127x54_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"9Rnd_45ACP_Mag_blue_reload_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellPurple",
			"SmokeShellOrange",
			"SmokeShell",
			"SmokeShell"
		};

		backpack = "B_XDF_Viper_Harness_Black_med";
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