class CfgPatches 
{
	class xdf_rf
	{
		addonRootClass = "xdf";
		requiredAddons[] = 
		{
			"xdf",
			"RF_Air_heli_medium_ec"
		};
		version = "1.0";
		units[] = 
		{
			"XDF_Mamba",
			"XDF_Mamba_Unarmed",
			"XDF_Mamba_SOCAT",
			"XDF_Lynx_ASW",
			"XDF_Lynx_Navy_Unarmed",
			"XDF_Marauder",
			"XDF_Marauder_Fuel",
			"XDF_Marauder_Repair",
			"XDF_Marauder_AA",
			"XDF_Marauder_RCWS",
			"XDF_Marauder_MMG",
			"XDF_Marauder_Comms",
			"XDF_TwinMortar",
			"B_XDF_Scout",
			"B_XDF_Scout_F"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};