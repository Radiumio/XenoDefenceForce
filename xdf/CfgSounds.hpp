class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class XDF_GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_Closure_SoundShader",
			"GM6Lynx_closeShot_SoundShader",
			"XDF_GM6Lynx_closeShot_SoundShader",
			"GM6Lynx_midShot_SoundShader",
			"GM6Lynx_distShot_SoundShader"
		};
	};
	class XDF_GM6LynxRail_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_Closure_SoundShader",
			"GM6Lynx_closeShot_SoundShader",
			"XDF_GM6LynxRail_closeShot_SoundShader",
			"GM6Lynx_midShot_SoundShader",
			"GM6Lynx_distShot_SoundShader"
		};
	};
	class FAE_Exp_SoundSet
	{
		soundShaders[] = {"FAE_closeExp_SoundShader", "FAE_midExp_SoundShader","FAE_distExp_SoundShader"};
		volumeFactor = 2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
    class Mantis_shot_SoundSet {
        soundShaders[] = { "Mantis_closeShot_SoundShader", "Mantis_midShot_SoundShader", "Mantis_distShot_SoundShader", "Mantis_closure_SoundShader" };
        volumeFactor = 1.2;
        volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 8;
        stereoRadius = 10;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class Mantis_tail_SoundSet {
        soundShaders[] = { "Mantis_tailForest_SoundShader", "Mantis_tailHouses_SoundShader", "Mantis_tailMeadows_SoundShader", "Mantis_tailTrees_SoundShader", "Mantis_tailInterior_SoundShader" };
        volumeFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
	class AX_Minigun_Shot_SoundSet
	{
		soundShaders[] = 
		{ 
			"AX_Minigun_vehicleShot_SoundShader",
			"AX_Minigun_closeShot_SoundShader", 
			"AX_Minigun_closeDistShot_SoundShader",
			"AX_Minigun_midShot_SoundShader", 
			"AX_Minigun_distShot_SoundShader", 
			"AX_Minigun_Closure_SoundShader",
			"AX_Minigun_ClosureExt_SoundShader"
		};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
	};
	class AX_Minigun_Tail_SoundSet
	{
		soundShaders[] = 
		{
			"AX_Minigun_tailDistant_SoundShader", 
			"AX_Minigun_tailForest_SoundShader", 
			"AX_Minigun_tailHouses_SoundShader", 
			"AX_Minigun_tailMeadows_SoundShader", 
			"AX_Minigun_tailTrees_SoundShader"
		};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		occlusionFactor = 0.3;
		obstructionFactor = 0;
	};
};
class CfgSoundShaders
{
	class XDF_GM6Lynx_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xdf\sounds\shot\gm6\close_shot_1.ogg",
				1
			},
			
			{
				"\xdf\sounds\shot\gm6\close_shot_2.ogg",
				1
			},
			
			{
				"\xdf\sounds\shot\gm6\close_shot_3.ogg",
				1
			}
		};
		volume=0.9;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class XDF_GM6LynxRail_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\xdf\sounds\shot\gm6\gm6_rail_close_shot_1.ogg",
				1
			},
			
			{
				"\xdf\sounds\shot\gm6\gm6_rail_close_shot_2.ogg",
				1
			},
			
			{
				"\xdf\sounds\shot\gm6\gm6_rail_close_shot_3.ogg",
				1
			}
		};
		volume=0.9;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class FAE_closeExp_SoundShader
	{
		samples[] = {{"\xdf\sounds\exp\maaws_thermobaric_1", 1}, {"\xdf\sounds\exp\maaws_thermobaric_2", 1}, {"\xdf\sounds\exp\maaws_thermobaric_3", 1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0, 1}, {50, 0.75}, {70, 0}};
	};
	class FAE_midExp_SoundShader
	{
		samples[] = {{"\xdf\sounds\exp\maaws_thermobaric_1", 1}, {"\xdf\sounds\exp\maaws_thermobaric_2", 1}, {"\xdf\sounds\exp\maaws_thermobaric_3", 1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0, 1}, {100, 1}, {500, 0}, {2200, 0}};
	};
	class FAE_distExp_SoundShader
	{
		samples[] = {{"\xdf\sounds\exp\maaws_thermobaric_1", 1}, {"\xdf\sounds\exp\maaws_thermobaric_2", 1}, {"\xdf\sounds\exp\maaws_thermobaric_3", 1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0, 0}, {100, 0}, {250, 1}, {2200, 1}};
	};
	class Mantis_closure_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_closure_01.ogg", 1},{"\xdf\sounds\shot\mantis\mantis_closure_02.ogg"}};
		volume = 0.5;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class Mantis_closeShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_closeshot_01.ogg",1},{"\xdf\sounds\shot\mantis\mantis_closeshot_02.ogg",1},{"\xdf\sounds\shot\mantis\mantis_closeshot_03.ogg",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class Mantis_midShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_midshot_01.ogg",1},{"\xdf\sounds\shot\mantis\mantis_midshot_02.ogg",1},{"\xdf\sounds\shot\mantis\mantis_midshot_03.ogg",1}};
		volume = 0.7;
		range = 1800;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{1800,0}};
	};
	class Mantis_distShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_distshot_01.ogg",1},{"\xdf\sounds\shot\mantis\mantis_distshot_02.ogg",1},{"\xdf\sounds\shot\mantis\mantis_distshot_03.ogg",1}};
		volume = 2.2;
		range = 1800;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1800,1}};
	};
	class Mantis_tailInterior_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_tailinterior.ogg",1}};
        volume = "1.5*((interior)*0.65)";
		range = 500;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class Mantis_tailForest_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_tailforest.ogg",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class Mantis_tailHouses_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_tailhouses.ogg",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{200,0.5},{800,0.3},{1500,0}};
		limitation = 1;
	};
	class Mantis_tailMeadows_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_tailmeadows.ogg",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class Mantis_tailTrees_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\mantis\mantis_tailtrees.ogg",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class AX_Minigun_Closure_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_interiorSpin1.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_interiorSpin2.ogg", 1}};
		volume = "0.7*(1 - camPos)";
		range = 10;
		rangecurve[] = {{0,1},{2,1}};
	};
	class AX_Minigun_ClosureExt_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_spin1.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_spin2.ogg", 1}};
		volume = "1*camPos";
		range = 15;
		rangecurve[] = {{0,0},{2,0},{15,0}};
	};
	class AX_Minigun_vehicleShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_interiorShot01.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_interiorShot02.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_interiorShot03.ogg", 1}};
		volume = "1*(1 - campos)";
		range = 10;
		rangecurve[] = {{0,1},{10,1}};
	};
	class AX_Minigun_closeShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_shot1.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_shot2.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_shot3.ogg", 1}};
		volume = 1;
		range = 75;
		rangecurve[] = {{0,1},{10,1},{75,0}};
	};
	class AX_Minigun_closeDistShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_closeShot_01.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_closeShot_02.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_closeShot_03.ogg", 1}};
		volume = 1;
		range = 200;
		rangecurve[] = {{0,0},{10,0.75},{75,1},{200,0}};
	};
	class AX_Minigun_midShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_midShot_01.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_midShot_02.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_midShot_03.ogg", 1}};
		volume = 1;
		range = 750;
		rangecurve[] = {{0,0},{75,0},{200,1},{750,0}};
	};
	class AX_Minigun_distShot_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_distShot_01.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_distShot_02.ogg", 1}, {"\xdf\sounds\shot\axminigun\AX_Minigun_distShot_03.ogg", 1}};
		volume = 1;
		range = 2500;
		rangecurve[] = {{75,0},{750,1},{2500,0}};
	};
	class AX_Minigun_tailDistant_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_taildistant.ogg", 1}};
		volume = 0.6;
		range = 2500;
		rangecurve[] = {{1,0},{1000,1},{2500,0.2}};
		limitable = 1;
	};
	class AX_Minigun_tailForest_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_tailforest.ogg", 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2500;
		rangecurve[] = {{1,0},{1000,1},{2500,0.2}};
		limitable = 1;
	};
	class AX_Minigun_tailHouses_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_tailhouses.ogg", 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 2500;
		rangecurve[] = {{1,0},{1000,1},{2500,0.2}};
		limitable = 1;
	};
	class AX_Minigun_tailMeadows_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_tailmeadows.ogg", 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2500;
		rangecurve[] = {{1,0},{1000,1},{2500,0.2}};
		limitable = 1;
	};
	class AX_Minigun_tailTrees_SoundShader
	{
		samples[] = {{"\xdf\sounds\shot\axminigun\AX_Minigun_tailtrees.ogg", 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2500;
		rangecurve[] = {{1,0},{1000,1},{2500,0.2}};
		limitable = 1;
	};
};