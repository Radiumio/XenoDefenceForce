class CfgRecoils
{
	class recoil_default;
	class recoil_pistol_nemesis: recoil_default
	{
		muzzleOuter[]={0.2,1.7,0.5,0.4};
		kickBack[]={0.09,0.1};
		temporary=0.15;
	};
	class recoil_gm6_railgun: recoil_default
	{
		//muzzleOuter[]={1.4,3.5,0.69999999,0.80000001};
		//kickBack[]={0.1,0.12};
		//temporary=0.025;
		muzzleOuter[]={1.9,4.0,1.0,1.1};
		kickBack[]={0.25,0.28};
		temporary=0.025;
	};
};