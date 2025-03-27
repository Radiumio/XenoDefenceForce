class CfgWeapons
{
	class H_HelmetB_plain_sb_mtp_RF;
	class H_XDF_Shapebreaker_Helmet: H_HelmetB_plain_sb_mtp_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF Shapebreaker Helmet";
		descriptionShort = "Armor Level II<br/>Although camouflage and silhouette distortion is not very effective against the xeno-threat, Shapebreaker helmets typically denote scout or infiltration units.";
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
		descriptionShort = "RPG Launcher<br/>Standard-issue frontline anti-vehicle weapon. Not designed for anti-xeno use at this time.";
		baseWeapon="launch_PSRL1_PWS_xdf_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\psrl\launch_PSRL1_01_xdf_CO.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\psrl\launch_PSRL1_02_xdf_CO.paa"
		};	
	};
	class srifle_h6_blk_rf;
	class XDF_srifle_h6_blk_rf: srifle_h6_blk_rf
	{
		author="Radium";
		scope=2;
		displayName="XDF HERA H6";
		descriptionShort = "AX Scout Rifle<br/>Light-weight XDF precision scout rifle, chambering 5.56 AX.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_srifle_h6_blk_rf";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\h6\h6_01_blk_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\h6\h6_01_blk_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\h6\h6_03_co.paa"
		};	
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};
	class arifle_ash12_blk_RF;
	class XDF_arifle_ash12_blk_RF: arifle_ash12_blk_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF ASh-12";
		descriptionShort = "AX Scout Rifle<br/>Light-weight XDF precision scout rifle, chambering 5.56 AX.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_arifle_ash12_blk_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_01_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_02_co.paa"
		};		
		magazineWell[] +=
		{
			"ASH12_127x55_RF_XDF"
		};
	};
	class arifle_ash12_GL_blk_RF;
	class XDF_arifle_ash12_GL_blk_RF: arifle_ash12_GL_blk_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF ASh-12 GL";
		descriptionShort = "AX Scout Rifle<br/>Light-weight XDF precision scout rifle, chambering 5.56 AX.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_arifle_ash12_GL_blk_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_01_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_02_co.paa",
			"a3\weapons_f\data\gl_holo_co.paa"
		};		
		magazineWell[] +=
		{
			"ASH12_127x55_RF_XDF"
		};
	};
	class arifle_ash12_LR_blk_RF;
	class XDF_arifle_ash12_LR_blk_RF: arifle_ash12_LR_blk_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF ASh-12 LR";
		descriptionShort = "AX Battle Rifle<br/>Deadly close-quarters heavy-hitter chambering subsonic 12.7.<br/>Caliber: 12.7x55 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_arifle_ash12_LR_blk_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_01_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\ash12\ash12_02_co.paa"
		};	
		magazineWell[] +=
		{
			"ASH12_127x55_RF_XDF"
		};
	};

	class hgun_DEagle_RF;
	class XDF_hgun_DEagle_RF: hgun_DEagle_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF Desert Eagle Mark XIX L5";
		descriptionShort = "AX Heavy Pistol<br/>Powerful back-up sidearm chambered in .50 AE.<br/>Caliber: .50 AE - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_hgun_DEagle_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\deagle\deagle_co.paa",
			"\xdf_rf\retextures\xdf_uniform\weapons\deagle\deagle_co.paa"
		};	
		magazineWell[] +=
		{
			"Pistol_DEagle_RF_XDF"
		};
	};
	class hgun_Glock19_RF;
	class XDF_hgun_Glock19_RF: hgun_Glock19_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF Glock 19X";
		descriptionShort = "AX Pistol<br/>Reliable back-up sidearm chambered in 9 mm.<br/>Caliber: 9x19 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_hgun_Glock19_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\glock\glock_co.paa"
		};	
		magazineWell[] +=
		{
			"Pistol_9x19_RF_XDF"
		};
	};
	class hgun_Glock19_auto_RF;
	class XDF_hgun_Glock19_auto_RF: hgun_Glock19_auto_RF
	{
		author="Radium";
		scope=2;
		displayName="XDF Glock 19X Auto";
		descriptionShort = "AX Pistol<br/>Reliable back-up sidearm chambered in 9 mm, with a full-auto switch.<br/>Caliber: 9x19 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_hgun_Glock19_auto_RF";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rf\retextures\xdf_uniform\weapons\glock\glock_co.paa"
		};	
		magazineWell[] +=
		{
			"Pistol_9x19_RF_XDF"
		};
	};
};