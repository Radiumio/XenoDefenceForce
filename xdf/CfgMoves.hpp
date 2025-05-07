class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadXDFMantis = "GestureReloadXDFMantis";
	};
    class Actions
    {
		class NoActions : ManActions {
			GestureReloadXDFMantis[] = {"GestureReloadXDFMantis", "Gesture"};
		};
		class RifleBaseLowStandActions: NoActions {};
        class RifleBaseStandActions: RifleBaseLowStandActions {};
        class RifleProneActions: RifleBaseStandActions {
            GestureReloadXDFMantis[] = {"GestureReloadXDFMantisProne", "Gesture"};
        };
    };
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadXDFMantis : Default
		{
			file = "\xdf\weapons\mantis\railgun_reload.rtm";
			looped = 0;
			speed = 0.22;
			mask = "handsWeapon";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
		};
		class GestureReloadXDFMantisProne : GestureReloadXDFMantis
		{
			mask = "BodyFull";
			file = "a3\anims_f\data\anim\sdr\gst\gesturereloadm200prone.rtm";
			speed=0.2;
		};
	};
};