
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
};