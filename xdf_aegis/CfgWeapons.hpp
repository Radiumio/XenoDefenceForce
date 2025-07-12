
class CfgWeapons
{
	class arifle_SA80_C_blk_F;
	class arifle_SA80_C_XDF_F: arifle_SA80_C_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF L22A3";
		baseWeapon = "arifle_SA80_C_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_01_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_C_CO.paa"
		};
		magazines[] += {"30Rnd_65x39_caseless_black_mag_blue_tracer"};
		magazineWell[] += {"MX_65x39_XDF"};
	};
	class arifle_SA80_blk_F;
	class arifle_SA80_XDF_F: arifle_SA80_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF L85A3";
		baseWeapon = "arifle_SA80_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_01_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_02_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\grip_CO.paa"
		};
		magazines[] += {"30Rnd_65x39_caseless_black_mag_blue_tracer"};
		magazineWell[] += {"MX_65x39_XDF"};
	};
	class arifle_SA80_GL_blk_F;
	class arifle_SA80_GL_XDF_F: arifle_SA80_GL_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF L85A3 GL";
		baseWeapon = "arifle_SA80_GL_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_01_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_02_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_GL_CO.paa"
		};
		magazines[] += {"30Rnd_65x39_caseless_black_mag_blue_tracer"};
		magazineWell[] += {"MX_65x39_XDF"};
	};
	class Aegis_arifle_SR25_MR_blk_F;
	class Aegis_arifle_SR25_MR_XDF_F: Aegis_arifle_SR25_MR_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF M110";
		baseWeapon = "Aegis_arifle_SR25_MR_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m110\arifle_SR25_01_MR_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m110\arifle_SR25_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m110\arifle_sr25_03_black_co.paa"
		};
		magazines[] = {"Aegis_20Rnd_762x51_SMAG_XDF_Reload_Tracer"};
		magazineWell[] += {"Aegis_SR25_762x51_XDF"};
	};
	class Aegis_arifle_SR25_blk_F;
	class Aegis_arifle_SR25_XDF_F: Aegis_arifle_SR25_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK11";
		baseWeapon = "Aegis_arifle_SR25_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m110\arifle_SR25_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m110\arifle_SR25_02_black_CO.paa"
		};
		magazines[] = {"Aegis_20Rnd_762x51_SMAG_XDF_Reload_Tracer"};
		magazineWell[] += {"Aegis_SR25_762x51_XDF"};
	};
	class Aegis_arifle_M4A1_F;
	class Aegis_arifle_M4A1_XDF_F: Aegis_arifle_M4A1_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF M4A1";
		baseWeapon = "Aegis_arifle_M4A1_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_05_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class Aegis_arifle_M4A1_grip_F;
	class Aegis_arifle_M4A1_grip_XDF_F: Aegis_arifle_M4A1_grip_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF M4A1 Foregrip";
		baseWeapon = "Aegis_arifle_M4A1_grip_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_05_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class Aegis_arifle_M4A1_GL_F;
	class Aegis_arifle_M4A1_GL_XDF_F: Aegis_arifle_M4A1_GL_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF M4A1 GL";
		baseWeapon = "Aegis_arifle_M4A1_GL_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_03_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_04_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class Aegis_arifle_M4A1_short_F;
	class Aegis_arifle_M4A1_short_XDF_F: Aegis_arifle_M4A1_short_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF M4A1 SBR";
		baseWeapon = "Aegis_arifle_M4A1_short_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\m4a1\arifle_M4A1_05_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class arifle_SCAR_L_black_F;
	class arifle_SCAR_L_XDF_F: arifle_SCAR_L_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK16";
		baseWeapon = "arifle_SCAR_L_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_02_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class arifle_SCAR_L_grip_black_F;
	class arifle_SCAR_L_grip_XDF_F: arifle_SCAR_L_grip_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK16 Foregrip";
		baseWeapon = "arifle_SCAR_L_grip_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_01_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_02_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class arifle_SCAR_L_short_black_F;
	class arifle_SCAR_L_short_XDF_F: arifle_SCAR_L_short_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK16 Carbine";
		baseWeapon = "arifle_SCAR_L_short_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_02_black_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class arifle_SCAR_L_GL_black_F;
	class arifle_SCAR_L_GL_XDF_F: arifle_SCAR_L_GL_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK16 GL";
		baseWeapon = "arifle_SCAR_L_GL_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_L_02_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_GL_CO.paa"
		};
		magazines[] = {"30rnd_556x45_stanag_blue_tracer"};
		magazineWell[] += {"STANAG_556x45_XDF","STANAG_556x45_Large_XDF"};
	};
	class arifle_SCAR_black_F;
	class arifle_SCAR_XDF_F: arifle_SCAR_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK17";
		baseWeapon = "arifle_SCAR_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_02_black_CO.paa"
		};
		magazines[] += {"20Rnd_762x51_Mag_blue_tracer"};
		magazineWell[] += {"M14_762x51_XDF"};
	};
	class arifle_SCAR_grip_black_F;
	class arifle_SCAR_grip_XDF_F: arifle_SCAR_grip_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK17 Foregrip";
		baseWeapon = "arifle_SCAR_grip_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_02_black_CO.paa"
		};
		magazines[] += {"20Rnd_762x51_Mag_blue_tracer"};
		magazineWell[] += {"M14_762x51_XDF"};
	};
	class arifle_SCAR_short_black_F;
	class arifle_SCAR_short_XDF_F: arifle_SCAR_short_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK17 Carbine";
		baseWeapon = "arifle_SCAR_short_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_02_black_CO.paa"
		};
		magazines[] += {"20Rnd_762x51_Mag_blue_tracer"};
		magazineWell[] += {"M14_762x51_XDF"};
	};
	class arifle_SCAR_GL_black_F;
	class arifle_SCAR_GL_XDF_F: arifle_SCAR_GL_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF MK17 GL";
		baseWeapon = "arifle_SCAR_GL_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_01_black_CO.paa","\xdf_aegis\retextures\xdf_uniform\weapons\scar\SCAR_02_black_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\sa80\SA80_F_GL_CO.paa"
		};
		magazines[] += {"20Rnd_762x51_Mag_blue_tracer"};
		magazineWell[] += {"M14_762x51_XDF"};
	};
	class Aegis_MMG_FNMAG_F;
	class Aegis_MMG_FNMAG_XDF_F: Aegis_MMG_FNMAG_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF GPMG";
		baseWeapon = "Aegis_MMG_FNMAG_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_1_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_2_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_int_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_fnmag_co.paa"
		};
		magazines[] = {"Aegis_200Rnd_762x51_MAG_AX_Tracer_F"};
		magazineWell[] += {"Aegis_FNMAG_XDF"};
	};
	class Aegis_MMG_FNMAG_240_F;
	class Aegis_MMG_FNMAG_240_XDF_F: Aegis_MMG_FNMAG_240_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF LWM-240";
		baseWeapon = "Aegis_MMG_FNMAG_240_XDF_F";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_1_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_2_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_int_co.paa",
			"\xdf_aegis\retextures\xdf_uniform\weapons\gpmg\m240_fnmag_co.paa"
		};
		magazines[] = {"Aegis_200Rnd_762x51_MAG_AX_Tracer_F"};
		magazineWell[] += {"Aegis_FNMAG_XDF"};
	};

	// Headgear //
	class Aegis_H_Helmet_Virtus_Scrim_wdl_F;
	class Aegis_H_Helmet_Virtus_Scrim_XDF_F: Aegis_H_Helmet_Virtus_Scrim_wdl_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Fortis Helmet (Scrim)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_Cover_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HeadsetWest_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\ghillie2_baf_XDF_co.paa"
		};
	};
	class Aegis_H_Helmet_Virtus_Cover_wdl_F;
	class Aegis_H_Helmet_Virtus_Cover_XDF_F: Aegis_H_Helmet_Virtus_Cover_wdl_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Fortis Helmet (Cover)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_Cover_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HeadsetWest_XDF_CO.paa"
		};
	};
	class Aegis_H_Helmet_Virtus_Headset_rgr_F;
	class Aegis_H_Helmet_Virtus_Headset_XDF_F: Aegis_H_Helmet_Virtus_Headset_rgr_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Fortis Helmet (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HeadsetWest_XDF_CO.paa"
		};
	};
	class Aegis_H_Helmet_Virtus_rgr_F;
	class Aegis_H_Helmet_Virtus_XDF_F: Aegis_H_Helmet_Virtus_rgr_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Fortis Helmet";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetVirtus_XDF_CO.paa"
		};
	};
	class Aegis_H_Helmet_FASTMT_blk_F;
	class Aegis_H_Helmet_FASTMT_XDF_F: Aegis_H_Helmet_FASTMT_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Operator Helmet";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetFASTMT_XDF_CO.paa"
		};
	};
	class Aegis_H_Helmet_FASTMT_Cover_blk_F;
	class Aegis_H_Helmet_FASTMT_Cover_XDF_F: Aegis_H_Helmet_FASTMT_Cover_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Operator Helmet (Cover)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetFASTMT_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetFASTMT_Cover_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HeadsetWest_XDF_CO.paa"
		};
	};
	class Aegis_H_Helmet_FASTMT_Headset_blk_F;
	class Aegis_H_Helmet_FASTMT_Headset_XDF_F: Aegis_H_Helmet_FASTMT_Headset_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Operator Helmet (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetFASTMT_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HeadsetWest_XDF_CO.paa"
		};
	};
	class H_HelmetSpecter_black_F;
	class H_HelmetSpecter_XDF_F: H_HelmetSpecter_black_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Specter Helmet";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetSpecter_01_XDF_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_grn_F;
	class H_HelmetSpecter_cover_XDF_F: H_HelmetSpecter_cover_grn_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Specter Helmet (Cover)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetSpecter_01_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetSpecter_cover_XDF_CO.paa"
		};
	};
	class H_HelmetSpecter_black_headset_F;
	class H_HelmetSpecter_XDF_headset_F: H_HelmetSpecter_black_headset_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF Specter Helmet (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetSpecter_01_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\H_HelmetSpecter_cover_XDF_CO.paa"
		};
	};

	// NVG //
	class Aegis_NVG_IVAS_01_blk_F;
	class Aegis_NVG_IVAS_01_XDF_F: Aegis_NVG_IVAS_01_blk_F
	{
		author = "Aegis Team & Radium";
		scope = 2;
		displayName = "XDF IVAS";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\IVAS_XDF_CO.paa",
			"\xdf_aegis\retextures\xdf_uniform\headgear\IVAS_XDF_CO.paa"
		};
	};
	class Aegis_NV_G_scrimNet_olive_F;
	class Aegis_NV_G_scrimNet_black_F: Aegis_NV_G_scrimNet_olive_F
	{
		class ItemInfo;
	};
	class Aegis_NV_G_scrimNet_XDF_F: Aegis_NV_G_scrimNet_black_F
	{
		author = "Aegis Team & Radium";
		displayName = "XDF Scrim Net";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_aegis\retextures\xdf_uniform\headgear\scrimNet_XDF_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\xdf_aegis\retextures\xdf_uniform\headgear\scrimNet_XDF_ca.paa"};
		};
	};
	class Aegis_NV_G_scrimNet_under_olive_F;
	class Aegis_NV_G_scrimNet_under_black_F: Aegis_NV_G_scrimNet_under_olive_F
	{
		class ItemInfo;
	};
	class Aegis_NV_G_scrimNet_under_XDF_F: Aegis_NV_G_scrimNet_under_black_F
	{
		author = "Aegis Team & Radium";
		displayName = "XDF Scrim Net (Under Helmet)";
		hiddenSelectionsTextures[] = {"\xdf_aegis\retextures\xdf_uniform\headgear\scrimNet_XDF_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\xdf_aegis\retextures\xdf_uniform\headgear\scrimNet_XDF_ca.paa"};
		};
	};
};