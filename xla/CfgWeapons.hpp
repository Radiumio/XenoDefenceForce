class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class U_O_R_Gorka_01_black_F;
	class U_XLA_Uniform_Red: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="XLA Uniform";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xla\retextures\xla_uniform\uniforms\gorka_01_red_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_XLA_Uniform_Red";
			containerClass="Supply40";
			mass=40;
		};
	};
	class V_XDF_Carrier_Lite_Black;
	class V_XLA_Defector_Carrier_Lite_Red: V_XDF_Carrier_Lite_Black
	{
		scope=2;
		displayName="XLA Defector Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\xla\retextures\xla_uniform\vests\V_XLA_Defector_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Carrier_Rig_Black;
	class V_XLA_Defector_Carrier_Rig_Red: V_XDF_Carrier_Rig_Black
	{
		scope=2;
		displayName="XLA Defector Rig";
		hiddenSelectionsTextures[]=
		{
			"\xla\retextures\xla_uniform\vests\V_XLA_Defector_Carrier_Rig_Black.paa"
		};
	};
};