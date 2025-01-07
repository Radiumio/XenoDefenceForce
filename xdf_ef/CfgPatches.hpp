class CfgPatches 
{
	class xdf_ef
	{
		addonRootClass = "xdf";
		requiredAddons[] = 
		{
			"xdf",
			"EF_Marines"
		};
		version = "1.0";
		units[] = 
		{
			"XDF_Boar_FSV",
			"XDF_Boar_AT",
			"XDF_Boar_LAAD",
			"XDF_Python"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};