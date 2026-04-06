class CfgVehicles
{
	class House_F;
	class Extraterrestrial_Mothership_F: House_F
	{
		author="Radium";
		editorPreview="\xdf\previews\structures\et_preview.jpg";
		scope=2;
		scopeCurator=2;
		armor=999999999999;
		model="\extraterrestrials\models\alien_mothership\extraterrestrial_mothership.p3d";
		displayName="Extraterrestrial Mothership";
		editorCategory="ET_Technology";
		editorSubcategory="ET_Vessels";
		icon="\extraterrestrials\models\alien_mothership\et_vessel_icon.paa";
		class DestructionEffects {};
	};
	class APERSBoundingMine;
	class Extraterrestrial_Mine: APERSBoundingMine
	{
		author="Radium";
		editorPreview="\xdf\previews\structures\et_preview.jpg";
		mapSize=0.08;
		scope=2;
		scopeCurator=2;
		ammo="Extraterrestrial_Mine_Ammo";
		displayName="Extraterrestrial Mine";
		editorCategory="ET_Technology";
		editorSubcategory="ET_Devices";
		icon="iconExplosiveAlien";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		model="\extraterrestrials\models\alien_mine\alien_mine.p3d";
		descriptionShort="An extremely dangerous Extraterrestrial mine with advanced sensors believed to be capable of analysing and identifying targets from significant distances.<br/>You're not even sure how you're holding this.";
	};
	class ModuleMine_APERSBoundingMine_F;
	class Module_Extraterrestrial_Mine: ModuleMine_APERSBoundingMine_F
	{
		author="Radium";
		scopeCurator=2;
		editorCategory="ET_Technology";
		editorSubcategory="ET_Devices";
		displayName="Extraterrestrial Mine";
		explosive="Extraterrestrial_Mine_Ammo";
		icon="iconExplosiveAlien";
	};
};