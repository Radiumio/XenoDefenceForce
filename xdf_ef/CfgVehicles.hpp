class CfgVehicles
{
	class EF_B_MRAP_01_FSV_NATO;
	class XDF_Boar_FSV: EF_B_MRAP_01_FSV_NATO
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar FSV";
		editorPreview="\xdf_ef\previews\vehicles\XDF_Boar_FSV.jpg";
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_RB",
			"Door_LB"
		};
	};
	class EF_B_MRAP_01_AT_NATO;
	class XDF_Boar_AT: EF_B_MRAP_01_AT_NATO
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar AT";
		editorPreview="\xdf_ef\previews\vehicles\XDF_Boar_AT.jpg";
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_RB",
			"Door_LB"
		};
	};
	class EF_B_MRAP_01_LAAD_NATO;
	class XDF_Boar_LAAD: EF_B_MRAP_01_LAAD_NATO
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Boar LAAD";
		editorPreview="\xdf_ef\previews\vehicles\XDF_Boar_LAAD.jpg";
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
		driverDoor="Door_LF";
		cargoDoors[]={
			"Door_RF",
			"Door_RB",
			"Door_LB"
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
		editorPreview="\xdf_ef\previews\vehicles\XDF_Python.jpg";
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
	class B_XDF_Marine_Uniform_Gloved_Pads: B_XDF_Marine_Uniform
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
};