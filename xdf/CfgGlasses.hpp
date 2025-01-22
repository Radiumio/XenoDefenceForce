class CfgGlasses
{
	class G_SSU_Balaclava_TI_base;
	class G_SSU_Balaclava_TI_G_base;
	class G_Combat;
	class G_Bandanna_blk;
	class G_Bandanna_sport;
	class G_AirPurifyingRespirator_01_F;
	class G_AirPurifyingRespirator_02_black_F;
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
	class G_XDF_Balaclava_TI_Nanowrap_Black: G_SSU_Balaclava_TI_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Nanowrap Balaclava";
		picture="\SSU_Black_Facegear\UI\Icon_SSU_Balaclava_TI_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Balaclava_TI_Nanowrap_Black.paa"
		};
	};
	class G_XDF_Balaclava_TI_Nanowrap_G_Black: G_SSU_Balaclava_TI_G_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Nanowrap Balaclava (Goggles)";
		picture="\SSU_Black_Facegear\UI\Icon_SSU_Balaclava_TI_G_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Balaclava_TI_Nanowrap_Black.paa",
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
		model="\A3\characters_f_beta\heads\glasses\g_combat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_combat_goggles_black.paa"
		};
	};
	class G_XDF_Bandana_Alien: G_Bandanna_blk
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Alien)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Alien.paa"
		};
	};
	class G_XDF_Bandana_Alien_Sports: G_Bandanna_sport
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Alien, Sports)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Alien.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
	};
	class G_XDF_Bandana_Wolf: G_Bandanna_blk
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Wolf)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Wolf.paa"
		};
	};
	class G_XDF_Bandana_Wolf_Sports: G_Bandanna_sport
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Wolf, Sports)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Wolf.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
	};
	class G_XDF_Bandana_Beast: G_Bandanna_blk
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Beast)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Beast.paa"
		};
	};
	class G_XDF_Bandana_Beast_Sports: G_Bandanna_sport
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF Bandana (Beast, Sports)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\G_XDF_Bandana_Beast.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
	};
	class G_XDF_APR_A: G_AirPurifyingRespirator_01_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF APR Alpha";
		picture="\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_01_F_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_apr_a.paa"
		};
	};
	class G_XDF_APR_A_NoFilter: G_AirPurifyingRespirator_01_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF APR Alpha (No Filter)";
		picture="\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_01_F_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"filter"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_apr_a.paa"
		};
	};
	class G_XDF_APR_B: G_AirPurifyingRespirator_02_black_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF APR Bravo";
		picture="\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_black_F_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_apr_b.paa"
		};
	};
	class G_XDF_APR_B_NoFilter: G_AirPurifyingRespirator_02_black_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="XDF APR Bravo (No Filter)";
		picture="\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_black_F_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"filter"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\facegear\xdf_apr_b.paa"
		};
	};
};