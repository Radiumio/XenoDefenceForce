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
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
};