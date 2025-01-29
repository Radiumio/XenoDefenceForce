class CfgPatches 
{
	class xdf_rs
	{
		addonRootClass = "xdf";
		requiredAddons[] = 
		{
			"xdf",
			"Shield_F_lxWS",
			"data_f_lxWS"
		};
		version = "1.0";
		units[] = 
		{
			"XDF_protoShield",
			"XDF_Mako_UP",
			"XDF_Mako_UP_Unarmed"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};