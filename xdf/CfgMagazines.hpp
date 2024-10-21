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
		mass=200;
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
		mass=200;
	};
	class Vorona_HEAT;
	class Vorona_HEAT_XDF: Vorona_HEAT
	{
		author="Radium";
		scope=2;
		displayName="9M135 Experimental HEAT";
		displayNameShort="EXP-HEAT";
		ammo="M_Vorona_HEAT_XDF";
		mass=180;
		count=1;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class MRAWS_HEAT_F;
	class MRAAWS_HEAT_XDF: MRAWS_HEAT_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 75";
		displaynameshort="EXP-HEAT";
		ammo="R_MRAAWS_HEAT_XDF";
		mass=120;
	};
	class MRAWS_HEAT55_F;
	class MRAAWS_HEAT55_XDF: MRAWS_HEAT55_F
	{
		author="Radium";
		scope=2;
		displayName="MAAWS Experimental HEAT 55";
		displaynameshort="EXP-HEAT55";
		ammo="R_MRAAWS_HEAT55_XDF";
		mass=100;
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

	// vehicles
	class VehicleMagazine;
	class 20Rnd_125mm_APFSDS;
	class 12Rnd_125mm_APFSDS_T_Blue_AX: 20Rnd_125mm_APFSDS
	{
		author="Radium";
		displayName="125mm APFSDS-AX";
		displaynameshort="APFSDS-AX";
		displayNameMFDFormat="AX";
		ammo="Sh_125mm_APFSDS_T_Blue_XDF";
		count=12;
		tracersEvery=1;
	};
	class 1000Rnd_20mm_GPR_shells: VehicleMagazine
	{
		author="Radium";
		scope=2;
		displayName="20mm AX Shells";
		displayNameShort="GPR-AX";
		displayNameMFDFormat="GPR-AX";
		ammo="B_20mm_GPR_AX";
		count=1000;
		initSpeed=1035;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class 60Rnd_75mm_RailGun_APFSDS_mag;
	class 45Rnd_75mm_RailGun_APFSDS_AX_mag: 60Rnd_75mm_RailGun_APFSDS_mag
	{
		scope=2;
		count=45;
		maxLeadSpeed=300;
		ammo="Sh_75mm_Railgun_APFSDS_AX";
		initSpeed=3000;
		nameSound="cannon";
		displayName="75mm APFSDS-AXKE";
		displayNameShort="APFSDS-AXKE";
		displayNameMFDFormat="RG-AX";
		muzzleImpulseFactor[]={2,1};
	};
	class AX_RailGun_01_DummyMagazine: 45Rnd_75mm_RailGun_APFSDS_AX_mag
	{
		ammo="Sh_75mm_Railgun_APFSDS_AX_fake";
		muzzleImpulseFactor[]={0,0};
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