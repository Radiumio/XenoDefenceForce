class CfgWeapons
{
	class H_HelmetB_plain_sb_mtp_RF;
	class H_XDF_Shapebreaker_Helmet: H_HelmetB_plain_sb_mtp_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF Shapebreaker Helmet";
		hiddenSelections[] = 
		{
			"camo", 
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa",
			"\xdf_rf\retextures\xdf_uniform\helmets\mitznefet_xdf_co.paa"
		};
	};
	class launch_PSRL1_PWS_black_RF;
	class launch_PSRL1_PWS_xdf_RF: launch_PSRL1_PWS_black_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF PSRL-1 PWS";
		baseWeapon="launch_PSRL1_PWS_xdf_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\launch_PSRL1_01_xdf_CO.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\launch_PSRL1_02_xdf_CO.paa"
		};	
	};
};