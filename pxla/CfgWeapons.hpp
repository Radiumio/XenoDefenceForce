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
		displayName="PXLA Uniform (Full)";
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
	class U_PXLA_Uniform_Red_Partial: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Uniform (Partial 1)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_part_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_PXLA_Uniform_Red_Partial";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_PXLA_Uniform_Red_Partialv2: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Uniform (Partial 2)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_partv2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_PXLA_Uniform_Red_Partialv2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_PXLA_Uniform_Red_Incomplete: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Uniform (Incomplete 1)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_incomp_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_PXLA_Uniform_Red_Incomplete";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_PXLA_Uniform_Red_Incompletev2: U_O_R_Gorka_01_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Uniform (Incomplete 2)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\uniforms\gorka_01_red_incompv2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_PXLA_Uniform_Red_Incompletev2";
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
	class H_PASGT_basic_black_F;
	class H_PASGT_pxla_red_F: H_PASGT_basic_black_F
	{
		author="Radium";
		scope=2;
		displayName="PXLA Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\helmets\h_pasgt_black_co.paa"
		};
	};
	class V_Chestrig_blk;
	class V_Chestrig_pxla: V_Chestrig_blk
	{
		author="Radium";
		scope=2;
		displayName="PXLA Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\vests\equip_chestrig_pxla_co.paa",
			"\pxla\retextures\pxla_uniform\vests\vests_pxla_co.paa"
		};
	};
	class V_TacVest_blk;
	class V_TacVest_pxla: V_TacVest_blk
	{
		author="Radium";
		displayName="PXLA Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\vests\tacticalvest_pxla_co.paa"
		};
	};
	class H_Booniehat_khk;
	class H_Booniehat_pxla: H_Booniehat_khk
	{
		author="Radium";
		displayName="PXLA Boonie Hat";
		hiddenSelectionsTextures[]=
		{
			"\pxla\retextures\pxla_uniform\helmets\booniehat_pxla_co.paa"
		};
	};

	// Loadout Weapons //
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_01_blk_F_PXLA: arifle_SPAR_01_blk_F
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_M";
				slot = "MuzzleSlot";
			};
		};
	};
};