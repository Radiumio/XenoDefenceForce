class CfgGlasses
{
	class G_SSU_Balaclava_TI_base;
	class G_PXLA_Balaclava_TI_Black: G_SSU_Balaclava_TI_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="PXLA Balaclava";
		picture="\SSU_Black_Facegear\UI\Icon_SSU_Balaclava_TI_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\facegear\G_PXLA_Balaclava_TI_Red.paa"
		};
	};
	class G_SSU_Balaclava_TI_G_base;
	class G_PXLA_Balaclava_TI_G_Black: G_SSU_Balaclava_TI_G_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="PXLA Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\facegear\G_PXLA_Balaclava_TI_Red.paa",
			"\pxla\retextures\pxla_uniform\facegear\pxla_combat_goggles_red.paa"
		};
	};
	class G_Combat;
	class G_PXLA_Goggles: G_Combat
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="PXLA Goggles";
		picture="\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		model="\A3\characters_f_beta\heads\glasses\g_combat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\facegear\pxla_combat_goggles_red.paa"
		};
	};
};