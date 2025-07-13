class CfgPatches 
{
	class xdf_abramsx
	{
		addonRootClass = "xdf";
		requiredAddons[] = 
		{
			"xdf",
			"QAV_AbramsX"
		};
		version = "1.0";
		units[] = {
			"qav_abramsx_XDF",
			"qav_abramsx_tusk_XDF",
			"qav_abramsx_templar_XDF",
			"qav_abramsx_zeus_XDF"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};