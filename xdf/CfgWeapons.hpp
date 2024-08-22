class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class U_B_CTRG_Soldier_F;
	class U_B_CTRG_Soldier_3_F;
	class U_B_CTRG_1;
	class U_I_E_Uniform_01_coveralls_F;
	class U_SSU_Stealth_Uniform_base: U_B_CTRG_Soldier_F
	{
		class ItemInfo;
	};
	class U_SSU_Stealth_Uniform_Rolled_base: U_B_CTRG_Soldier_3_F
	{
		class ItemInfo;
	};
	class U_SSU_Stealth_Uniform_Sleeved_base: U_B_CTRG_1
	{
		class ItemInfo;
	};
	class U_SSU_Coveralls_base: U_I_E_Uniform_01_coveralls_F
	{
		class ItemInfo;
	};
	class U_XDF_Uniform_Black: U_SSU_Stealth_Uniform_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Standard Uniform";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Uniform_Black";
		};
	};
	class U_XDF_Uniform_Rolled_Black: U_SSU_Stealth_Uniform_Rolled_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Standard Uniform (Rolled)";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Rolled_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Uniform_Rolled_Black";
		};
	};
	class U_XDF_Uniform_Sleeved_Black: U_SSU_Stealth_Uniform_Sleeved_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Standard Uniform (Sleeved)";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Sleeved_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Uniform_Sleeved_Black";
		};
	};
	class U_XDF_Coveralls_Black: U_SSU_Coveralls_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Crew Coveralls";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Coveralls_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Coveralls_Black.paa",
			"\xdf\retextures\xdf_uniform\xdf_boots_black.paa",
			"\xdf\retextures\xdf_uniform\U_XDF_Coveralls_Black_gloves.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Coveralls_Black";
		};
	};
	class TCGM_CombatUniform_CTRG_Stealth_arid;
	class U_XDF_Female_Uniform_Black: TCGM_CombatUniform_CTRG_Stealth_arid
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black";
			containerClass="Supply40";
			mass=32;
		};
	};
	class TCGM_CombatUniform_CTRG_RollUp;
	class U_XDF_Female_Uniform_Black_Rolled: TCGM_CombatUniform_CTRG_RollUp
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform (Rolled)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black_Rolled";
			containerClass="Supply40";
			mass=32;
		};
	};
	class TCGM_CombatUniform_CTRG_Bra;
	class U_XDF_Female_Uniform_Black_Bra: TCGM_CombatUniform_CTRG_Bra
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform (Bra)";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F\common\data\basicbody_green_co.paa",
			"\xdf\retextures\xdf_uniform\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black_Bra";
			containerClass="Supply40";
			mass=32;
		};
	};
};