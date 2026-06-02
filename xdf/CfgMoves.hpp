class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadXDFMantis = "GestureReloadXDFMantis";
		GestureReloadXDFSolaris = "GestureReloadXDFSolaris";
	};
    class Actions
    {
		class NoActions : ManActions {
			GestureReloadXDFMantis[] = {"GestureReloadXDFMantis", "Gesture"};
			GestureReloadXDFSolaris[] = {"GestureReloadXDFSolaris", "Gesture"};
		};
		class RifleBaseLowStandActions: NoActions {};
        class RifleBaseStandActions: RifleBaseLowStandActions {};
        class RifleProneActions: RifleBaseStandActions {
            GestureReloadXDFMantis[] = {"GestureReloadXDFMantisProne", "Gesture"};
            GestureReloadXDFSolaris[] = {"GestureReloadXDFSolarisProne", "Gesture"};
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
			mask = "handsWeapon";
			file = "\xdf\weapons\mantis\railgun_reload_prone.rtm";
			speed=0.22;
		};
		class GestureReloadXDFSolaris : Default
		{
			file = "\xdf\weapons\solaris\solaris_reload.rtm";
			looped = 0;
			speed = 0.24;
			mask = "handsWeapon";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
		};
		class GestureReloadXDFSolarisProne : GestureReloadXDFSolaris
		{
			mask = "handsWeapon";
			file = "\xdf\weapons\mantis\railgun_reload_prone.rtm";
			speed=0.24;
		};
	};
};