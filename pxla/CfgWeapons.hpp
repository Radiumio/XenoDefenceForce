class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class U_O_R_Gorka_01_black_F;
	class U_PXLA_Uniform_Red: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Uniform";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_PXLA_Uniform_Red";
			containerClass="Supply40";
			mass=40;
		};
	};
	class V_XDF_Carrier_Lite_Black;
	class V_PXLA_Defector_Carrier_Lite_Red: V_XDF_Carrier_Lite_Black
	{
		scope=2;
		displayName="PXLA Defector Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\vests\V_PXLA_Defector_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Carrier_Rig_Black;
	class V_XLA_Defector_Carrier_Rig_Red: V_XDF_Carrier_Rig_Black
	{
		scope=2;
		displayName="PXLA Defector Rig";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\vests\V_PXLA_Defector_Carrier_Rig_Black.paa"
		};
	};
};