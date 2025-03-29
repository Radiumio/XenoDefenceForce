
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class Ratnik3Black_Uniform;
	class U_XDF_Templar_Undersuit: Ratnik3Black_Uniform
	{
		author="Moose & Radium";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Templar Undersuit";
		descriptionShort = "Undersuit designed to be used with the prototype Templar protective exoskeleton.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\uniforms\U_XDF_Templar_Undersuit.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Templar_Undersuit";
			containerClass="Supply40";
			//mass=40;
		};
	};
	class Ratnik_Torso_Base;
	class Ratnik_Armor: Ratnik_Torso_Base
	{
		class ItemInfo;
	};
	class Ratnik_ArmorAttachments: Ratnik_Torso_Base
	{
		class ItemInfo;
	};
	class Ratnik_ArmorAttachmentsNS: Ratnik_Torso_Base
	{
		class ItemInfo;
	};
	class V_XDF_Templar_Armor: Ratnik_Armor
	{
		author="Moose & Radium";
		scope=2;
		displayName="XDF Templar Exoskeleton";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection while granting the operator exceptional load-bearing capability.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa"
			};
		};
	};
	class V_XDF_Templar_Armor_Attach: Ratnik_ArmorAttachments
	{
		author="Moose & Radium";
		scope=2;
		displayName="XDF Templar Exoskeleton (Attachments)";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection while granting the operator exceptional load-bearing capability.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
			};
		};
	};
	class Ratnik_ArmorAttachmentsNS;
	class V_XDF_Templar_Armor_Attach_NS: Ratnik_ArmorAttachmentsNS
	{
		author="Moose & Radium";
		scope=2;
		displayName="XDF Templar Exoskeleton (Attachments, No Shoulders)";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection while granting the operator exceptional load-bearing capability.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
				"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
			};
		};
	};
	class Ratnik_HelmetBlack;
	class H_XDF_Templar_Helmet: Ratnik_HelmetBlack
	{
		displayName = "XDF Templar Helmet";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rtk\retextures\xdf_uniform\helmets\H_XDF_Templar_Helmet.paa"
		};
	};
};