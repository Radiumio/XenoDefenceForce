class CfgMagazines
{
	class Titan_AA;
	class Titan_AA_XDF: Titan_AA
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Lance Round";
		displayNameShort="EXP-HE";
		ammo="M_Titan_AA_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		mass=150;
	};
	class Titan_AT;
	class Titan_AT_XDF: Titan_AT
	{
		author="Radium";
		scope=2;
		displayName="127mm Experimental Spear Round";
		displayNameShort="EXP-HEAT";
		ammo="M_Titan_AT_XDF";
		type="6 * 		256";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		count=1;
		mass=150;
	};
	class MRAWS_HEAT_F;
	class MRAAWS_HEAT_XDF: MRAWS_HEAT_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 75";
		displaynameshort="EXP-HEAT";
		ammo="R_MRAAWS_HEAT_XDF";
		mass=100;
	};
	class MRAWS_HEAT55_F;
	class MRAAWS_HEAT55_XDF: MRAWS_HEAT55_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 55";
		displaynameshort="EXP-HEAT55";
		ammo="R_MRAAWS_HEAT55_XDF";
		mass=80;
	};
	//class MRAWS_HE_F;
	//class MRAAWS_HE_NUKE_XDF: MRAWS_HE_F
	//{
	//	author="Radium";
	//	scope=2;
	//	displayName="MAAWS Experimental Nuclear Round";
	//	displaynameshort="EXP-NUKE";
	//	ammo="R_MRAAWS_HE_NUKE_XDF";
	//	mass=250;
	//};
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