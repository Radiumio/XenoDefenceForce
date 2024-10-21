class CfgMagazines
{
	class Titan_AA;
	class Titan_AA_XDF: Titan_AA
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Lance Round";
		displayNameShort="127mm EXP-HE";
		ammo="M_Titan_AA_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=150;
	};
	class Titan_AT;
	class Titan_AT_XDF: Titan_AT
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Spear Round";
		displayNameShort="127mm EXP-HEAT";
		ammo="M_Titan_AT_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=150;
	};
};
class CfgMagazineWells
{
	class Titan_Long_XDF
	{
		BI_Magazines[]=
		{
			"Titan_AA",
			"Titan_AA_XDF"
		};
	};
	class Titan_Short_XDF
	{
		BI_Magazines[]=
		{
			"Titan_AT",
			"Titan_AP",
			"Titan_AT_XDF"
		};
	};
};