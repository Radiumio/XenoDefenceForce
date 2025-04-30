class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		GestureReloadXDFMantis[] = {"GestureReloadXDFMantis","Gesture"};
	};
    //class Actions
    //{
    //    class RifleBaseStandActions;
    //    class RifleProneActions: RifleBaseStandActions
    //    {
    //        GestureReloadXDFMantis = "GestureReloadXDFMantisProne";
    //    };
    //};
};

//class CfgMovesMaleSdr: CfgMovesBasic
//{
//    class States
//    {
//        class RifleReloadProneMX: RifleReloadProneBase
//        {
//            file = "a3\anims_f\data\anim\sdr\gst\gesturereloadmxprone.rtm";
//            speed = 0.37;
//            leftHandIKCurve[] = {0.012,1,0.041,0,0.941,0,0.982,1};
//        };
//    };
//};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadXDFMantis : Default
		{
			file = "\xdf\weapons\mantis\railgun_reload.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
		};
	};
};