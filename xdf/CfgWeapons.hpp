class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class U_B_CTRG_Soldier_F;
	class U_B_CTRG_Soldier_3_F;
	class U_B_CTRG_1;
	class U_I_E_Uniform_01_coveralls_F;
	class U_B_GhillieSuit;
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
	class U_B_CTRG_Soldier_2_F;
	class U_SSU_Stealth_Uniform_Ghillie_Black: U_B_GhillieSuit
	{
		class ItemInfo;
	};
	class TCGM_CombatUniform_CTRG_Stealth_arid;
	class TCGM_CombatUniform_CTRG_RollUp;
	class TCGM_CombatUniform_CTRG_Bra;
	class U_XDF_Uniform_Black: U_SSU_Stealth_Uniform_base
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Standard Uniform";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
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
		scopeArsenal=2;
		displayName="XDF Standard Uniform (Rolled)";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Rolled_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
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
		scopeArsenal=2;
		displayName="XDF Standard Uniform (Sleeved)";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Stealth_Uniform_Sleeved_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
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
		scopeArsenal=2;
		displayName="XDF Crew Coveralls";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Coveralls_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Coveralls_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\xdf_boots_black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Coveralls_Black_gloves.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Coveralls_Black";
		};
	};
	class U_XDF_Uniform_Ghillie_Black: U_SSU_Stealth_Uniform_Ghillie_Black
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Standard Uniform (Ghillie)";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Coveralls_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\xdf_ghillie_black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Uniform_Ghillie_Black";
		};
	};
	class U_XDF_Uniform_Tee_Black: U_B_CTRG_Soldier_2_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Standard Uniform (Tee)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Uniform_Tee_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Female_Uniform_Black: TCGM_CombatUniform_CTRG_Stealth_arid
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black";
			containerClass="Supply40";
			mass=32;
		};
	};
	class U_XDF_Female_Uniform_Black_Rolled: TCGM_CombatUniform_CTRG_RollUp
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform (Rolled)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black_Rolled";
			containerClass="Supply40";
			mass=32;
		};
	};
	class U_XDF_Female_Uniform_Black_Bra: TCGM_CombatUniform_CTRG_Bra
	{
		author="TCGM & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Standard Uniform (Bra)";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F\common\data\basicbody_green_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_XDF_Female_Uniform_Black_Bra";
			containerClass="Supply40";
			mass=32;
		};
	};

	class V_SSU_Tactical_Vest_base;
	class V_SSU_Carrier_Lite_base;
	class V_SSU_Carrier_Rig_base;
	class V_SSU_Modular_Carrier_Lite_base;
	class V_SSU_Modular_Carrier_GL_Rig_base;
	class V_SSU_Carrier_GL_Rig_base;
	class V_SSU_Carrier_Special_Rig_base;
	class V_XDF_Tactical_Vest_Black: V_SSU_Tactical_Vest_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Tactical Vest";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Tactical_Vest_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Tactical_Vest_Black.paa"
		};
	};
	class V_XDF_Carrier_Lite_Black: V_SSU_Carrier_Lite_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Lite";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Tactical_Vest_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Carrier_Rig_Black: V_SSU_Carrier_Rig_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Modular_Carrier_Lite_Black: V_SSU_Modular_Carrier_Lite_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier Lite";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_Lite_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Modular_Carrier_GL_Rig_Black: V_SSU_Modular_Carrier_GL_Rig_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier GL Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black.paa"
		};
	};
	class V_XDF_Carrier_GL_Rig_Black: V_SSU_Carrier_GL_Rig_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier GL Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_GL_Rig_Black.paa"
		};
	};
	class V_XDF_Carrier_Special_Rig_Black: V_SSU_Carrier_Special_Rig_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Special Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Special_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_GL_Rig_Black.paa"
		};
	};

	class H_SSU_Stealth_Combat_Helmet_base;
	class H_SSU_Combat_Helmet_base;
	class H_SSU_Enhanced_Combat_Helmet_base;
	class H_SSU_Camo_Combat_Helmet_base;
	class H_SSU_Light_Combat_Helmet_base;
	class H_SSU_Advanced_Modular_Helmet_HS_base;
	class H_SSU_Advanced_Modular_Helmet_Ear_base;
	class H_SSU_Advanced_Modular_Helmet_Chops_base;
	class H_SSU_Special_Purpose_Helmet_base;
	class H_SSU_Boonie_HS_base;
	class H_SSU_Cap_HS_base;
	class H_XDF_Stealth_Combat_Helmet_Black: H_SSU_Stealth_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (Mandible)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Stealth_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Stealth_Combat_Helmet_Black_b: H_SSU_Stealth_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (Mandible - Beast)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Stealth_Combat_Helmet_Black_b.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_Black_b.paa"
		};
	};
	class H_XDF_Combat_Helmet_Black: H_SSU_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Enhanced_Combat_Helmet_Black: H_SSU_Enhanced_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet (Enhanced)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Enhanced_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Camo_Combat_Helmet_Black: H_SSU_Camo_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet (Camo)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Camo_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa",
			"\SSU_@Core\Data\Helmets\helmet_ghille_black.paa"
		};
	};
	class H_XDF_Light_Combat_Helmet_Black: H_SSU_Light_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Light Infantry Helmet";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Light_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_HS_Black: H_SSU_Advanced_Modular_Helmet_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_Ear_Black: H_SSU_Advanced_Modular_Helmet_Ear_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet (Ear Protectors)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_Ear_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_Chops_Black: H_SSU_Advanced_Modular_Helmet_Chops_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet (Chops)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_Chops_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black.paa"
		};
	};
	class H_XDF_Special_Purpose_Helmet_Black: H_SSU_Special_Purpose_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF SPH 'Xenohunter'";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Special_Purpose_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Special_Purpose_Helmet_Black.paa"
		};
	};
	class H_XDF_Boonie_HS_Black: H_SSU_Boonie_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Booniehat";
		picture="\SSU_Black_Hats\UI\Icon_SSU_Boonie_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Boonie_HS_Black.paa"
		};
	};
	class H_XDF_Cap_HS_Black: H_SSU_Cap_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Cap";
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Cap_HS_Black.paa"
		};
	};

	class arifle_MSBS65_black_F;
	class arifle_MSBS65_UBS_black_F;
	class arifle_MSBS65_GL_black_F;
	class MMG_02_black_F;
	class srifle_DMR_03_F;
	class srifle_GM6_F;
	class SMG_01_F;
	class arifle_ARX_blk_F;
	class srifle_DMR_05_blk_F;
	class MMG_01_tan_F;
	class srifle_LRR_F;
	class srifle_DMR_02_F;
	class srifle_DMR_04_F;
	class launch_MRAWS_green_F;
	class XDF_launch_MRAWS_green_F: launch_MRAWS_green_F // MAAWS with IR Laser
	{
		class linkedItems
		{
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_XDF_black_F: arifle_MSBS65_black_F // Promet Standard
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_GL_XDF_black_F: arifle_MSBS65_GL_black_F // Promet GL
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_AXGL_XDF_black_F: arifle_MSBS65_GL_black_F // Promet AX GL (Suppressed)
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_65_TI_blk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_AX_XDF_black_F: arifle_MSBS65_black_F // Promet AX (Suppressed)
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_65_TI_blk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_CRW_XDF_black_F: arifle_MSBS65_black_F // Promet Crew
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_MSBS65_UBS_XDF_black_F: arifle_MSBS65_UBS_black_F // Promet Elite AX Shotgun
		{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_65_TI_blk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class XDF_SMG_01_F: SMG_01_F // Vector
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_MMG_02_black_F: MMG_02_black_F // SPMG
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder {
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class XDF_srifle_DMR_03_F: srifle_DMR_03_F // SIG 556
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder {
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class XDF_srifle_GM6_F: srifle_GM6_F // GM6 Lynx
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_arifle_ARX_blk_F: arifle_ARX_blk_F // Type 115
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_65_TI_blk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class XDF_srifle_DMR_05_blk_F: srifle_DMR_05_blk_F // Cyrus
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_93mmg";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder {
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class XDF_MMG_01_tan_F: MMG_01_tan_F // Navid
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_93mmg";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder {
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class XDF_srifle_DMR_04_F: srifle_DMR_04_F // ASP-1 Kir
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class XDF_srifle_LRR_F: srifle_LRR_F // Intervention
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_srifle_DMR_02_F: srifle_DMR_02_F // MAR-10
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_338_black";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder {
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
};