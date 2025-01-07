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
			"XDF_Mamba_SOCAT"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};