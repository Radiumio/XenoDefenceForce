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
};