class CfgWeapons
{
	class JCA_arifle_HK433_black_F;
	class JCA_arifle_HK433_XDF_F: JCA_arifle_HK433_black_F
	{
		displayName = "XDF HK433 5.56 mm";
		baseWeapon = "JCA_arifle_HK433_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_01_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_02_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_03_XDF_CO.paa"
		};
		magazineWell[] += {"STANAG_556x45_XDF"};
	};
	class JCA_arifle_HK433_short_black_F;
	class JCA_arifle_HK433_short_XDF_F: JCA_arifle_HK433_short_black_F
	{
		displayName = "XDF HK433 5.56 mm CQB";
		baseWeapon = "JCA_arifle_HK433_short_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_01_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_02_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk433\arifle_HK433_03_XDF_CO.paa"
		};
		magazineWell[] += {"STANAG_556x45_XDF"};
	};
	class JCA_arifle_HK437_AFG_black_F;
	class JCA_arifle_HK437_AFG_XDF_F: JCA_arifle_HK437_AFG_black_F
	{
		displayName = "XDF HK437 .300 BLK AFG";
		baseWeapon = "JCA_arifle_HK437_AFG_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_01_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_02_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_03_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_05_XDF_CO.paa"
		};
		magazineWell[] += {"JCA_HK437_300BLK_XDF"};
	};
	class JCA_arifle_HK437_VFG_black_F;
	class JCA_arifle_HK437_VFG_XDF_F: JCA_arifle_HK437_VFG_black_F
	{
		displayName = "XDF HK437 .300 BLK VFG";
		baseWeapon = "JCA_arifle_HK437_VFG_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_01_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_02_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_03_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\hk437\arifle_HK437_04_XDF_CO.paa"
		};
		magazineWell[] += {"JCA_HK437_300BLK_XDF"};
	};
	class JCA_srifle_M107_black_F;
	class JCA_srifle_M107_XDF_F: JCA_srifle_M107_black_F
	{
		displayName = "XDF M107A1 12.7 mm";
		baseWeapon = "JCA_srifle_M107_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"xdf_jca\retextures\xdf_uniform\weapons\m107\srifle_M107_01_XDF_CO.paa",
			"xdf_jca\retextures\xdf_uniform\weapons\m107\srifle_M107_02_XDF_CO.paa"
		};
		magazineWell[] += {"JCA_M107_127x99_XDF"};
	};
};