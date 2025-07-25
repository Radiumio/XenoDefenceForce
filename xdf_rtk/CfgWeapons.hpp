
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
		picture="\xdf_rtk\templarIcon.paa";
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
		picture="\xdf_rtk\templarIcon.paa";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection, though some load-bearing capacity is sacrificed to support the weight of the armor.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply350";
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
		picture="\xdf_rtk\templarIcon.paa";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection, though some load-bearing capacity is sacrificed to support the weight of the armor.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply350";
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
		picture="\xdf_rtk\templarIcon.paa";
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype exoskeleton. Offers impressive ballistic protection, though some load-bearing capacity is sacrificed to support the weight of the armor.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Armor.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Exoskeleton.paa",
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply350";
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
		descriptionShort = "Armor Level X<br/>Advanced next-generation XDF prototype helmet, designed to be paired with the Templar exoskeleton. Visor offers real-time target highlighting, with night-vision and thermal imaging integration.";
		picture="\xdf_rtk\templarIcon.paa";
		subItems[] = {"XDF_Integrated_NV_TI"};
		hiddenSelectionsTextures[] = 
		{
			"\xdf_rtk\retextures\xdf_uniform\helmets\H_XDF_Templar_Helmet.paa"
		};
	};
};