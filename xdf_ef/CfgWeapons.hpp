class ItemInfo;
class GL_3GL_F;
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
		descriptionShort = "Standard marine uniform for maritime combat operations.";
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
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves variant.";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Winter: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves, Winter)";
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_winter_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Winter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Pads: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Pads)";
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves and kneepads variant.";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Pads";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Pads_Winter: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Pads/Winter)";
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves and kneepads variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_winter_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Pads_Winter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Rolled: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Rolled)";
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves and rolled sleeves variant.";
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
		descriptionShort = "Standard marine uniform for maritime combat operations. Gloves, rolled sleeves, and kneepads variant.";
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
		descriptionShort = "Standard marine uniform for maritime combat operations. Rolled sleeves variant.";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class EF_U_B_MarineCombatUniform_Diver_Des;
	class U_XDF_Marine_Diver: EF_U_B_MarineCombatUniform_Diver_Des
	{
		displayName="XDF Marine Diver Uniform";
		descriptionShort = "Standard marine neoprene uniform for naval operations.";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Diver";
			containerClass="Supply40";
			uniformType = "Neopren";
			mass=40;
		};
	};
	class EF_V_AAV_Black;
	class V_XDF_AAV: EF_V_AAV_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Winter: V_XDF_AAV
	{
		author="Radium";
		displayName="XDF Marine Vest (Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa"
		};
	};
	class V_XDF_AAV_Core: EF_V_AAV_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Coremanite)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch.<br/>Personalised for Operative Coremanite.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co_core.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Winter_Core: V_XDF_AAV_Core
	{
		author="Radium";
		displayName="XDF Marine Vest (Coremanite, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Winter camo.<br/>Personalised for Operative Coremanite.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_core.paa"
		};
	};
	class EF_V_AAV_Rifleman_Black;
	class V_XDF_AAV_Rifleman: EF_V_AAV_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Rifleman)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Rifleman variant.";
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
	class V_XDF_AAV_Rifleman_Winter: V_XDF_AAV_Rifleman
	{
		author="Radium";
		displayName="XDF Marine Vest (Rifleman, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Rifleman variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Scout: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Scout)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Scout variant.";
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
	class V_XDF_AAV_Scout_Winter: V_XDF_AAV_Scout
	{
		author="Radium";
		displayName="XDF Marine Vest (Scout, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Scout variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class V_XDF_AAV_Scout_Maple: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Scout, Maple)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Scout variant.<br/>Personalised for Operative Maple.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co_Maple.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Scout_Winter_Maple: V_XDF_AAV_Scout_Maple
	{
		author="Radium";
		displayName="XDF Marine Vest (Scout, Maple, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Scout variant. Winter camo.<br/>Personalised for Operative Maple.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_Maple.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Medic: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Medic)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Medic variant.";
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
	class V_XDF_AAV_Medic_Winter: V_XDF_AAV_Medic
	{
		author="Radium";
		displayName="XDF Marine Vest (Medic, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Medic variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_med_vest_winter_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Support_Black;
	class V_XDF_AAV_Support: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Support variant.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Support_Winter: V_XDF_AAV_Support
	{
		author="Radium";
		displayName="XDF Marine Vest (Support, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Support variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa"
		};
	};
	class V_XDF_AAV_Support_Shieldmaiden: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support, Shieldmaiden)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Support variant.<br/>Personalised for Operative Shieldmaiden.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co_Shieldmaiden.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Support_Winter_Shieldmaiden: V_XDF_AAV_Support_Shieldmaiden
	{
		author="Radium";
		displayName="XDF Marine Vest (Support, Shieldmaiden, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Support variant. Winter camo.<br/>Personalised for Operative Shieldmaiden.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_Shieldmaiden.paa"
		};
	};
	class EF_V_AAV_TL_Black;
	class V_XDF_AAV_TL: EF_V_AAV_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Team Leader)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Team Leader variant.";
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
	class V_XDF_AAV_TL_Winter: V_XDF_AAV_TL
	{
		author="Radium";
		displayName="XDF Marine Vest (Team Leader)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Team Leader variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_AAV_Diver_Black;
	class V_XDF_AAV_Diver: EF_V_AAV_Diver_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Diver)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Diver variant.";
		hiddenUnderwaterSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Diver_Black;
	class V_XDF_AAV_Diver_Mask: EF_V_AAV_Diver_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Diver/Mask)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Diver variant.<br/>This variant has the mask always deployed.";
		hiddenUnderwaterSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenUnderwaterSelections[]={"unhide"};
		shownUnderwaterSelections[]={"hide"};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
			hiddenUnderwaterSelections[]={"unhide"};
			shownUnderwaterSelections[]={"hide"};
			hiddenUnderwaterSelectionsTextures[] = 
			{
				"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
				"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
			};
		};
	};
	class EF_V_AAV_Sailor_Black;
	class V_XDF_AAV_Sailor: EF_V_AAV_Sailor_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Sailor)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Sailor variant.";
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
	class V_XDF_AAV_Sailor_Winter: V_XDF_AAV_Sailor
	{
		author="Radium";
		displayName="XDF Marine Vest (Sailor, Winter)";
		descriptionShort = "Armor Level IV<br/>Modernised, slim plate carrier. Plates go in front facing enemy, crayons remain in back pouch. Sailor variant. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_CCR_Rifleman_Black;
	class V_XDF_CCR_Rifleman: EF_V_CCR_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Rifleman)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Rifleman variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_CCR_Rifleman_Winter: V_XDF_CCR_Rifleman
	{
		author="Radium";
		displayName="XDF Commando Rig (Rifleman, Winter)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Rifleman variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_winter_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_winter_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_CCR_Scout_Black;
	class V_XDF_CCR_Scout: EF_V_CCR_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Scout)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Scout variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_CCR_Scout_Winter: V_XDF_CCR_Scout
	{
		author="Radium";
		displayName="XDF Commando Rig (Scout, Winter)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Scout variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_winter_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_winter_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_CCR_Support_Black;
	class V_XDF_CCR_Support: EF_V_CCR_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Support)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Support variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_CCR_Support_Winter: V_XDF_CCR_Support
	{
		author="Radium";
		displayName="XDF Commando Rig (Support, Winter)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Support variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_winter_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_winter_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_V_CCR_TL_Black;
	class V_XDF_CCR_TL: EF_V_CCR_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Team Leader)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Team Leader variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class V_XDF_CCR_TL_Winter: V_XDF_CCR_TL
	{
		author="Radium";
		displayName="XDF Commando Rig (Team Leader, Winter)";
		descriptionShort = "No Armor<br/>Load-bearing chest rig slim plate carrier for operatives of the spooky kind. Team Leader variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_winter_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_winter_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class EF_H_MCH;
	class H_XDF_MCH: EF_H_MCH
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_black_co.paa"
		};
	};
	class H_XDF_MCH_Winter: H_XDF_MCH
	{
		author="Radium";
		displayName="XDF Marine Combat Helmet (Winter)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_winter_co.paa"
		};
	};
	class EF_H_MCH_Basic;
	class H_XDF_MCH_Basic: EF_H_MCH_Basic
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet (ComTacs)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>ComTac variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_black_co.paa"
		};
	};
	class H_XDF_MCH_Basic_Winter: H_XDF_MCH_Basic
	{
		author="Radium";
		displayName="XDF Marine Combat Helmet (ComTacs, Winter)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>ComTac variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_winter_co.paa"
		};
	};
	class EF_H_MCH_BasicNet_Black;
	class H_XDF_MCH_BasicNet: EF_H_MCH_BasicNet_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet (ComTacs, Cover)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>ComTac and Cover variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_black_co.paa"
		};
	};
	class H_XDF_MCH_BasicNet_Winter: H_XDF_MCH_BasicNet
	{
		author="Radium";
		displayName="XDF Marine Combat Helmet (ComTacs, Cover, Winter)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>ComTac and Cover variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_winter_co.paa"
		};
	};
	class EF_H_MCH_Full;
	class H_XDF_MCH_Full: EF_H_MCH_Full
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet (Full, ComTacs)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>Full gear variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_black_co.paa"
		};
	};
	class H_XDF_MCH_Full_Winter: H_XDF_MCH_Full
	{
		author="Radium";
		displayName="XDF Marine Combat Helmet (Full, ComTacs, Winter)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>Full gear variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_winter_co.paa"
		};
	};
	class EF_H_MCH_FullCamo_Black;
	class H_XDF_MCH_FullNet: EF_H_MCH_FullCamo_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet (Full, ComTacs, Cover)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>Full gear and cover variant.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_black_co.paa"
		};
	};
	class H_XDF_MCH_FullNet_Winter: H_XDF_MCH_FullNet
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Combat Helmet (Full, ComTacs, Cover, Winter)";
		descriptionShort = "Armor Level II<br/>Light-weight combat helmet designed for XDF marine forces. Not rated for anti-xeno combat.<br/>Full gear and cover variant. Winter camo.";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_base_winter_co.paa",
			"\xdf_ef\retextures\xdf_uniform\helmets\mch_cover_winter_co.paa"
		};
	};
	class EF_LPNVG;
	class XDF_LPNVG: EF_LPNVG
	{
		author="Radium";
		scope=2;
		displayName="XDF LPNVG G3";
		descriptionShort = "Advanced, light-weight night-vision device.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_co.paa"
		};
	};
	class XDF_LPNVG_White: XDF_LPNVG
	{
		author="Radium";
		displayName="XDF LPNVG G3 (White)";
		descriptionShort = "Advanced, light-weight night-vision device. Plain black and white camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_white_co.paa"
		};
	};
	class XDF_LPNVG_Winter: XDF_LPNVG
	{
		author="Radium";
		displayName="XDF LPNVG G3 (Winter)";
		descriptionShort = "Advanced, light-weight night-vision device. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_winter_co.paa"
		};
	};
	class EF_LPNVG_T;
	class XDF_LPNVG_T: EF_LPNVG_T
	{
		author="Radium";
		scope=2;
		displayName="XDF LPNVG-T G3";
		descriptionShort = "Advanced, light-weight night-vision device with thermal imaging module.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_co.paa"
		};
	};
	class XDF_LPNVG_T_White: XDF_LPNVG_T
	{
		author="Radium";
		displayName="XDF LPNVG-T G3 (White)";
		descriptionShort = "Advanced, light-weight night-vision device with thermal imaging module. Plain black and white camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_white_co.paa"
		};
	};
	class XDF_LPNVG_T_Winter: XDF_LPNVG_T
	{
		author="Radium";
		displayName="XDF LPNVG-T G3 (Winter)";
		descriptionShort = "Advanced, light-weight night-vision device with thermal imaging module. Winter camo.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_winter_co.paa"
		};
	};
	class ef_arifle_mxar;
	class ef_arifle_MXAR_XDF: ef_arifle_mxar
	{
		author="Radium";
		_generalMacro="arifle_MX_Black_F";
		scope=2;
		displayName="XDF ACR-X4AR";
		descriptionShort = "AX Assault Rifle<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series. The X4AR sub-variants sport a heavier barrel and stock for better accuracy and range.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade";
		baseWeapon="ef_arifle_MXAR_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
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
	class ef_arifle_mxar_gl;
	class ef_arifle_MXAR_GL_XDF: ef_arifle_mxar_gl
	{
		author="Radium";
		_generalMacro="arifle_MX_Black_F";
		scope=2;
		displayName="XDF ACR-X4AR 3GL";
		descriptionShort = "AX Assault Rifle<br/>The result of the XDF's 'anti-xeno modernisation' program - the ACR series. The X4AR sub-variants sport a heavier barrel and stock for better accuracy and range.<br/>Caliber: 6.5x39 mm - Experimental AX Chamber Upgrade<br/>Grenade Launcher Attachment";
		baseWeapon="ef_arifle_MXAR_GL_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\glx_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_lmg_co.paa"
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
	class EF_Weapon_Titan_NLOS;
	class EF_Weapon_Titan_NLOS_AX: EF_Weapon_Titan_NLOS
	{
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
		magazines[] += 
		{
			"EF_Magazine_Titan_NLOS_AX_1Rnd", 
			"EF_Magazine_Titan_NLOS_AX_2Rnd",
			"EF_Magazine_Titan_NLOS_AX_4Rnd",
			"EF_PylonMissile_Titan_NLOS_AX_1Rnd", 
			"EF_PylonMissile_Titan_NLOS_AX_2Rnd"
		};
	};
	class EF_missiles_titan_manual;
	class EF_missiles_titan_AX_manual: EF_missiles_titan_manual
	{
		magazines[] += 
		{
			"2Rnd_Titan_AT_XDF_missiles"
		};
	};
	class EF_weapon_SidearmLauncher;
	class EF_weapon_SidearmAXLauncher: EF_weapon_SidearmLauncher
	{
		displayName = "ARM-955M Hyperfox";
		magazines[] +=
		{
			"EF_magazine_Missile_Sidearm_AX_x1",
			"EF_PylonMissile_Missile_Sidearm_AX_x1"
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
};