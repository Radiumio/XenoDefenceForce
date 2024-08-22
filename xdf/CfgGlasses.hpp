class CfgGlasses
{
	class G_SSU_Balaclava_TI_base;
	class G_SSU_Balaclava_TI_G_base;
	class G_Combat;
	class G_XDF_Balaclava_TI_Black: G_SSU_Balaclava_TI_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Stealth Balaclava";
		picture="\SSU_Black_Facegear\UI\Icon_SSU_Balaclava_TI_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Balaclava_TI_Black.paa"
		};
	};
	class G_XDF_Balaclava_TI_G_Black: G_SSU_Balaclava_TI_G_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Stealth Balaclava (Goggles)";
		picture="\SSU_Black_Facegear\UI\Icon_SSU_Balaclava_TI_G_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Balaclava_TI_Black.paa",
			"\xdf\retextures\xdf_uniform\facegear\xdf_combat_goggles_black.paa"
		};
	};
	class G_XDF_Goggles: G_Combat
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF SIC Goggles";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_combat_goggles_black.paa"
		};
	};
};