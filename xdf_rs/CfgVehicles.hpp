class CfgVehicles
{
	class qav_ripsaw_Mk44;
	class qav_ripsaw_Mk44_base_1: qav_ripsaw_Mk44 { scope = 0; class AnimationSources; class Turrets; };
	class qav_ripsaw_Mk44_base_2: qav_ripsaw_Mk44_base_1 {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class XDF_Ripsaw: qav_ripsaw_Mk44_base_2
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Ripsaw UGV";
		editorPreview="\xdf\previews\vehicles\XDF_Ripsaw.jpg";
		side = 1;
		faction = "B_XDF";
		crew = "B_UAV_AI";
		armor = 400; // Default 200
		armorStructural = 5; // Default unknown
		fuelCapacity = 40; // Default 20
		damageResistance = 0.05; // Default 0
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_rs\retextures\ripsaw\rshull_co.paa",
			"\xdf_rs\retextures\ripsaw\rshull2_co.paa",
			"\xdf_rs\retextures\ripsaw\rssusp_co.paa",
			"\xdf_rs\retextures\ripsaw\rsturret_co.paa",
			"\xdf_rs\retextures\ripsaw\rsturret2_co.paa",
			"\xdf_rs\retextures\ripsaw\rsacc1_co.paa",
			"\xdf_rs\retextures\ripsaw\rsacc2_co.paa"
		};
		class TextureSources
		{
			class XDF
			{
				displayName="Xeno Defence Force";
				author="Radium";
				textures[]=
				{
					"\xdf_rs\retextures\ripsaw\rshull_co.paa",
					"\xdf_rs\retextures\ripsaw\rshull2_co.paa",
					"\xdf_rs\retextures\ripsaw\rssusp_co.paa",
					"\xdf_rs\retextures\ripsaw\rsturret_co.paa",
					"\xdf_rs\retextures\ripsaw\rsturret2_co.paa",
					"\xdf_rs\retextures\ripsaw\rsacc1_co.paa",
					"\xdf_rs\retextures\ripsaw\rsacc2_co.paa"
				};
				factions[]=
				{
					"B_XDF"
				};
			};
		};
		textureList[]=
		{
			"XDF",
			1
		};
		class AnimationSources: AnimationSources
		{
			class zasleh_rot
			{
				source = "ammorandom";
				weapon = "QAV_ripsaw_mk30_AX";
			};
			class zasleh_hide
			{
				source = "reload";
				weapon = "QAV_ripsaw_mk30_AX";
			};
			class 30mm_recoil
			{
				source = "reload";
				weapon = "QAV_ripsaw_mk30_AX";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"QAV_ripsaw_mk30_AX",
					"QAV_SmokeLauncher"
				};
				magazines[] = 
				{
					"QAV_SmokeLauncherMag",
					"QAV_ripsaw_150RND_30mm_HE_AX",
					"QAV_ripsaw_150RND_30mm_AP_AX"
				};
			};
		};
	};
};