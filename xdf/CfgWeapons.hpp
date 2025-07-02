
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class WeaponSlotsInfo;
class CowsSlot_Rail;
class PointerSlot_Rail;
class GL_3GL_F;
class EGLM;
class cfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
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
		descriptionShort="The standard XDF uniform - insulated, thermal-resistant, and stylish."
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
		descriptionShort="The standard XDF uniform - insulated, thermal-resistant, and stylish - now with rolled sleeves."
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
		descriptionShort="The standard XDF uniform - insulated, thermal-resistant, and stylish.<br/>Sleeved variant."
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
		descriptionShort="Standard-issue XDF crew coveralls designed for vehicular operations or engineering field work."
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
	class U_XDF_Research_Coveralls_Black: U_SSU_Coveralls_base
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Research Coveralls";
		descriptionShort="Special XDF research coveralls coated in a thin but highly durable polymeric layer<br/>designed to resist chemicals or other hazardous substances."
		picture="\SSU_Black_Uniforms\UI\Icon_SSU_Coveralls_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Research_Coveralls_Black.paa",
			"\xdf\retextures\xdf_uniform\uniforms\xdf_boots_research.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Research_Coveralls_Black_gloves.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_XDF_Research_Coveralls_Black";
		};
	};
	class U_XDF_Uniform_Ghillie_Black: U_SSU_Stealth_Uniform_Ghillie_Black
	{
		author="Clasless & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Standard Uniform (Ghillie)";
		descriptionShort="Standard-issue XDF uniform covered in a night operations ghillie."
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
		descriptionShort="Standard-issue XDF uniform, without the thermal resistant shirt."
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
		descriptionShort="Experimental XDF jet suit designed to maximise pilot survival when operating aircraft capable of higher-than-normal G-load."
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
		descriptionShort="Experimental XDF CBRN suit for handling alien substances and other highly hazardous materials."
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
	class U_XDF_CBRN_Research_Suit: U_B_CBRN_Suit_01_MTP_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF CBRN Research Suit";
		descriptionShort="Experimental XDF CBRN suit for handling alien substances and other highly hazardous materials, further reinforced with a innovative polymeric coating."
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_CBRN_Research_Suit_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_CBRN_Research_Suit";
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
		descriptionShort="Highly effective - and expensive - XDF suit for special operations.<br/>With the right supporting equipment, an operator wearing the SPS can operate in any environment - even in a vacuum."
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
		descriptionShort="XDF wetsuit for maritime operations."
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
		descriptionShort="XDF female wetsuit for maritime operations."
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
		descriptionShort="XDF female wetsuit for maritime operations. The operator has chosen to shed 'extraneous' parts."
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
		descriptionShort="Standard-issue XDF uniform with neoprene undersuit for impromptu maritime operations."
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
		descriptionShort="Standard-issue XDF female uniform with neoprene undersuit for impromptu maritime operations."
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
		descriptionShort="Highly effective - and expensive - XDF suit for special operations.<br/>With the right supporting equipment, an operator wearing the SPS can operate in any environment - even in a vacuum."
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
		descriptionShort="The standard XDF female uniform - insulated, thermal-resistant, and stylish."
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
		descriptionShort="The standard XDF female uniform - insulated, thermal-resistant, and stylish - now with rolled sleeves."
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
		descriptionShort="Standard-issue XDF female uniform, without the thermal resistant shirt."
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
	class U_O_CombatUniform_ocamo;
	class U_XDF_Envirosuit_Black: U_O_CombatUniform_ocamo
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Envirosuit";
		descriptionShort="Specialised XDF suit designed for operation in environments with extreme cold or heat."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Envirosuit_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Envirosuit_Black";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_I_E_Uniform_01_tanktop_F;
	class U_XDF_Temperate_Uniform_TT: U_I_E_Uniform_01_tanktop_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Temperate Uniform (Tank Top)";
		descriptionShort="Temperate XDF uniform designed for arid environments."
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_tanktop_co.paa", 
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_gloves_black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Temperate_Uniform_TT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_E_Uniform_01_F;
	class U_XDF_Temperate_Uniform: U_I_E_Uniform_01_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Temperate Uniform";
		descriptionShort="Temperate XDF uniform designed for arid environments."
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_01_co.paa", 
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_gloves_black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Temperate_Uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_E_Uniform_01_shortsleeve_F;
	class U_XDF_Temperate_Uniform_Rolled: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Temperate Uniform (Rolled)";
		descriptionShort="Temperate XDF uniform designed for arid environments."
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_01_co.paa", 
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Temperate_Uniform_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TCGM_F_Soldier3;
	class U_XDF_Female_Temperate_Uniform: TCGM_F_Soldier3
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Temperate Uniform";
		descriptionShort="Temperate XDF female uniform designed for arid environments."
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_01_sweater_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_Temperate_Uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TCGM_F_Soldier3_RollUp;
	class U_XDF_Female_Temperate_Uniform_Rolled: TCGM_F_Soldier3_RollUp
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Female Temperate Uniform (Rolled)";
		descriptionShort="Temperate XDF female uniform designed for arid environments."
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_01_sweater_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Female_Temperate_Uniform_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_E_Uniform_01_coveralls_F;
	class U_XDF_Combat_Coveralls_Black: U_I_E_Uniform_01_coveralls_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Combat Coveralls";
		descriptionShort="XDF crew coveralls adapted for combat usage by applying distinct temperate-based camo. Designed to be used with heavy weapon units."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_01_coveralls_01_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_pants_co.paa",
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Temperate_Uniform_TT_gloves_black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Combat_Coveralls_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam;
	class U_XDF_Basic_Uniform_Black: U_B_CombatUniform_mcam
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Basic Uniform";
		descriptionShort="Basic XDF uniform with insulation, but no thermal-resistant material."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Basic_Uniform_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam_vest;
	class U_XDF_Basic_Uniform_Rolled_Black: U_B_CombatUniform_mcam_vest
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Basic Uniform (Rolled)";
		descriptionShort="Basic XDF uniform with insulation, but no thermal-resistant material. Rolled sleeves."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Uniform_Black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Basic_Uniform_Rolled_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_R_Gorka_01_camo_F;
	class U_XDF_Gorka_Black: U_O_R_Gorka_01_camo_F
	{
		author="Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Gorka-T";
		descriptionShort="Specialised XDF uniform designed for use in tundra or other harsh environments."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\uniforms\U_XDF_Gorka_Black_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Gorka_Black";
			containerClass="Supply40";
			mass=40;
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
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_Olive_F: V_CarrierRigKBT_01_base_F
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
	class Vest_NoCamo_Base;
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_XDF_Tactical_Vest_Black: V_SSU_Tactical_Vest_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Tactical Vest";
		descriptionShort="Armor Level II<br/>It's a tactical vest."
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
	class V_XDF_Research_Vest_Black: V_SSU_Tactical_Vest_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Research Vest";
		descriptionShort="Armor Level II<br/>It's a tactical vest (but this time sciencey)."
		picture="\SSU_Black_Vests\UI\Icon_SSU_Tactical_Vest_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Research_Vest_Black.paa"
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
		descriptionShort="Armor Level III<br/>Standard-issue XDF plate carrier with no frills."
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
		descriptionShort="Armor Level IV<br/>Standard-issue XDF plate carrier with a hydration panel and additional ballistic inserts."
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
		descriptionShort="Armor Level III<br/>Modular XDF plate carrier with no frills."
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
	class V_XDF_Modular_Carrier_Lite_Black_Cybern: V_SSU_Modular_Carrier_Lite_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier Lite (Cybern)";
		descriptionShort="Armor Level III<br/>Modular XDF plate carrier with no frills.<br/>Personalised for Operative Cybern."
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_Lite_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black_Cybern.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_CarrierRigKBT_01_Olive_F;
	class V_XDF_Modular_Carrier_Vest_Black: V_CarrierRigKBT_01_Olive_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Modular Carrier Vest";
		descriptionShort="Armor Level III<br/>Modular XDF plate carrier with no frills - and no pouches."
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
		descriptionShort="Armor Level IV<br/>Modular XDF plate carrier with heavier inserts and explosive-resistant padding."
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_XDF_Modular_Carrier_GL_Rig_Black_Kao: V_SSU_Modular_Carrier_GL_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Modular Carrier GL Rig (Kao)";
		descriptionShort="Armor Level IV<br/>Modular XDF plate carrier with heavier inserts and explosive-resistant padding.<br/>Personalised for Operative Kao."
		picture="\SSU_Black_Vests\UI\Icon_SSU_Modular_Carrier_GL_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Modular_Carrier_Rig_Black_Kao.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_XDF_Carrier_GL_Rig_Black: V_SSU_Carrier_GL_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier GL Rig";
		descriptionShort="Armor Level IV<br/>Heavy-duty explosive-resistant plate carrier."
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
		descriptionShort="Armor Level IV<br/>Heavy-duty anti-xeno plate carrier. Heavy, but one of the few vests rated for combat against the xeno-threat.<br/>This vest will keep you alive. Also likely to survive munitions that the user would not."
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
	class V_XDF_Carrier_Special_Rig_Black_Rad: V_SSU_Carrier_Special_Rig_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Carrier Special Rig (Radium)";
		descriptionShort="Armor Level IV<br/>Heavy-duty anti-xeno plate carrier. Heavy, but one of the few vests rated for combat against the xeno-threat.<br/>This vest will keep you alive. Also likely to survive munitions that the user would not.<br/>Personalised for Operative Radium."
		picture="\SSU_Black_Vests\UI\Icon_SSU_Carrier_Special_Rig_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_GL_Rig_Black_Rad.paa"
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
		descriptionShort="No Armor<br/>Sacrifice all semblance of armor for load-bearing capacity."
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
		descriptionShort="No Armor<br/>Sacrifice all semblance of armor for load-bearing capacity."
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
		descriptionShort="Armor Level III<br/>A combat-rated rebreather for maritime operations. Offers similar protection to a plate carrier, with compartments and a modular belt for load-bearing."
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
		descriptionShort="Armor Level III<br/>A combat-rated rebreather for maritime operations. Offers similar protection to a plate carrier, with compartments and a modular belt for load-bearing.<br/>The mask is always deployed on this variant."
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
	class V_Rangemaster_belt_XDF: V_Rangemaster_belt
	{
		author="Radium";
		scope=2;
		displayName="XDF Battle Belt";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			containerClass="Supply200";
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\vests\V_XDF_Carrier_Rig_Black.paa"
		};
	};

	class H_HelmetB_TI_tna_F;
	class H_SSU_Stealth_Combat_Helmet_base: H_HelmetB_TI_tna_F
	{ 
		class ItemInfo; 
	};
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
		descriptionShort="Armor Level IV<br/>Special operations anti-xeno helmet with protective mandible."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Stealth_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_Stealth_Combat_Helmet_Black_Rad: H_SSU_Stealth_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (Mandible, Radium)";
		descriptionShort="Armor Level IV<br/>Special operations anti-xeno helmet with protective mandible. Personalised for Operative Radium."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Stealth_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_Black_Rad.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_Stealth_Combat_Helmet_Black_b: H_SSU_Stealth_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (Mandible - Beast)";
		descriptionShort="Armor Level IV<br/>Special operations anti-xeno helmet with protective mandible, with additional fear-inducing detailing."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Stealth_Combat_Helmet_Black_b.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Stealth_Combat_Helmet_Black_b.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_Stealth_Combat_Helmet_NM_Black: H_SSU_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Spec-Ops Helmet (No Mandible)";
		descriptionShort="Armor Level II<br/>Special operations anti-xeno helmet with no protective mandible."
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
		descriptionShort="Armor Level II<br/>Special operations anti-xeno helmet with no protective mandible."
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
		descriptionShort="Armor Level II<br/>Standard-issue XDF infantry combat helmet."
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
		descriptionShort="Armor Level IV<br/>Standard-issue XDF infantry combat helmet, enhanced for better protection."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Enhanced_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Enhanced_Combat_Helmet_Black_core: H_SSU_Enhanced_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet (Enhanced, Coremanite)";
		descriptionShort="Armor Level IV<br/>Standard-issue XDF infantry combat helmet, enhanced for better protection.<br/>Personalised for Operative Coremanite."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Enhanced_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black_core.paa"
		};
	};
	class H_XDF_Enhanced_Combat_Helmet_Black_Kao: H_SSU_Enhanced_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet (Enhanced, Kao)";
		descriptionShort="Armor Level IV<br/>Standard-issue XDF infantry combat helmet, enhanced for better protection.<br/>Personalised for Operative Kao."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Enhanced_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black_Kao.paa"
		};
	};
	class H_XDF_Camo_Combat_Helmet_Black: H_SSU_Camo_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Infantry Combat Helmet (Camo)";
		descriptionShort="Armor Level II<br/>Standard-issue XDF infantry combat helmet with camo netting."
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
		descriptionShort="Armor Level I<br/>Lightweight XDF infantry helmet. Better than nothing - even though the protection offered is practically nothing."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Light_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Combat_Helmet_Black.paa"
		};
	};
	class H_XDF_Light_Research_Helmet_Black: H_SSU_Light_Combat_Helmet_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Light Research Helmet";
		descriptionShort="Armor Level I<br/>Lightweight XDF research helmet. Better than nothing - even though the protection offered is practically nothing."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Light_Combat_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Research_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_HS_Black: H_SSU_Advanced_Modular_Helmet_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet";
		descriptionShort="Armor Level III<br/>Modular XDF infantry combat helmet."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_HS_Black_Maple: H_SSU_Advanced_Modular_Helmet_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet (Maple)";
		descriptionShort="Armor Level III<br/>Modular XDF infantry combat helmet.<br/>Personalised for Operative Maple."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black_Maple.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_Ear_Black: H_SSU_Advanced_Modular_Helmet_Ear_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet (Ear Protectors)";
		descriptionShort="Armor Level III<br/>Modular XDF infantry combat helmet with ear protectors."
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
		descriptionShort="Armor Level III<br/>Modular XDF infantry combat helmet with protective chops."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_Chops_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black.paa"
		};
	};
	class H_XDF_Advanced_Modular_Helmet_Chops_Black_Cybern: H_SSU_Advanced_Modular_Helmet_Chops_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Advanced Modular Helmet (Chops, Cybern)";
		descriptionShort="Armor Level III<br/>Modular XDF infantry combat helmet with protective chops.<br/>Personalised for Operative Cybern."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Advanced_Modular_Helmet_Chops_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Advanced_Modular_Helmet_Black_Cybern.paa"
		};
	};
	class H_SSU_Special_Purpose_Helmet_base;
	class H_SSU_Special_Purpose_Helmet_Black: H_SSU_Special_Purpose_Helmet_base
	{
		class ItemInfo;
	};
	class H_XDF_Special_Purpose_Helmet_Black: H_SSU_Special_Purpose_Helmet_Black
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF SPH 'Xenohunter'";
		descriptionShort="Armor Level V<br/>High-tech XDF special forces helmet designed to be paired with the Special Purpose Suit.<br/>Completely sealed and rated for vacuum, but often used with open air filters."
		picture="\SSU_Black_Helmets\UI\Icon_SSU_Special_Purpose_Helmet_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Special_Purpose_Helmet_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 20;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_Boonie_HS_Black: H_SSU_Boonie_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Booniehat";
		descriptionShort="No Armor<br/>It's an XDF booniehat. Go look cool and don't get shot."
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
		descriptionShort="No Armor<br/>Do not put it on in reverse."
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Cap_HS_Black.paa"
		};
	};
	class H_XDF_Research_Cap_HS_Black: H_SSU_Cap_HS_base
	{
		author="Clasless & Radium";
		scope=2;
		displayName="XDF Research Cap";
		descriptionShort="No Armor<br/>Do not put it on in reverse."
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Research_Cap_HS_Black.paa"
		};
	};
	class H_XDF_Mil_Cap: H_MilCap_blue
	{
		author="Radium";
		scope=2;
		displayName="XDF Military Cap";
		descriptionShort="No Armor<br/>XDF military cap."
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
		descriptionShort="No Armor<br/>XDF military cap with Wolf insignia."
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Mil_Cap_Wolf.paa"
		};
	};
	class H_XDF_Mil_Cap_Research: H_MilCap_blue
	{
		author="Radium";
		scope=2;
		displayName="XDF Military Cap (Research)";
		descriptionShort="No Armor<br/>XDF research military cap."
		picture="\SSU_Black_Hats\UI\Icon_SSU_Cap_HS_Black.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Mil_Cap_Research.paa"
		};
	};
	class H_XDF_Beret: H_Beret_02
	{
		author="Radium";
		scope=2;
		displayName="XDF Beret";
		descriptionShort="No Armor<br/>XDF military cap."
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
		descriptionShort="No Armor<br/>XDF Beret with Wolf insignia."
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Beret_Wolf.paa"
		};
	};
	class H_XDF_Beret_Research: H_Beret_02
	{
		author="Radium";
		scope=2;
		displayName="XDF Beret (Research)";
		descriptionShort="No Armor<br/>XDF Beret with Research insignia."
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Research_Beret.paa"
		};
	};
	class H_XDF_Jet_Pilot_Helmet: H_PilotHelmetFighter_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Experimental Jet Helmet";
		descriptionShort="Armor Level III<br/>Experimental XDF jet helmet designed to be paired with aircraft AR interfaces, providing superior visiblity and performance."
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
		descriptionShort="Armor Level II<br/>Protective helmet for helicopter pilots."
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
		descriptionShort="Armor Level II<br/>Protective helmet for helicopter crews."
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
		descriptionShort="Armor Level III<br/>Protective helmet for vehicle crews."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Helmet_Crew_Black.paa"
		};
	};
	class H_XDF_Helmet_Crew_Black_Shieldmaiden: H_HelmetCrew_B
	{
		author="Radium";
		scope=2;
		displayName="XDF Crew Helmet (Shieldmaiden)";
		descriptionShort="Armor Level III<br/>Protective helmet for vehicle crews.<br/>Personalised for Operative Shieldmaiden."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Helmet_Crew_Black_Shieldmaiden.paa"
		};
	};
	class H_HelmetAggressor_F;
	class H_XDF_Aggressor: H_HelmetAggressor_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Aggressor Helmet";
		descriptionShort="Armor Level III<br/>Specialised offensive XDF helmet for rapid response or raid teams."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Aggressor_co.paa"
		};
	};
	class H_HelmetAggressor_cover_F;
	class H_XDF_Aggressor_cover: H_HelmetAggressor_cover_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Aggressor Helmet (Nanowrap Cover)";
		descriptionShort="Armor Level III<br/>Specialised offensive XDF helmet for rapid response or raid teams, covered with protective nanowrap."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Aggressor_co.paa"
		};
	};
	class H_XDF_Aggressor_Temperate_cover: H_HelmetAggressor_cover_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Aggressor Helmet (Temperate Cover)";
		descriptionShort="Armor Level III<br/>Specialised offensive XDF helmet for rapid response or raid teams, covered with protective nanowrap in a temperate camo scheme."
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_Aggressor_Temperate_co.paa"
		};
	};
	class H_HelmetB;
	class H_HelmetO_ocamo: H_HelmetB
	{ 
		class ItemInfo; 
	};
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo
	{ 
		class ItemInfo; 
	};
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo
	{ 
		class ItemInfo; 
	};
	class H_XDF_ASH_Assassin: H_HelmetSpecO_ocamo
	{
		author="Radium";
		scope=2;
		displayName="XDF ASH Helmet (Single P.R.I.S.M)";
		descriptionShort = "Armor Level IV<br/>The ASH is an advanced, bleeding-edge XDF helmet using special composites for superior protection.<br/>This model has one P.R.I.S.M Heads-Up Display unit deployed, enabling advanced imaging.";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_ASH_Combat_Helmet_Black.paa"
		};
		subItems[] = {"XDF_Integrated_NV_TI"};
		class ItemInfo: ItemInfo
		{
			mass = 65;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 15;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_ASH_Defender: H_HelmetLeaderO_ocamo
	{
		author="Radium";
		scope=2;
		displayName="XDF ASH Helmet (Dual P.R.I.S.M)";
		descriptionShort = "Armor Level IV<br/>The ASH is an advanced, bleeding-edge XDF helmet using special composites for superior protection.<br/>This model has both P.R.I.S.M Heads-Up Display units deployed, enabling advanced imaging.";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_ASH_Combat_Helmet_Black.paa"
		};
		subItems[] = {"XDF_Integrated_NV_TI"};
		class ItemInfo: ItemInfo
		{
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 15;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_XDF_ASH_Protector: H_HelmetO_ocamo
	{
		author="Radium";
		scope=2;
		displayName="XDF ASH Helmet (Retracted P.R.I.S.M)";
		descriptionShort = "Armor Level IV<br/>The ASH is an advanced, bleeding-edge XDF helmet using special composites for superior protection.<br/>This model has both P.R.I.S.M Heads-Up Display units retracted.";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\helmets\H_XDF_ASH_Combat_Helmet_Black_PRISM_Off.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 15;
					passThrough = 0.5;
				};
			};
		};
	};

	// Thermals //
	class NVGoggles;
	class XDF_Integrated_NV_TI: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {2};
		modelOptics = "";
	};

	// Infantry Items //
	
	class ItemGPS;
	class ItemDatalinkDisplay: ItemGPS
	{
		author = "Radium";
		scope = 2;
		displayName = "Datalink Display";
		descriptionUse = "<t color='#9cf953'>Use: </t>View Datalink";
		simulation = "ItemGPS";
		picture = "\xdf\retextures\xdf_uniform\gear_item_dd_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "Allows ground units to tap into datalink intranet and receive target data, as well as access GPS.";
		class ItemInfo
		{
			mass = 16;
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={200,400,800,1600,3200,6400};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={200,400,800,1600,3200,6400};
						resource="RscCustomInfoSensors";
					};
				};
			};
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
		descriptionShort = "AX Assault Rifle<br/>The XDF's faithful service rifle.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
			2,
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
		descriptionShort = "AX Assault Rifle<br/>The XDF's faithful service rifle.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
			2,
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
		descriptionShort = "AX Assault Rifle<br/>The XDF's faithful service rifle - with an underbarrel shotgun for putting down xenos with prejudice.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
			2,
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
		descriptionShort = "AX Marksman Rifle<br/>The XDF's faithful service rifle with an extended barrel.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
			2,
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
		descriptionShort = "AX Experimental Assault Rifle<br/>An experimental XDF weapon, the Type 115 chambers the standard 6.5 AX round while packing a serious punch with its underbarrel .50 BW.<br/>Caliber: 6.5x39 mm / .50 BW - Experimental AX Chamber Upgrade";
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
				2.5,
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
		descriptionShort = "AX Assault Rifle<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Carbine<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
		descriptionShort = "AX Light Machinegun<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>Modular and reliable.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Light Machinegun<br/>Modular and reliable.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>Modular and reliable.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
		descriptionShort = "AX Assault Rifle<br/>A gift from the XDF's eastern partners - though don't tell them it doesn't quite rival the Spearhead.<br/>Caliber: 5.8x42 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A gift from the XDF's eastern partners - though don't tell them it doesn't quite rival the Spearhead.<br/>Caliber: 5.8x42 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
		descriptionShort = "AX Light Machinegun<br/>A gift from the XDF's eastern partners - though don't tell them it doesn't quite rival the Spearhead.<br/>Caliber: 5.8x42 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A modernised AK platform to get the job done.<br/>Caliber: 7.62x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A modernised AK platform to get the job done.<br/>Caliber: 7.62x39 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
		descriptionShort = "AX Carbine<br/>A modernised AK platform to get the job done.<br/>Caliber: 7.62x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Light Machinegun<br/>A modernised AK platform to get the job done.<br/>Caliber: 7.62x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A compact bullpup, though with contentious reliability.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A compact bullpup, though with contentious reliability.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
		descriptionShort = "AX Carbine<br/>A compact bullpup, though with contentious reliability.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>A proven platform - it is only fitting that this rifle find itself alongside weapons such as the Spearhead.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
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
			2,
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
		displayName="XDF CTAR-21 EGLM";
		descriptionShort = "AX Assault Rifle<br/>A proven platform - it is only fitting that this rifle find itself alongside weapons such as the Spearhead.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
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
				3,
				1,
				10
			};
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\trg_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};
	class arifle_Mk20_F;
	class arifle_Mk20_XDF: arifle_Mk20_F
	{
		author="Radium";
		scope=2;
		displayName="XDF F2000";
		descriptionShort = "AX Assault Rifle<br/>A modular classic, this rifle is one of the older surplus variants in the XDF arsenal.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
		baseWeapon="arifle_Mk20_XDF";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\f2000\mk20_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\f2000_reload.ogg",
			3,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_XDF: arifle_Mk20_GL_F
	{
		author="Radium";
		scope=2;
		displayName="XDF F2000 EGLM";
		descriptionShort = "AX Assault Rifle<br/>A modular classic, this rifle is one of the older surplus variants in the XDF arsenal.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
		baseWeapon="arifle_Mk20_GL_XDF";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\f2000\mk20_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\f2000\mk20_utilities_co.paa"
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
				"\xdf\sounds\reloads\f2000_gl_reload.ogg",
				3,
				1,
				10
			};
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\f2000_reload.ogg",
			3,
			1,
			10
		};
		magazineWell[] +=
		{
			"STANAG_556x45_XDF"
		};
	};
	class arifle_Mk20C_F;
	class arifle_Mk20C_XDF: arifle_Mk20C_F
	{
		author="Radium";
		scope=2;
		displayName="XDF F2000 Tactical";
		descriptionShort = "AX Carbine<br/>A modular classic, this rifle is one of the older surplus variants in the XDF arsenal.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
		baseWeapon="arifle_Mk20C_XDF";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\f2000\mk20_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\f2000_reload.ogg",
			3,
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
	class SMG_05_F;
	class XDF_SMG_01: SMG_01_F
	{
		author="Radium";
		scope=2;
		displayName="XDF KRISS Vector";
		descriptionShort = "AX Submachinegun<br/>Notorious lead-spitter, name-taker, and nemesis of all close encounters of the third kind.<br/>Caliber: 45 ACP - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_01";
		initSpeed=650;
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
		descriptionShort = "AX Submachinegun<br/>The famed innovative P90, now ticking off killing aliens on its list.<br/>Caliber: 5.7x28 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_03C_black";
		initSpeed=933;
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
		descriptionShort = "AX Submachinegun<br/>The famed innovative P90, now ticking off killing aliens on its list.<br/>Caliber: 5.7x28 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_03C_TR_black";
		initSpeed=933;
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
		descriptionShort = "AX Submachinegun<br/>Despite being the semi-auto civilian variant of the P90, the PS90 still finds itself in welcome hands of XDF military police.<br/>Caliber: 5.7x28 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_03_black";
		initSpeed=933;
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
		descriptionShort = "AX Submachinegun<br/>Despite being the semi-auto civilian variant of the P90, the PS90 still finds itself in welcome hands of XDF military police.<br/>Caliber: 5.7x28 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_03_TR_black";
		initSpeed=933;
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
	class XDF_SMG_05_F: SMG_05_F
	{
		author="Radium";
		scope=2;
		displayName="XDF MP5K";
		descriptionShort = "AX Submachinegun<br/>Although not the most powerful weapon in the XDF arsenal, this compact SMG finds popularity with XDF crew or clandestine spooks.<br/>Caliber: 9x19 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_05_F";
		initSpeed=456;
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\mp5k_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mp5k\smg_05_f_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mp5k\smg_05_f_acc_co.paa"
		};
		magazineWell[] +=
		{
			"SMG_9x21_XDF"
		};
	};
	class hgun_PDW2000_F;
	class XDF_hgun_PDW2000_black: hgun_PDW2000_F
	{
		author="Radium";
		scope=2;
		displayName="XDF CPW";
		descriptionShort = "AX Submachinegun<br/>A compact personal defense weapon used by XDF military security.<br/>Caliber: 9x19 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_hgun_PDW2000_black";
		initSpeed=477;
		hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\pdw2000_reload.ogg",
			2,
			1,
			10
		};
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\weapons\pdw2000\battlesight_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_handle_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\pdw2000\pdw2000_ammo_ca.paa",
			"\xdf\retextures\xdf_uniform\weapons\pdw2000\pdw2000_co.paa"
		};
		magazineWell[] +=
		{
			"SMG_9x21_XDF"
		};
	};
	class SMG_02_F;
	class XDF_SMG_02: SMG_02_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Scorpion Evo 3 A1";
		descriptionShort = "AX Submachinegun<br/>A lightweight submachinegun, used by XDF helicopter crews or close-quarters teams as an alternative to the Vector.<br/>Caliber: 9x19 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_SMG_02";
		initSpeed=510;
		hiddenSelections[] = {"camo", "camo1"};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\scorpion_reload.ogg",
			2,
			1,
			10
		};
			
		hiddenSelectionsTextures[] = 
		{
			"\xdf\retextures\xdf_uniform\weapons\scorpion\smg_02_CO.paa",
			"\xdf\retextures\xdf_uniform\weapons\scorpion\smg_02_ammo_CA.paa"
		};
		magazineWell[] +=
		{
			"SMG_9x21_XDF"
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
		descriptionShort = "AX Pistol<br/>In the light of the escalating xeno-threat, sidearms are nothing more than comfort pieces in the modern age. But, it does look cool.<br/>Caliber: 9 mm - Experimental AX Chamber Upgrade";
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
	class hgun_Rook40_F;
	class XDF_hgun_Rook40_F: hgun_Rook40_F // 16Rnd_9x21_Mag
	{
		author="Radium";
		scope=2;
		displayName="XDF MP-443 Grach";
		descriptionShort = "AX Pistol<br/>In the light of the escalating xeno-threat, sidearms are nothing more than comfort pieces in the modern age. But, it does look cool.<br/>Caliber: 9 mm - Experimental AX Chamber Upgrade";
		baseWeapon="XDF_hgun_Rook40_F";
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
			"\xdf\retextures\xdf_uniform\weapons\rook40\rook40_co.paa"
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
		descriptionShort = "AX Pistol<br/>A modified variant of an iconic firearm - adding an intergalactic war to its list.<br/>Caliber: 45 ACP - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Pistol<br/>Standard-issue XDF infantry pistol.<br/>Caliber: 45 ACP - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Revolver<br/>Research And Development decided self-loading pistols were so 21st century, and cooked up this deadly alien killer. Watch the heavy recoil and the slow reload, though.<br/>Caliber: 45 ACP - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>A lighter marksman rifle marketing itself as a capable infantry weapon in close and medium ranges.<br/>Caliber: 7.62x51 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>As this rifle's name suggests - bad news lies ahead for anyone on the receiving end of this .338 sharpshooter.<br/>Caliber: .338 Lapua Magnum - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Sniper Rifle<br/>Who knew a hard target interceptor would be so good at hunting aliens?<br/>Caliber: 12.7x108 mm - Experimental AX Chamber Upgrade";
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
	class XDF_srifle_GM6_railgun: srifle_GM6_F
	{
		author="Radium";
		scope=2;
		displayName="XDF HTI-X Caracal Railgun";
		descriptionShort = "AX Railgun<br/>A truly impressive invention by XDF RD - a total conversion of the standard HTI Caracal into possibly the deadliest handheld infantry weapon in the XDF arsenal.<br/>The Caracal Railgun chambers a 20 mm sabot containing a solid metal slug made out of heavy alien alloy.<br/>This round can be optionally tipped with the same semi-liquid mixture used in anti-xeno missiles, though in significantly smaller amounts.<br/>An advanced electromagnetic rail system uses an exotic nanobattery stored in the weapon's stock for charging, and is capable of propelling the shot at 2,500m/s.<br/>Charging starts immediately upon loading a round and is held via graphene capacitors, ensuring instantaneous firing, while the reciprocating barrel forces some kinetic energy back into the system.<br/>The exotic nanobattery houses enough energy for prolonged engagements, and often exceeds the amount of ammo an operator could carry.<br/>Needless to say, even glancing blows with this weapon are extremely destructive.<br/>Caliber: 20mm SABOT / 12 mm slug - Electromagnetic Rail";
		baseWeapon="XDF_srifle_GM6_railgun";
		recoil="recoil_gm6_railgun";
		mass=310; // default 253
		initSpeed=2500;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\gm6\gm6_rail_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\gm6_rail_reload.ogg",
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
					"XDF_GM6LynxRail_Shot_SoundSet",
					"Mantis_tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
		};
		magazines[]=
		{
			"1Rnd_127x108_APDSRG_Mag_blue_tracer",
			"1Rnd_127x108_APDSHERG_Mag_blue_tracer"
		};
		magazineWell[]=
		{
			"GM6Rail_127x108_XDF"
		};
	};
	class XDF_srifle_DMR_05_blk: srifle_DMR_05_blk_F
	{
		author="Radium";
		scope=2;
		displayName="XDF Nova";
		descriptionShort = "AX Marksman Rifle<br/>Chambered in the same caliber as the HK121, this high caliber rifle puts threats down with purpose.<br/>Caliber: 9.3x64 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>While subsonic rifles are not that useful against the xeno-threat, it is not rare that the XDF finds itself up against a conventional, near-peer enemy.<br/>Caliber: 12.7x54 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Sniper Rifle<br/>While not intended for use against alien forces, AX ammunition proves significantly useful against hostile human forces too.<br/>Caliber: .408 - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Assault Rifle<br/>As XDF RD proves itself a consistent fan of bullpups, this eastern rifle was suggested to bridge the gap between assault and marksman rifles in theaters where it is more easily acquired.<br/>Caliber: 7.62x54 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Battle Rifle<br/>A modernised battle rifle enhanced with an AX munition-compatible chamber.<br/>Caliber: 7.62x51 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>While predominantly a marksman rifle, the HK417's familiar controls and ergonomics make it an effective - albeit not very ideal - choice in close quarters.<br/>Caliber: 7.62x51 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Marksman Rifle<br/>An eastern rifle, with capabilities often better surpassed by newer XDF weapons.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
		descriptionShort = "AX Medium Machinegun<br/>Chambered in the same round as the Nova, this machinegun - albeit heavy - is deadly when deployed correctly by XDF assault forces.<br/>Caliber: 9.3x64 mm - Experimental AX Chamber Upgrade";
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
			3,
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
		descriptionShort = "AX Medium Machinegun<br/>With tighter accuracy tolerances, more controllable firerate than the HK121, and similar punch, this machinegun is often preferred by XDF overwatch teams.<br/>Caliber: .338 Norma Magnum - Experimental AX Chamber Upgrade";
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
			3,
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
		descriptionShort = "AX Light Machinegun<br/>A light 5.56 machinegun favored for its portability, accuracy, and reliability.<br/>Caliber: 5.56x45 mm - Experimental AX Chamber Upgrade";
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
			3,
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
		descriptionShort = "AX Light Machinegun<br/>The Stoner 99 is a light machinegun better suited for close-quarters combat.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
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
			3,
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
		descriptionShort = "AX Recoilless Rifle<br/>Anti-xeno recoilless rifle with the necessary changes to fire experimental rounds.<br/>Caliber: 84 mm MAAWS Rounds - Experimental AX Upgrade<br/>Thermobaric Round Capable";
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
			4,
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
		descriptionShort = "AX Missile Launcher<br/>Heavy anti-armor, wire-guided launcher used by special AT teams.<br/>Caliber: 130 mm Metis Missiles - Experimental AX Upgrade";
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
			4,
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
		displayName="XDF Lance AA";
		descriptionShort = "AX Anti-Air Launcher<br/>Man-portable anti-xeno air defense launcher.<br/>Caliber: 127 mm Lance Missiles - Experimental AX Upgrade";
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
			4,
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
		displayName="XDF Spear AT";
		descriptionShort = "AX Anti-Tank Launcher<br/>Man-portable anti-xeno, anti-tank launcher.<br/>Caliber: 127 mm Spear Missiles - Experimental AX Upgrade";
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
			4,
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
		descriptionShort = "AX Recoilless Rifle<br/>Anti-xeno recoilless rifle with the necessary changes to fire experimental rounds.<br/>Caliber: 105 mm Hammer Rounds - Experimental AX Upgrade<br/>Thermobaric Round Capable";
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
			4,
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

	// Custom Weapons
	class arifle_MX_Base_F;
	class XDF_Mantis: arifle_MX_Base_F
	{
		author="Radium";
		baseWeapon="XDF_Mantis";
		scope=2;
		displayName="XDF R-31 Mantis";
		descriptionShort="Prototype Assault Railgun<br/>The Mantis is a cutting-edge XDF prototype weapon, designed to be the next generation of standard-issue infantry portable weapon for XDF operatives.<br/>Designated as an 'assault railgun', the Mantis uses a rapid-charging electromagnetic rail to deliver solid 10mm slugs at 1100m/s,<br/>while a 50 round magazine with its complex internal delivery and loading mechanism gives it an edge over other handheld railguns in terms of sustained firerate.<br/>Unfortunately, the Mantis is unwieldly and bulky - mainly due to the reinforced design required to house the solid-state battery and charging mechanism derived from alien technology.<br/>On top of that, the Mantis project is exceptionally expensive. While many of these assault railguns are continuing to be produced, the costs involved sadly make the Mantis fall short of becoming standard-issue.<br/>Yet, this railgun's usefulness in combat against the xeno-threat cannot be understated, and remains vital in anti-xeno hunter groups.";
		model="\xdf\weapons\mantis\r31_railgun.p3d";
		picture="\xdf\weapons\mantis\gear_mantis_invl.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_ca.paa";
		class Library
		{
				libTextDesc = "The Mantis is a cutting-edge XDF prototype weapon, designed to be the next generation of standard-issue infantry portable weapon for XDF operatives. Designated as an 'assault railgun', the Mantis uses a rapid-charging electromagnetic rail to deliver solid 10mm slugs at 1100m/s, while a 50 round magazine with its complex internal delivery and loading mechanism gives it an edge over other handheld railguns in terms of sustained firerate. Unfortunately, the Mantis is unwieldly and bulky - mainly due to the reinforced design required to house the solid-state battery and charging mechanism derived from alien technology. On top of that, the Mantis project is exceptionally expensive. While many of these assault railguns are continuing to be produced, the costs involved sadly make the Mantis fall short of becoming standard-issue. Yet, this railgun's usefulness in combat against the xeno-threat cannot be understated, and remains vital in anti-xeno hunter groups.";
		};
		handAnim[] = {"OFP2_ManSkeleton","\xdf\weapons\mantis\railgun_handanim.rtm"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "GestureReloadXDFMantis";
		initSpeed=1100;
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0, 0.2, 1};
		fireLightAmbient[] = {0, 0, 0};
		magazines[] = {"50Rnd_10mm_APDSRG_Mag_blue_tracer"};
		inertia = 1.5;
		dexterity = 0.7;
		maxZeroing = 2000;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "XDF_Mantis_Shroud_Heat_Down";
				positionName = "hv1pos";
				directionName = "hv1dir";
			};
			class SecondEffect
			{
				effectName = "XDF_Mantis_Shroud_Heat_Up";
				positionName = "hv2pos";
				directionName = "hv2dir";
			};
			class ThirdEffect
			{
				effectName = "XDF_Mantis_Muzzle_Sparks";
				positionName = "ms1pos";
				directionName = "ms1dir";
			};
			//class FourthEffect
			//{
			//	effectName = "XDF_Mantis_Muzzle_Sparks";
			//	positionName = "hv1pos";
			//	directionName = "hv1dir";
			//};
			//class FifthEffect
			//{
			//	effectName = "XDF_Mantis_Muzzle_Sparks";
			//	positionName = "hv2pos";
			//	directionName = "hv2dir";
			//};
		};
		magazineWell[]=
		{
			"Mantis_10mm"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\mantis_reload.ogg",
			4.5,
			1,
			10
		};
		changeFiremodeSound[] = 
		{
			"\xdf\sounds\shot\mantis\mantis_firemode.ogg", 
			0.9, 
			1, 
			5
		};
		drySound[]=
		{
			"\xdf\sounds\shot\mantis\mantis_dry.ogg",
			0.6,
			1,
			10
		};
		modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.12;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00015;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mantis_shot_SoundSet", "Mantis_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.12;
			dispersion = 0.00015;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mantis_shot_SoundSet", "Mantis_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 353;
			class MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.37, 0.24};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.21, 0.38};
				iconScale = 0.2;
			};
			class UnderBarrelSlot
			{
			};
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
	class arifle_MX_XDF_F: arifle_MX_XDF // ACR-X2
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
	class arifle_MXC_XDF_F: arifle_MXC_XDF // ACR-X2 Carbine
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
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1800;
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
		magazines[]+=
		{
			"200Rnd_65x39_Belt_blue",
			"2000Rnd_65x39_Belt_blue"
		};
		class manual: MGun
		{
			displayName="LMG AX Minigun";
			class StandardSound
			{
				//begin1[] = {"\xdf\sounds\shot\axminigun\AX_Minigun_shot1.ogg", 1, //1, 2000};
				//begin2[] = {"\xdf\sounds\shot\axminigun\AX_Minigun_shot2.ogg", 1, //1.1, 2000};
				//begin3[] = {"\xdf\sounds\shot\axminigun\AX_Minigun_shot3.ogg", 1, //0.9, 2000};
				//soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				//closure1[] = {"\xdf\sounds\shot\axminigun\AX_Minigun_spin1.ogg", 0.//316228, 1, 20};
				//closure2[] = {"\xdf\sounds\shot\axminigun\AX_Minigun_spin2.ogg", 0.//316228, 1, 20};
				//soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundsetshot[] = {"AX_Minigun_Shot_SoundSet", "AX_Minigun_Tail_SoundSet"};
			};
			soundContinuous=0;
			soundBurst=0;
			multiplier=3;
			reloadTime=0.033333302;
			dispersion=0.0015;
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
	class LMG_Minigun_AX2: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun2_eject_pos";
				directionName="machinegun2_eject_dir";
				effectName="MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName="machinegun2_end";
				directionName="machinegun2_beg";
				effectName="MachineGun1";
			};
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
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				//begin1[] = {"\xdf\sounds\shot\axminigun\axminigun_shot1.ogg", 1, 1, 2000};
				//begin2[] = {"\xdf\sounds\shot\axminigun\axminigun_shot2.ogg", 1, 1.1, 2000};
				//begin3[] = {"\xdf\sounds\shot\axminigun\axminigun_shot3.ogg", 1, 0.9, 2000};
				//soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				//closure1[] = {"\xdf\sounds\shot\axminigun\axminigun_spin1.ogg", 0.316228, 1, 20};
				//closure2[] = {"\xdf\sounds\shot\axminigun\axminigun_spin2.ogg", 0.316228, 1, 20};
				//soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundsetshot[] = {"AX_Minigun_Shot_SoundSet", "AX_Minigun_Tail_SoundSet"};
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
	class LMG_Minigun_AX_HE2: LMG_Minigun_AX_HE
	{
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun2_eject_pos";
				directionName="machinegun2_eject_dir";
				effectName="MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName="machinegun2_end";
				directionName="machinegun2_beg";
				effectName="MachineGun1";
			};
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
				10,
				1,
				20
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
				10,
				1,
				20
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
	class HMG_127;
	class HMG_127_AX: HMG_127
	{
		//displayName="";
		magazines[]+=
		{
			"100Rnd_127x99_mag_Tracer_Blue"
		};
	};
	class missiles_Firefist;
	class missiles_Firefist_AX: missiles_Firefist
	{
		displayName="Inferno Missile Launcher";
		magazines[]+=
		{
			"2Rnd_127mm_Firefist_AX_missiles"
		};
	};
	class missiles_SAAMI;
	class missiles_SAAMI_AX: missiles_SAAMI
	{
		displayName="Aegis ADS Launcher";
		magazines[]+=
		{
			"4Rnd_70mm_SAAMI_AX_missiles"
		};
	};
	class autocannon_Base_F;
	class cannon_20mm;
	class cannon_20mm_AX: cannon_20mm
	{
		class HE: cannon_20mm
		{
			displayName="AX Cannon 20mm";
			magazines[]=
			{
				"60Rnd_20mm_HE_AX_shells"
			};
		};
		class AP: cannon_20mm
		{
			displayName="AX Cannon 20mm";
			magazines[]=
			{
				"60Rnd_20mm_AP_AX_shells"
			};
		};
	};
	class LMG_coax_ext;
	class LMG_AX_coax_ext: LMG_coax_ext
	{
		magazines[]+=
		{
			"200Rnd_762x51_Belt_Blue"
		};
	};
	class weapon_VLSBase;
	class weapon_VLS_01: weapon_VLSBase
	{
		class Cruise;
	};
	class weapon_VLS_XDF_01: weapon_VLS_01
	{
		displayName="VENATOR VLS";
		magazineReloadTime=30;
		reloadTime=4;
		magazines[]=
		{
			"magazine_XDF_Missile_Cruise_Thermobaric_01_x18",
			"magazine_Missiles_Cruise_01_x18"
		};
		class Cruise: Cruise
		{
		};
		class EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class weapon_LGBLauncherBase;
	class Bomb_04_Plane_CAS_01_F: weapon_LGBLauncherBase
	{
		class LoalAltitude;
	};
	class Bomb_04_Plane_XDF_01_F: Bomb_04_Plane_CAS_01_F
	{
		displayName="$STR_A3_CFGMAGAZINES_GBU120";
		magazines[]+=
		{
			"magazine_1Rnd_Bomb_Thermobaric_F"
		};
		holdsterAnimValue=6;
		class LoalAltitude: LoalAltitude
		{
			displayName="$STR_A3_CFGMAGAZINES_GBU120";
		};
	};

	// Attachments
	class optic_Nightstalker;
	class optic_Mantis_Scope: optic_Nightstalker
	{
		author="Radium";
		displayName="Tharsis Hybrid Combat Scope"
		descriptionShort="The Tharsis HCS is a next-generation multirole combat optic designed to be used with the R-31 Mantis railgun platform, but is compatible with other rail systems.<br/>Equipped with a FALCON Opus hybrid optical rangefinder and target resolver, the Tharsis scope is capable of identifying targets up to 2 kilometres.<br/>A delicate and complex multi-phase lens is paired with a bulky electronics package to give the scope crystal-clear infrared and thermal imaging capabilities.<br/>Paired with an alien-derived solid-state battery and electronically controlled zeroing, the Tharsis can hold zero for millions of rounds and power its electronics indefinitely.<br/>Solid-state battery has been the subject of more than one internal safety review, which cited 'explosive hazard concerns' when mounted to particularly compact devices.<br/>The XENOCOM board ultimately ruled that solid-state batteries are 'acceptably safe' for combat usage."
		model="\xdf\weapons\mantis\mantis_scope.p3d";
		picture="\xdf\weapons\mantis\tharsis_inv_icon.paa";
		modelOptics="\xdf\weapons\mantis\mantis_scope.p3d";
		weaponInfoType="RscOptics_TharsisScope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=18;
			opticType=1;
			optics=1;
			modelOptics="\xdf\weapons\mantis\mantis_scope.p3d";
			class OpticsModes
			{
				class Tharsis_ScopeView
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.001;
					opticsZoomMax=0.25;
					opticsZoomInit=0.25;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					modelOptics[]={"\xdf\weapons\mantis\mantis_tharsisHCSoptic"};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: Tharsis_ScopeView
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					discreteDistance[]={50};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
				};
			};
		};
		inertia=0.2;
	};
};
