class CfgVehicles
{
	class B_Soldier_base_F;
	class B_XDF_Marine_Uniform: B_Soldier_base_F
	{
		author="Radium";
		DLC="ef";
		scope=1;
		scopeCurator=0;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"ef\ef_marines\Data\US_Marines_FROG.rvmat", 
				"ef\ef_marines\Data\US_Marines_FROG_injury.rvmat", 
				"ef\ef_marines\Data\US_Marines_FROG_injury.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", 
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", 
				"A3\Characters_F\Common\Data\basicbody.rvmat", 
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat", 
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat", 
				"a3\characters_f\heads\data\hl_white.rvmat", 
				"a3\characters_f\heads\data\hl_white_injury.rvmat", 
				"a3\characters_f\heads\data\hl_white_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat", 
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
		model="\ef\ef_marines\ef_u_frog.p3d";
		//modelSides[]={3, 1};
		//nakedUniform="U_BasicBody";
		uniformClass="U_XDF_Marine_Uniform";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_co.paa"
		};
	};
	class B_XDF_Marine_Uniform_Gloved: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Pads: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_gl_kp.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Rolled: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl_gl.p3d";
	};
	class B_XDF_Marine_Uniform_Gloved_Rolled_Pads: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl_gl_kp.p3d";
	};
	class B_XDF_Marine_Uniform_Rolled: B_XDF_Marine_Uniform
	{
		model="\ef\ef_marines\ef_u_frog_sl.p3d";
	};
};