class CfgPatches 
{
	class xdf_ws
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
			"XDF_Mako_UP_Unarmed",
			"XDF_Commando_ATGM",
			"XDF_Commando_CV",
			"XDF_Commando_Mortar"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};