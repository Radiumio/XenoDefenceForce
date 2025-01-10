class CfgVehicles
{
	class qav_ripsaw_Mk44;
	class XDF_Ripsaw: qav_ripsaw_Mk44
	{
		author="Radium";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Ripsaw UGV";
		editorPreview="\xdf_rs\previews\vehicles\XDF_Ripsaw.jpg";
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
	};
};