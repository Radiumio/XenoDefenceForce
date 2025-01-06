class CfgVehicles
{
	class B_Heli_EC_03_RF;
    class B_Heli_EC_03_RF_OCimport_01 : B_Heli_EC_03_RF { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_EC_03_RF_OCimport_02 : B_Heli_EC_03_RF_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
			class CopilotTurret;
            class MainTurret;
        };
    };
	class XDF_Mamba: B_Heli_EC_03_RF_OCimport_02
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF MH-252 Mamba";
		editorPreview="\xdf\previews\vehicles\XDF_Mamba.jpg";
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
			"\xdf_rf\retextures\mamba\mh252_mamba_co.paa",
			"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
			"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
			"\xdf_rf\retextures\mamba\mh252_mamba_adds_co.paa",
			"\xdf_rf\retextures\mamba\mh252_mamba_co.paa",
			"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
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
		};
	};
};