class CfgMagazines
{
	class Titan_AA;
	class Titan_AA_XDF: Titan_AA
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Lance Round";
		displayNameShort="127MM EXP-HE";
		ammo="M_Titan_AA_XDF";
		type="6 * 		256";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=200;
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
};