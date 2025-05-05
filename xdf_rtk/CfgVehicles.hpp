class CfgVehicles
{
	class RatnikBlackUniform_dummy;
	class B_XDF_Templar_Undersuit: RatnikBlackUniform_dummy
	{
		author="Moose & Radium";
		uniformClass="U_XDF_Templar_Undersuit";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\uniforms\U_XDF_Templar_Undersuit.paa"
		};
	};
	class Ranit_Pack;
	class B_XDF_Templar_Backpack: Ranit_Pack
	{
		
		author="Radium";
		scope=2;
		displayName="XDF Templar Backpack";
		picture="\xdf_rtk\templarIcon.paa";
		descriptionShort="Load-bearing backpack designed to be paired with the prototype Templar exoskeleton.";
		hiddenSelectionsTextures[]=
		{
			"\xdf_rtk\retextures\xdf_uniform\vests\V_XDF_Templar_Attach.paa"
		};
		maximumLoad=350;
	};
};