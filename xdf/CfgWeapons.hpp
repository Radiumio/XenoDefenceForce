
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class GL_3GL_F;
class EGLM;
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
	class U_B_PilotCoveralls;
	class U_SSU_Stealth_Uniform_Ghillie_Black: U_B_GhillieSuit
	{
		class ItemInfo;
	};
	class TCGM_CombatUniform_CTRG_Stealth_arid;
	class TCGM_CombatUniform_CTRG_RollUp;
	class TCGM_CombatUniform_CTRG_Bra;
	class U_B_CBRN_Suit_01_MTP_F;
	class U_O_V_Soldier_Viper_hex_F;
	class EF_U_B_MarineCombatUniform_Des_5;
	class TCGM_F_Viper_GHex;
	class U_B_Wetsuit;
	class TCGM_F_Wetsuit_B;
	class TCGM_F_WetsuitShort_B;
	class U_B_survival_uniform;
	class TCGM_Survival_MTP_Bra;
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
	class U_XDF_Jet_Pilot_Suit: U_B_PilotCoveralls
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Experimental Jet Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\XDF_Jet_Pilot_Suit_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Jet_Pilot_Suit";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_CBRN_Suit: U_B_CBRN_Suit_01_MTP_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF CBRN Suit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_CBRN_Suit_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_CBRN_Suit";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_SP_Suit: U_O_V_Soldier_Viper_hex_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Special Purpose Suit";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Special_Purpose_Suit_Black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_SP_Suit.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_SP_Suit";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Wetsuit: U_B_Wetsuit
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Wetsuit";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Wetsuit";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=40;
		};
	};
	class U_XDF_Female_Wetsuit: TCGM_F_Wetsuit_B
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Wetsuit";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_Wetsuit";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=40;
		};
	};
	class U_XDF_Female_Wetsuit_Short: TCGM_F_WetsuitShort_B
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Wetsuit (Short)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_Wetsuit_Short";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=40;
		};
	};
	class U_XDF_Survival_Suit: U_B_survival_uniform
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Survival Suit";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Wetsuit_co.paa",
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Survival_Suit";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=40;
		};
	};
	class U_XDF_Female_Survival_Suit: TCGM_Survival_MTP_Bra
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Survival Suit";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F\Common\Data\basicbody_black_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_Survival_Suit";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=40;
		};
	};
	class U_XDF_Female_SP_Suit: TCGM_F_Viper_GHex
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Special Purpose Suit";
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Special_Purpose_Suit_Black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_SP_Suit.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_SP_Suit";
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
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Special_Purpose_Suit_Black.paa";
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
	class V_SSU_Tactical_Vest_Black: V_SSU_Tactical_Vest_base
	{
		class ItemInfo;
	};
	class V_SSU_Carrier_Lite_base;
	class V_SSU_Carrier_Lite_Black: V_SSU_Carrier_Lite_base
	{
		class ItemInfo;
	};
	class V_SSU_Carrier_Rig_base;
	class V_SSU_Carrier_Rig_Black: V_SSU_Carrier_Rig_base
	{
		class ItemInfo;
	};
	class V_SSU_Modular_Carrier_Lite_base;
	class V_SSU_Modular_Carrier_Lite_Black: V_SSU_Modular_Carrier_Lite_base
	{
		class ItemInfo;
	};
	class V_SSU_Modular_Carrier_GL_Rig_base;
	class V_SSU_Modular_Carrier_GL_Rig_Black: V_SSU_Modular_Carrier_GL_Rig_base
	{
		class ItemInfo;
	};
	class V_SSU_Carrier_GL_Rig_base;
	class V_SSU_Carrier_GL_Rig_Black: V_SSU_Carrier_GL_Rig_base
	{
		class ItemInfo;
	};
	class V_SSU_Carrier_Special_Rig_base;
	class V_SSU_Carrier_Special_Rig_Black: V_SSU_Carrier_Special_Rig_base
	{
		class ItemInfo;
	};
	class V_SmershVest_01_base_F;
	class V_SmershVest_01_F: V_SmershVest_01_base_F
	{
		class ItemInfo;
	};
	class V_SmershVest_01_radio_base_F;
	class V_SmershVest_01_radio_F: V_SmershVest_01_radio_base_F
	{
		class ItemInfo;
	};
	class Vest_Camo_Base;
	class V_RebreatherB: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class V_XDF_Tactical_Vest_Black: V_SSU_Tactical_Vest_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Tactical Vest";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Tactical_Vest_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Tactical_Vest_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
		};
	};
	class V_XDF_Carrier_Lite_Black: V_SSU_Carrier_Lite_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Lite";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Tactical_Vest_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_Carrier_Rig_Black: V_SSU_Carrier_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_Modular_Carrier_Lite_Black: V_SSU_Modular_Carrier_Lite_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier Lite";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_Lite_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_Modular_Carrier_GL_Rig_Black: V_SSU_Modular_Carrier_GL_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier GL Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_Carrier_GL_Rig_Black: V_SSU_Carrier_GL_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier GL Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_GL_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_Carrier_Special_Rig_Black: V_SSU_Carrier_Special_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Special Rig";
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Special_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_GL_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
		};
	};
	class V_XDF_SmershVest_01_F: V_SmershVest_01_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Light Recon Vest";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_SmershVest_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_SmershVest_misc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
		};
	};
	class V_XDF_SmershVest_01_radio_F: V_SmershVest_01_radio_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Light Recon Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_SmershVest_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_SmershVest_misc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply250";
		};
	};
	class V_XDF_Rebreather: V_RebreatherB
	{
		author="Radium";
		scope=2;
		displayName="XDF Combat Rebreather";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa",
            "\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			class HitpointsProtectionInfo
			{
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=17;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=12;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.6;
				};
			};
		};
	};
	class V_XDF_Rebreather_Mask: V_RebreatherB
	{
		author="Radium";
		scope=2;
		displayName="XDF Combat Rebreather (Mask)";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa",
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Rebreather_co.paa",
            "\A3\characters_f\data\visors_ca.paa"
		};
		hiddenUnderwaterSelections[]={};
		shownUnderwaterSelections[]={};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			hiddenUnderwaterSelections[]={};
			shownUnderwaterSelections[]={};
			class HitpointsProtectionInfo
			{
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=17;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=12;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.6;
				};
			};
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
	class H_MilCap_blue;
	class H_Beret_02;
	class H_PilotHelmetFighter_B;
	class H_PilotHelmetHeli_B;
	class H_CrewHelmetHeli_B;
	class H_HelmetCrew_B;
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
	class H_XDF_Stealth_Combat_Helmet_NM_Black: H_SSU_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (No Mandible)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_NM_Black.paa"
		};
	};
	class H_XDF_Stealth_Combat_Helmet_NM_Black_b: H_SSU_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (No Mandible, Red)";
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_NM_Black_b.paa"
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
	class H_XDF_Mil_Cap: H_MilCap_blue
	{
		author="Radium";
		scope=2;
		displayName="XDF Military Cap";
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Mil_Cap.paa"
		};
	};
	class H_XDF_Mil_Cap_Wolf: H_MilCap_blue
	{
		author="Radium";
		scope=2;
		displayName="XDF Military Cap (Wolf)";
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Mil_Cap_Wolf.paa"
		};
	};
	class H_XDF_Beret: H_Beret_02
	{
		author="Radium";
		scope=2;
		displayName="XDF Beret";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Beret.paa"
		};
	};
	class H_XDF_Beret_Wolf: H_Beret_02
	{
		author="Radium";
		scope=2;
		displayName="XDF Beret (Wolf)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Beret_Wolf.paa"
		};
	};
	class H_XDF_Jet_Pilot_Helmet: H_PilotHelmetFighter_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Experimental Jet Helmet";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Jet_Pilot_Helmet_co.paa"
		};
	};
	class H_XDF_Helmet_Heli_Black: H_PilotHelmetHeli_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Helicopter Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Helmet_Heli_Black_co.paa"
		};
	};
	class H_XDF_Helmet_Heli_Crew_Black: H_CrewHelmetHeli_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Helicopter Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Helmet_Heli_Black_co.paa"
		};
	};
	class H_XDF_Helmet_Crew_Black: H_HelmetCrew_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Helmet_Crew_Black.paa"
		};
	};

	// Retextured Weapons
	// Rifles
	class arifle_MSBS65_base_black_F;
	class arifle_MSBS65_GL_base_black_F;
	class arifle_MSBS65_UBS_base_black_F;
	class arifle_MSBS65_Mark_base_black_F;
	class arifle_ARX_blk_F;
	class arifle_MX_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MXC_Black_F;
	class arifle_MXM_Black_F;
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_01_GL_blk_F;
	class arifle_SPAR_02_blk_F;
	class arifle_CTAR_blk_F;
	class arifle_CTAR_GL_blk_F;
	class arifle_CTARS_blk_F;
	class arifle_AK12_F;
	class arifle_AK12_GL_F;
	class arifle_AK12U_F;
	class arifle_RPK12_F;
	class Secondary;
	class UGL;
	class arifle_MSBS65_XDF_black: arifle_MSBS65_base_black_F
	{
		author="Radium";
		_generalMacro="arifle_MSBS65_black_F";
		scope=2;
		picture="a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_black_F_ca.paa";
		displayName="XDF Spearhead";
		baseWeapon="arifle_MSBS65_XDF_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_01_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_02_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_03_black_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\spearhead_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_MSBS_XDF"
		};
	};
	class arifle_MSBS65_GL_XDF_black: arifle_MSBS65_GL_base_black_F
	{
		author="Radium";
		_generalMacro="arifle_MSBS65_GL_black_F";
		scope=2;
		picture="a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_black_F_ca.paa";
		displayName="XDF Spearhead GL";
		baseWeapon="arifle_MSBS65_GL_XDF_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_01_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_02_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_03_black_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\spearhead_reload.ogg",
			4,
			1,
			10
		};
		class UGL: UGL
		{
			displayName="Spearhead UGP-40";
			drySound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_click.ogg",
				0.56234133,
				1,
				10
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_reload.ogg",
				3.5481339,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"MX_65x39_MSBS_XDF"
		};
	};
	class arifle_MSBS65_UBS_XDF_black: arifle_MSBS65_UBS_base_black_F
	{
		author="Radium";
		_generalMacro="arifle_MSBS65_UBS_black_F";
		scope=2;
		picture="a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_black_F_ca.paa";
		displayName="XDF Spearhead UBS";
		baseWeapon="arifle_MSBS65_UBS_XDF_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_01_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_02_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_03_black_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\spearhead_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_MSBS_XDF"
		};
	};
	class arifle_MSBS65_Mark_XDF_black: arifle_MSBS65_Mark_base_black_F
	{
		author="Radium";
		_generalMacro="arifle_MSBS65_Mark_black_F";
		scope=2;
		picture="a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_black_F_ca.paa";
		displayName="XDF Spearhead MR";
		baseWeapon="arifle_MSBS65_Mark_XDF_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_01_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_02_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\msbs\msbs_03_black_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\spearhead_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_MSBS_XDF"
		};
	};
	class XDF_arifle_ARX_blk: arifle_ARX_blk_F
	{
		author="Radium";
		scope=2;
		displayName="XDF EXH-WS 'Type 115'";
		baseWeapon="XDF_arifle_ARX_blk";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\type115\arifle_arx_blk_01_f_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\type115\arifle_arx_blk_02_f_co.paa"
		};
		magazineWell[] +=
		{
			"Katiba_65x39_XDF"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\type115_reload.ogg",
			2,
			1,
			10
		};
		class Secondary: Secondary
		{
			magazines[]+=
			{
				"10Rnd_50BW_Mag_blue"
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\type115_bw_reload.ogg",
				2,
				1,
				10
			};
		};
	};
	class arifle_MX_XDF: arifle_MX_Black_F
	{
		author="Radium";
		_generalMacro="arifle_MX_Black_F";
		scope=2;
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
		displayName="XDF ACR-X2";
		baseWeapon="arifle_MX_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_short_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class arifle_MXC_XDF: arifle_MXC_Black_F
	{
		author="Radium";
		_generalMacro="arifle_MXC_Black_F";
		scope=2;
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_cqc_black_X_CA.paa";
		displayName="XDF ACR-X2 Carbine";
		baseWeapon="arifle_MXC_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_short_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class arifle_MXGL_XDF: arifle_MX_GL_Black_F
	{
		author="Radium";
		_generalMacro="arifle_MX_GL_Black_F";
		scope=2;
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_gl_black_X_CA.paa";
		displayName="XDF ACR-X2 3GL";
		baseWeapon="arifle_MXGL_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\glx_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		class GL_3GL_F: GL_3GL_F
		{
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\mx_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class arifle_MXSW_XDF: arifle_MX_SW_Black_F
	{
		author="Radium";
		_generalMacro="arifle_MX_SW_Black_F";
		scope=2;
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_lmg_black_X_CA.paa";
		displayName="XDF ACR-X2 Support";
		baseWeapon="arifle_MXSW_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_lmg_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class arifle_MXM_XDF: arifle_MXM_Black_F
	{
		author="Radium";
		_generalMacro="arifle_MXM_Black_F";
		scope=2;
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
		displayName="XDF ACR-X2 Marksman";
		baseWeapon="arifle_MXM_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_long_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class arifle_SPAR_01_XDF_F: arifle_SPAR_01_blk_F
	{
		author="Radium";
		_generalMacro="arifle_SPAR_01_blk_F";
		scope=2;
		displayName="XDF HK416";
		baseWeapon="arifle_SPAR_01_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_02_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\hk416_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF",
			"STANAG_556x45_Large_XDF"
		};
	};
	class arifle_SPAR_02_XDF_F: arifle_SPAR_02_blk_F
	{
		author="Radium";
		_generalMacro="arifle_SPAR_02_blk_F";
		scope=2;
		displayName="XDF HK416 Support";
		baseWeapon="arifle_SPAR_02_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_02_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\hk416_support_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF",
			"STANAG_556x45_Large_XDF"
		};
	};
	class arifle_SPAR_01_GL_XDF_F: arifle_SPAR_01_GL_blk_F
	{
		author="Radium";
		_generalMacro="arifle_SPAR_01_GL_blk_F";
		scope=2;
		displayName="XDF HK416 EGLM";
		baseWeapon="arifle_SPAR_01_GL_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_02_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_gl_blk_f_01_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\hk416_reload.ogg",
			2,
			1,
			10
		};
		class EGLM: EGLM
		{
			drySound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_click.ogg",
				0.56234133,
				1,
				10
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\hk416_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF",
			"STANAG_556x45_Large_XDF"
		};
	};
	class arifle_CTAR_XDF_F: arifle_CTAR_blk_F
	{
		author="Radium";
		_generalMacro="arifle_CTAR_blk_F";
		scope=2;
		displayName="XDF Komodo";
		baseWeapon="arifle_CTAR_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctar_f_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctar_f_2_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\komodo_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"CTAR_580x42_XDF",
			"CTAR_580x42_Large_XDF"
		};
	};
	class arifle_CTAR_GL_XDF_F: arifle_CTAR_GL_blk_F
	{
		author="Radium";
		_generalMacro="arifle_CTAR_GL_blk_F";
		scope=2;
		displayName="XDF Komodo GL";
		baseWeapon="arifle_CTAR_GL_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctar_f_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctar_f_2_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctars_gl_f_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\komodo_reload.ogg",
			2,
			1,
			10
		};
		class EGLM: EGLM
		{
			drySound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_click.ogg",
				0.56234133,
				1,
				10
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\mx_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"CTAR_580x42_XDF",
			"CTAR_580x42_Large_XDF"
		};
	};
	class arifle_CTARS_XDF_F: arifle_CTARS_blk_F
	{
		author="Radium";
		_generalMacro="arifle_CTARS_blk_F";
		scope=2;
		displayName="XDF Komodo LSW";
		baseWeapon="arifle_CTARS_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctar_f_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\qbuz\ctars_f_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\komodo_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"CTAR_580x42_XDF",
			"CTAR_580x42_Large_XDF"
		};
	};
	class arifle_AK12_XDF_F: arifle_AK12_F
	{
		author="Radium";
		_generalMacro="arifle_AK12_F";
		scope=2;
		displayName="XDF AK-12";
		baseWeapon="arifle_AK12_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_2_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\ak12_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"AK_762x39_XDF"
		};
	};
	class arifle_AK12_GL_XDF_F: arifle_AK12_GL_F
	{
		author="Radium";
		_generalMacro="arifle_AK12_GL_F";
		scope=2;
		displayName="XDF AK-12 GL";
		baseWeapon="arifle_AK12_GL_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_2_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_gl_co"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\ak12_reload.ogg",
			2,
			1,
			10
		};
		class EGLM: EGLM
		{
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\mx_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"AK_762x39_XDF"
		};
	};
	class arifle_AK12U_XDF_F: arifle_AK12U_F
	{
		author="Radium";
		_generalMacro="arifle_AK12U_F";
		scope=2;
		displayName="XDF AK-12U";
		baseWeapon="arifle_AK12U_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_2_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\aku12_rpk12_parts_co"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\ak12_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"AK_762x39_XDF"
		};
	};
	class arifle_RPK12_XDF_F: arifle_RPK12_F
	{
		author="Radium";
		_generalMacro="arifle_RPK12_F";
		scope=2;
		displayName="XDF RPK-12";
		baseWeapon="arifle_RPK12_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\ak12_ak12_2_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ak12\aku12_rpk12_parts_co"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\ak12_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"AK_762x39_XDF"
		};
	};
	class arifle_Katiba_F;
	class arifle_Katiba_XDF: arifle_Katiba_F
	{
		author="Radium";
		_generalMacro="arifle_Katiba_F";
		scope=2;
		displayName="XDF Khaybar";
		baseWeapon="arifle_Katiba_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_02_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\khaybar_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"Katiba_65x39_XDF"
		};
	};
	class arifle_Katiba_GL_F;
	class arifle_Katiba_GL_XDF: arifle_Katiba_GL_F
	{
		author="Radium";
		_generalMacro="arifle_Katiba_GL_F";
		scope=2;
		displayName="XDF Khaybar KGL";
		baseWeapon="arifle_Katiba_GL_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_02_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\khaybar_reload.ogg",
			2,
			1,
			10
		};
		class EGLM: EGLM
		{
			drySound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_click.ogg",
				0.56234133,
				1,
				10
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\khaybar_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"Katiba_65x39_XDF"
		};
	};
	class arifle_Katiba_C_F;
	class arifle_Katiba_C_XDF: arifle_Katiba_C_F
	{
		author="Radium";
		_generalMacro="arifle_Katiba_C_F";
		scope=2;
		displayName="XDF Khaybar Carbine";
		baseWeapon="arifle_Katiba_C_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\khaybar\khaybar_02_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\khaybar_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"Katiba_65x39_XDF"
		};
	};
	class arifle_TRG20_F;
	class arifle_TRG20_XDF: arifle_TRG20_F
	{
		author="Radium";
		scope=2;
		displayName="XDF CTAR-21";
		baseWeapon="arifle_TRG20_XDF";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\trg\tar21_base_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\trg_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};
	class arifle_TRG21_GL_F;
	class arifle_TRG21_GL_XDF: arifle_TRG21_GL_F
	{
		author="Radium";
		scope=2;
		displayName="XDF GTAR-21 EGLM";
		baseWeapon="arifle_TRG21_GL_XDF";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\trg\tar21_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\trg\tar21_eglm_co.paa",
			"\a3\weapons_f\data\gl_holo_co.paa"
		};
		class EGLM: EGLM
		{
			drySound[]=
			{
				"\xdf\sounds\reloads\spearhead_gl_click.ogg",
				0.56234133,
				1,
				10
			};
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\trg_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\trg_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};

	// SMGs
	class SMG_01_F;
	class SMG_03C_black;
	class SMG_03C_TR_black;
	class SMG_03_black;
	class SMG_03_TR_black;
	class XDF_SMG_01: SMG_01_F
	{
		author="Radium";
		scope=2;
		displayName="XDF KRISS Vector";
		baseWeapon="XDF_SMG_01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\vector_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\vector\smg_01_co.paa",
			"\a3\weapons_f\data\vectoratt_co.paa",
			"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
		magazineWell[] +=
		{
			"Vector_45ACP_XDF"
		};
	};
	class XDF_SMG_03C_black: SMG_03C_black
	{
		author="Radium";
		scope=2;
		displayName="XDF P90";
		baseWeapon="XDF_SMG_03C_black";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\p90_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\p90\p90_body.paa"
		};
		magazineWell[] +=
		{
			"P90_57_XDF"
		};
	};
	class XDF_SMG_03C_TR_black: SMG_03C_TR_black
	{
		author="Radium";
		scope=2;
		displayName="XDF P90 TR";
		baseWeapon="XDF_SMG_03C_TR_black";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\p90_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\p90\p90_body.paa"
		};
		magazineWell[] +=
		{
			"P90_57_XDF"
		};
	};
	class XDF_SMG_03_black: SMG_03_black
	{
		author="Radium";
		scope=2;
		displayName="XDF PS90";
		baseWeapon="XDF_SMG_03_black";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\p90_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\p90\p90_body.paa"
		};
		magazineWell[] +=
		{
			"P90_57_XDF"
		};
	};
	class XDF_SMG_03_TR_black: SMG_03_TR_black
	{
		author="Radium";
		scope=2;
		displayName="XDF PS90 TR";
		baseWeapon="XDF_SMG_03_TR_black";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\p90_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\p90\p90_body.paa"
		};
		magazineWell[] +=
		{
			"P90_57_XDF"
		};
	};

	// Pistols
	class hgun_P07_F;
	class hgun_ACPC2_F;
	class hgun_Pistol_heavy_01_F;
	class XDF_hgun_P07: hgun_P07_F // 16Rnd_9x21_Mag
	{
		author="Radium";
		scope=2;
		displayName="XDF Walther P99";
		baseWeapon="XDF_hgun_P07";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\p07_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\p07\p07_co.paa"
		};
		magazineWell[] +=
		{
			"Pistol_9x21_XDF"
		};
	};
	class XDF_hgun_ACPC2: hgun_ACPC2_F // 9Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName="XDF Custom Covert II";
		baseWeapon="XDF_hgun_ACPC2";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acp_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\acp\acpc2_co.paa"
		};
		magazineWell[] +=
		{
			"ACPC2_45ACP_XDF"
		};
	};
	class XDF_hgun_Pistol_heavy_01: hgun_Pistol_heavy_01_F // 11Rnd_45ACP_Mag
	{
		author="Radium";
		scope=2;
		displayName="XDF FNX-45 Tactical";
		baseWeapon="XDF_hgun_Pistol_heavy_01";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\45tactical_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\45tactical\pistol_heavy_01_co.paa"
		};
		magazineWell[] +=
		{
			"PistolHeavy_01_45ACP_XDF"
		};
	};
	class hgun_Pistol_heavy_02_F;
	class XDF_hgun_Pistol_heavy_02_F: hgun_Pistol_heavy_02_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Nemesis";
		baseWeapon="XDF_hgun_Pistol_heavy_02_F";
		recoil="recoil_pistol_nemesis";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\nemesis_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\zubr\pistol_heavy_02_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\zubr\pistol_heavy_02_mag_co.paa"
		};
		magazines[]=
		{
			"6Rnd_45ACP_Cylinder_blue_tracer"
		};
		magazineWell[]=
		{
			"Cylinder_45ACP_XDF"
		};
	};

	// Long Range Rifles
	class srifle_DMR_03_F;
	class srifle_DMR_02_F;
	class srifle_GM6_F;
	class srifle_DMR_05_blk_F;
	class srifle_DMR_04_F;
	class srifle_LRR_F;
	class srifle_DMR_01_F;
	class srifle_EBR_F;
	class arifle_SPAR_03_blk_F;
	class srifle_DMR_07_blk_F;
	class XDF_srifle_DMR_03: srifle_DMR_03_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Marauder";
		baseWeapon="XDF_srifle_DMR_03";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\sig556_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\sig556\dmr_03_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\sig556\dmr_03_02_co.paa"
		};
		magazineWell[] +=
		{
			"M14_762x51_XDF"
		};
	};
	class XDF_srifle_DMR_02: srifle_DMR_02_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Bad News";
		baseWeapon="XDF_srifle_DMR_02";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\mar10_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mar10\dmr_02_01_dazzle_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mar10\dmr_02_02_dazzle_co.paa"
		};
		magazineWell[] +=
		{
			"MAR10_338_XDF"
		};
	};
	class XDF_srifle_GM6: srifle_GM6_F
	{
		author="Radium";
		scope=2;
		displayName="XDF HTI Caracal";
		baseWeapon="XDF_srifle_GM6";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\gm6\gm6_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\gm6_reload.ogg",
			4,
			1,
			10
		};
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class silencedsound: basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"XDF_GM6Lynx_Shot_SoundSet",
					"GM6Lynx_Tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
		};
		magazineWell[] +=
		{
			"GM6_127x108_XDF"
		};
	};
	class XDF_srifle_DMR_05_blk: srifle_DMR_05_blk_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Nova";
		baseWeapon="XDF_srifle_DMR_05_blk";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\cyrus_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\cyrus\dmr_05_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\cyrus\dmr_05_02_co.paa"
		};
		magazineWell[] +=
		{
			"Cyrus_93_XDF"
		};
	};
	class XDF_srifle_DMR_04: srifle_DMR_04_F
	{
		author="Radium";
		scope=2;
		displayName="XDF AKINA";
		baseWeapon="XDF_srifle_DMR_04";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\asp1_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\asp1\dmr_04_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\asp1\dmr_04_02_co.paa"
		};
		magazineWell[] +=
		{
			"ASP1_127x54_XDF"
		};
	};
	class XDF_srifle_LRR: srifle_LRR_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Arbitrator";
		baseWeapon="XDF_srifle_LRR";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\intervention\cheytac_m200_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\cheytac_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"Arbitrator_408_XDF"
		};
	};
	class XDF_srifle_DMR_01: srifle_DMR_01_F
	{
		author="Radium";
		scope=2;
		displayName="XDF VS-121";
		baseWeapon="XDF_srifle_DMR_01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\rahim_reload.ogg",
			2.5,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\rahim\dmr_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\rahim\dmr_02_co.paa"
		};
		magazineWell[] +=
		{
			"Rahim_762x54_XDF"
		};
	};
	class XDF_srifle_EBR_F: srifle_EBR_F
	{
		author="Radium";
		scope=2;
		displayName="XDF MK-21 EBR";
		baseWeapon="XDF_srifle_EBR_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\ebr_reload.ogg",
			2.5,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\ebr\m14_ebr01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\ebr\m14_ebr02_co.paa"
		};
		magazineWell[] +=
		{
			"M14_762x51_XDF"
		};
	};
	class arifle_SPAR_03_XDF_F: arifle_SPAR_03_blk_F
	{
		author="Radium";
		_generalMacro="arifle_SPAR_03_XDF_F";
		scope=2;
		displayName="XDF HK417 Marksman";
		baseWeapon="arifle_SPAR_03_XDF_F";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_03_blk_f_01_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_03_blk_f_02_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\hk416\arifle_spar_01_blk_f_01_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\hk417_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"M14_762x51_XDF"
		};
	};
	class XDF_srifle_DMR_07_blk_F: srifle_DMR_07_blk_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Tempest";
		baseWeapon="XDF_srifle_DMR_07_blk_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\tempest_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\qbuz\dmr_07_f_1_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\qbuz\dmr_07_f_2_co.paa"
		};
		magazineWell[] +=
		{
			"Tempest_65x39_XDF"
		};
	};

    // Machineguns
	class MMG_01_tan_F;
	class MMG_02_black_F;
	class LMG_03_F;
	class LMG_Mk200_black_F;
	class XDF_MMG_01_black: MMG_01_tan_F
	{
		author="Radium";
		_generalMacro="MMG_01_tan_F";
		scope=2;
		picture="\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\UI\gear_MMG_01_tan_X_co.paa";
		displayName="XDF HK121";
		baseWeapon="XDF_MMG_01_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\navid\mmg_01_01_sand_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\navid\mmg_01_02_sand_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\navid\mmg_01_03_sand_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\hk121_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"Navid_93x64_XDF"
		};
	};
	class XDF_MMG_02_black: MMG_02_black_F
	{
		author="Radium";
		scope=2;
		displayName="XDF LWMMG";
		baseWeapon="XDF_MMG_02_black";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\spmg\mmg_02_01_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\spmg\mmg_02_02_black_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\spmg\mmg_02_03_black_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\lwmmg_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"SPMG_338_XDF"
		};
	};
	class XDF_LMG_03: LMG_03_F
	{
		author="Radium";
		scope=2;
		displayName="XDF M249 SAW";
		baseWeapon="XDF_LMG_03";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\lim85\lmg_03_f_body_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\lim85\lmg_03_f_acc_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\lim85\grip_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\m249_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"M249_556x45_XDF"
		};
	};
	class XDF_LMG_Mk200: LMG_Mk200_black_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Stoner 99";
		baseWeapon="XDF_LMG_Mk200";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\m200\1st_person_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\m200\body_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\m200\grip_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\stoner_reload.ogg",
			4,
			1,
			10
		};
		magazineWell[] +=
		{
			"Mk200_65x39_XDF"
		};
	};

	// Launchers
	class launch_MRAWS_green_F;
	class launch_O_Vorona_green_F;
	class launch_B_Titan_F;
	class launch_B_Titan_short_F;
	class XDF_launch_MRAWS_black: launch_MRAWS_green_F
	{
		author="Radium";
		scope=2;
		displayName="XDF M4 MAAWS";
		baseWeapon="XDF_launch_MRAWS_black";
		magazines[]=
		{
			"MRAWS_HE_F",
			"MRAWS_HEAT55_F",
			"MRAWS_HEAT55_F",
			"MRAAWS_HEAT_XDF",
			"MRAAWS_HEAT55_XDF",
			"MRAAWS_HE_NUKE_XDF"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\maaws_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\maaws\launch_mraws_black_01_f_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\maaws\launch_mraws_02_f_co.paa"
		};
	};
	class XDF_launch_O_Vorona_black: launch_O_Vorona_green_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Metis-M";
		baseWeapon="XDF_launch_O_Vorona_black";
		magazines[]=
		{
			"Vorona_HE",
			"Vorona_HEAT",
			"Vorona_HEAT_XDF"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\vorona_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\vorona\vorona_f_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\vorona\vorona_f_co.paa"
		};
	};
	class XDF_launch_B_Titan: launch_B_Titan_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Lance";
		baseWeapon="XDF_launch_B_Titan";
		magazines[]=
		{
			"M_Titan_AA",
			"M_Titan_AA_XDF"
		};
		magazineWell[]=
		{
			"Titan_Long_XDF"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\titan\tubel_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\titan_reload.ogg",
			2,
			1,
			10
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
	};
	class XDF_launch_B_Titan_short: launch_B_Titan_short_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Spear";
		baseWeapon="XDF_launch_B_Titan_short";
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"Titan_AT_XDF"
		};
		magazineWell[]=
		{
			"Titan_Short_XDF"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\titan_reload.ogg",
			2,
			1,
			10
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\titan\launcher_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\titan\tubem_co.paa"
		};
		modes[]=
		{
			"Single",
			"TopDown"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_titan";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=70;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class TopDown: Single
		{
			textureType="topDown";
			displayName="Top-down Attack";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=150;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=2000;
			maxRangeProbab=0.94999999;
		};
		canLock=2;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
	};
	class launch_RPG32_F;
	class XDF_launch_RPG32: launch_RPG32_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Hammer";
		baseWeapon="XDF_launch_RPG32";
		magazines[]+=
		{
			"RPG32_AT_XDF",
			"RPG32_HE_XDF",
			"RPG32_FAE_XDF"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\rpg32_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[]+=
		{
			"RPG32_XDF"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\rpg32\rpg_32_body_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\rpg32\rpg_32_optics_co.paa"
		};
	};

	// Loadouts
	class arifle_MSBS65_black_F;
	class arifle_MSBS65_UBS_black_F;
	class arifle_MSBS65_GL_black_F;
	class XDF_launch_MRAWS_black_F: XDF_launch_MRAWS_black // MAAWS with IR Laser
	{
		class linkedItems
		{
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};	
	class XDF_launch_B_Titan_short_F: XDF_launch_B_Titan_short // Spear with IR Laser
	{
		class linkedItems
		{
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_XDF_black_F: arifle_MSBS65_XDF_black // Promet Standard
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
	class arifle_MSBS65_GL_XDF_black_F: arifle_MSBS65_GL_XDF_black // Promet GL
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
	class arifle_MSBS65_AXGL_XDF_black_F: arifle_MSBS65_GL_XDF_black // Promet AX GL (Suppressed)
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
	class arifle_MSBS65_AX_XDF_black_F: arifle_MSBS65_XDF_black // Promet AX (Suppressed)
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
	class arifle_MSBS65_CRW_XDF_black_F: arifle_MSBS65_XDF_black // Promet Crew
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_MSBS65_UBS_XDF_black_F: arifle_MSBS65_UBS_XDF_black // Promet Elite AX Shotgun
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
	class XDF_SMG_01_F: XDF_SMG_01 // Vector
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_MMG_02_black_F: XDF_MMG_02_black // SPMG
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
	class XDF_srifle_DMR_03_F: XDF_srifle_DMR_03 // SIG 556
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
	class XDF_srifle_GM6_F: XDF_srifle_GM6 // GM6 Lynx
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_arifle_ARX_blk_F: XDF_arifle_ARX_blk // Type 115
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
	class XDF_srifle_DMR_05_blk_F: XDF_srifle_DMR_05_blk // Cyrus
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
	class XDF_MMG_01_black_F: XDF_MMG_01_black // Navid
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
	class XDF_LMG_03_F: XDF_LMG_03 // LIM-85
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class XDF_srifle_DMR_04_F: XDF_srifle_DMR_04 // ASP-1 Kir
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
	class XDF_srifle_LRR_F: XDF_srifle_LRR // Intervention
	{
		class linkedItems
		{
			class LinkedItemsOptic {
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	class XDF_srifle_DMR_02_F: XDF_srifle_DMR_02 // MAR-10
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

	// vehicles
	class MGun;
	class cannon_125mm_advanced;
	class cannon_125mm_advanced_AX: cannon_125mm_advanced
	{
		magazines[]=
		{
			"12Rnd_125mm_APFSDS_T_Blue_AX",
			"24Rnd_125mm_APFSDS",
			"24Rnd_125mm_APFSDS_T_Red",
			"24Rnd_125mm_APFSDS_T_Green",
			"24Rnd_125mm_APFSDS_T_Yellow",
			"20Rnd_125mm_APFSDS",
			"20Rnd_125mm_APFSDS_T_Red",
			"20Rnd_125mm_APFSDS_T_Green",
			"20Rnd_125mm_APFSDS_T_Yellow",
			"16Rnd_125mm_APFSDS",
			"16Rnd_125mm_APFSDS_T_Red",
			"16Rnd_125mm_APFSDS_T_Green",
			"16Rnd_125mm_APFSDS_T_Yellow",
			"12Rnd_125mm_HEAT",
			"12Rnd_125mm_HEAT_T_Red",
			"12Rnd_125mm_HEAT_T_Green",
			"12Rnd_125mm_HEAT_T_Yellow",
			"12Rnd_125mm_HE",
			"12Rnd_125mm_HE_T_Red",
			"12Rnd_125mm_HE_T_Green",
			"12Rnd_125mm_HE_T_Yellow",
			"8Rnd_125mm_HE",
			"8Rnd_125mm_HE_T_Red",
			"8Rnd_125mm_HE_T_Green",
			"8Rnd_125mm_HE_T_Yellow",
			"4Rnd_125mm_cannon_missiles"
		};
	};
	class cannon_120mm;
	class cannon_120mm_AX: cannon_120mm
	{
		magazines[]+=
		{
			"18Rnd_120mm_APFSDS_T_Blue_AX",
			"8Rnd_120mm_APFSDS_T_Blue_AX"
		};
	};
	class cannon_railgun;
	class cannon_AX_railgun: cannon_railgun
	{
		displayName="Experimental AX Railgun 75mm";
		magazines[]=
		{
			"45Rnd_75mm_RailGun_APFSDS_AX_mag"
		};
		class EventHandlers
		{
			fired="_this call bis_fnc_RailGun_AX_01_fireEH";
		};
	};
	class cannon_railgun_fake;
	class cannon_AX_railgun_fake: cannon_railgun_fake
	{
		displayName="Experimental AX Railgun 75mm";
		magazines[]=
		{
			"AX_RailGun_01_DummyMagazine"
		};
		class EventHandlers
		{
			fired="_this call BIS_fnc_RailGun_AX_01_chargingStart";
		};
	};
	class LMG_Minigun;
	class LMG_Minigun_AX: LMG_Minigun
	{
		displayName="LMG AX Minigun";
		magazineReloadTime=15;
		ballisticsComputer=2;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class gunParticles
		{
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge1";
			};
			class effect2
			{
				positionName="machinegun_end";
				directionName="machinegun_beg";
				effectName="MachineGun1";
			};
		};
		magazines[]=
		{
			"200Rnd_65x39_Belt",
			"200Rnd_65x39_Belt_Tracer_Red",
			"200Rnd_65x39_Belt_Tracer_Green",
			"200Rnd_65x39_Belt_Tracer_Yellow",
			"2000Rnd_65x39_Belt",
			"2000Rnd_65x39_Belt_Green",
			"2000Rnd_65x39_Belt_Yellow",
			"1000Rnd_65x39_Belt",
			"1000Rnd_65x39_Belt_Green",
			"1000Rnd_65x39_Belt_Yellow",
			"2000Rnd_65x39_Belt_Tracer_Red",
			"2000Rnd_65x39_Belt_Tracer_Green",
			"2000Rnd_65x39_Belt_Tracer_Yellow",
			"1000Rnd_65x39_Belt_Tracer_Red",
			"1000Rnd_65x39_Belt_Tracer_Green",
			"1000Rnd_65x39_Belt_Tracer_Yellow",
			"2000Rnd_65x39_Belt_Tracer_Green_Splash",
			"2000Rnd_65x39_Belt_Tracer_Yellow_Splash"
		};
		class manual: MGun
		{
			displayName="LMG AX Minigun";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_01",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_02",
					1,
					1.1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_03",
					1,
					0.89999998,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.31622776,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.31622776,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=3;
			reloadTime=0.033333302;
			dispersion=0.0115;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class LMG_Minigun_AX_HE: LMG_Minigun_AX
	{
		displayName="LMG AX Minigun HE";
		magazines[]=
		{
			"1000Rnd_20mm_GPR_shells",
		};
		class manual: MGun
		{
			displayName="LMG AX Minigun";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\hmg_050\hmg_050_01",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\hmg_050\hmg_050_02",
					1,
					1.1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\hmg_050\hmg_050_03",
					1,
					0.89999998,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				closure1[]=
				{
					"A3\sounds_f\arsenal\weapons_vehicles\hmg_050\hmg050_closure_01",
					0.31622776,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\arsenal\weapons_vehicles\hmg_050\hmg050_closure_02",
					0.31622776,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=3;
			reloadTime=0.033333302;
			dispersion=0.0115;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class weapon_AMRAAMLauncher;
	class weapon_AXMissileLauncher: weapon_AMRAAMLauncher
	{
		displayName="AX-78 Peregrine";
		magazines[]=
		{
			"magazine_Missile_AXInterceptor_D_x1"
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
	};
	class missiles_ASRAAM;
	class weapon_SRAXMissileLauncher: missiles_ASRAAM
	{
		displayName="AX-55 Falcon";
		magazines[]=
		{
			"magazine_1Rnd_AX_AAA_missiles"
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
	};
	class weapon_AGM_65Launcher;
	class weapon_AXGMLauncher: weapon_AGM_65Launcher
	{
		displayName="AXGM-85 Dynamo";
		magazines[]=
		{
			"magazine_Missile_AXGM_02_F",
			"magazine_Missile_AXGMx2_02_F"
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
	};
	class Gatling_30mm_Plane_CAS_01_F;
	class Gatling_30mm_AX_CAS_01_F: Gatling_30mm_Plane_CAS_01_F
	{
		displayName="GAU-15 Retaliator";
		magazines[]=
		{
			"1000Rnd_Gatling_30mm_AX_CAS_01_F"
		};
	};
	class weapon_Fighter_Gun20mm_AA;
	class weapon_Fighter_Gun20mm_AX: weapon_Fighter_Gun20mm_AA
	{
		displayName="M-98 Ionizer";
		magazines[]=
		{
			"magazine_Fighter01_Gun20mm_AX_x450"
		};
	};
	class weapon_Fighter_Gun_30mm;
	class weapon_Fighter_Gun_30mm_AX: weapon_Fighter_Gun_30mm
	{
		displayName="M-121 Vindicator";
		magazines[]=
		{
			"magazine_Fighter02_Gun30mm_AX_x180"
		};
	};
	class gatling_30mm_base
	{
		class LowROF;
	};
	class gatling_30mm;
	class AX_gatling_30mm: gatling_30mm
	{
		displayName="GSh-4-80 Inquisitor";
		scope=1;
		magazineReloadTime=5;
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: gatling_30mm_base
		{
			displayName="GSh-4-80 Inquisitor - HE Feed";
			magazineReloadTime=3;
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\5sec_beltFeedReload.ogg",
				5,
				1,
				10
			};
			magazines[]=
			{
				"250Rnd_30mm_AXHE_shells",
				"250Rnd_30mm_HE_shells",
				"250Rnd_30mm_HE_shells_Tracer_Red",
				"250Rnd_30mm_HE_shells_Tracer_Green"
			};
			class LowROF: LowROF
			{
				dispersion=0.0066;
			};
		};
		class AP: gatling_30mm_base
		{
			displayName="GSh-4-80 Inquisitor - AP Feed";
			magazineReloadTime=3;
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\5sec_beltFeedReload.ogg",
				5,
				1,
				10
			};
			magazines[]=
			{
				"250Rnd_30mm_AXAPDS_shells",
				"250Rnd_30mm_APDS_shells",
				"250Rnd_30mm_APDS_shells_Tracer_Red",
				"250Rnd_30mm_APDS_shells_Tracer_Green",
				"250Rnd_30mm_APDS_shells_Tracer_Yellow"
			};
		};
	};
	class gatling_20mm;
	class AX_gatling_20mm: gatling_20mm
	{
		displayName="XM-303 Hunter";
		magazineReloadTime=5;
		magazines[]+=
		{
			"1500Rnd_20mm_AX_shells"
		};
	};
	class weapon_Cannon_Phalanx;
	class AX_weapon_Cannon_Phalanx: weapon_Cannon_Phalanx
	{
		displayName="AX Gatling Cannon 20mm";
		magazines[]=
		{
			"AX_magazine_Cannon_Phalanx_x2000"
		};
	};
	class missiles_titan_AA;
	class missiles_titan_AX: missiles_titan_AA
	{
		displayName="Lance MLS"
		magazines[]+=
		{
			"4Rnd_Titan_long_missiles_AX"
		};
	};
	class autocannon_35mm;
	class autocannon_35mm_AX: autocannon_35mm
	{
		displayname="GDF-AX 'Viper'";
		magazines[]+=
		{
			"680Rnd_35mm_AA_AX_shells",
		};
	};
	class weapon_mim145Launcher;
	class weapon_mim145Launcher_AX: weapon_mim145Launcher
	{
		displayName="MIM-55 Taipan Launcher";
		magazines[]=
		{
			"magazine_Missile_mim145_AX_x4"
		};
	};
};