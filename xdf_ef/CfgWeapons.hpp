class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class EF_U_B_MarineCombatUniform_Des_5;
	class U_XDF_Marine_Uniform: EF_U_B_MarineCombatUniform_Des_5
	{
		author="Radium";
		DLC="ef";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Marine Combat Uniform";
		//picture="\SSU_Black_Uniforms\UI\Icon_SSU_Special_Purpose_Suit_Black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Pads: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Pads)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Pads";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Rolled: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Rolled)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Rolled_Pads: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Rolled/Pads)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Rolled_Pads";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Rolled: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Rolled)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class EF_V_AAV_Black;
	class V_XDF_AAV: EF_V_AAV_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
	};
	class EF_V_AAV_Rifleman_Black;
	class V_XDF_AAV_Rifleman: EF_V_AAV_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Rifleman)";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Scout: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Scout)";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Medic: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Medic)";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_med_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Support_Black;
	class V_XDF_AAV_Support: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support)";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
	};
	class EF_V_AAV_TL_Black;
	class V_XDF_AAV_TL: EF_V_AAV_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Team Leader)";
		//picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
};