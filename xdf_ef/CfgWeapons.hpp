class ItemInfo;
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
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Rifleman_Black;
	class V_XDF_AAV_Rifleman: EF_V_AAV_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Scout: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Scout)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Medic: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Medic)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_med_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Support_Black;
	class V_XDF_AAV_Support: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_TL_Black;
	class V_XDF_AAV_TL: EF_V_AAV_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};

	//////////////////// VEHICLES ////////////////////
	class EF_autocannon_30mm_Hunter;
	class EF_autocannon_30mm_Hunter_AX: EF_autocannon_30mm_Hunter
	{
		displayName = "AX Autocannon 30mm";
		magazines[] += 
		{
			"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue", "EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue"
		};
	};
	class EF_missiles_SAAMI_manual;
	class EF_missiles_SAAMI_AX_manual: EF_missiles_SAAMI_manual
	{
		magazines[] += 
		{
			"4Rnd_70mm_SAAMI_AX_missiles"
		};
		autoReload = 0;
	};
};