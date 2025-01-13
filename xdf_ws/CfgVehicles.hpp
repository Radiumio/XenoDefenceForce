class assembleInfo;
class CfgVehicles
{
    class Weapon_Bag_Base;
	class XDF_shield_backpack: Weapon_Bag_Base
	{
		author = "Radium";
		DLC = "ws";
		displayName = "XDF Proto-Shield Harness";
		picture = "lxws\shield_f_lxws\data\ui\icon_shield_ca";
		faction = "XDF";
		side = 1;
		scope = 2;
		mass = 180;
		model = "lxws\shield_f_lxws\shield_backpack_black.p3d";
		hiddenSelections[] = {"CamoB", "camo"};
		hiddenSelectionsMaterials[] = {"lxws\shield_f_lxws\data\shield_bag_mat.rvmat", "lxws\shield_f_lxws\data\shield_mat.rvmat"};
		hiddenSelectionsTextures[] = {"lxws\shield_f_lxws\data\bag_black_co.paa", "\xdf_ws\retextures\protoShield\ProtoShield_CO.paa"};
		class assembleInfo: assembleInfo
		{
			base = "";
			assembleTo = "XDF_protoShield";
			displayName = "XDF Proto-Shield";
		};
	};
    class B_shield_lxWS;
	class XDF_protoShield: B_shield_lxWS
	{
		author = "Radium";
		DLC = "ws";
		scope = 2;
		scopeCurator = 2;
		displayName = "XDF Proto-Shield";
        armor = 2500;
		hiddenselections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\xdf_ws\retextures\protoShield\ProtoShield_CO.paa"};
		faction = "XDF";
		class HitPoints
		{
			class HitHull
			{
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_points";
				armor = 100;
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.8;
				explosionShielding = 0.8;
				radius = 0.1;
			};
		};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"XDF_shield_backpack"};
		};
	};
};