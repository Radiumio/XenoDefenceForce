class ItemInfo;
class GL_3GL_F;
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class EF_U_B_MarineCombatUniform_Des_5;
	class U_XDF_Marine_Uniform: EF_U_B_MarineCombatUniform_Des_5
	{
		author="Radium";
		DLC="ef";
		scope=2;
		scopeArsenal=2;
		displayName="XDF Marine Combat Uniform";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\uniforms\U_XDF_Marines_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Pads: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Pads)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Pads";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Rolled: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Rolled)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Gloved_Rolled_Pads: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Gloves/Rolled/Pads)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Gloved_Rolled_Pads";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_XDF_Marine_Uniform_Rolled: U_XDF_Marine_Uniform
	{
		displayName="XDF Marine Combat Uniform (Rolled)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Uniform_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class EF_U_B_MarineCombatUniform_Diver_Des;
	class U_XDF_Marine_Diver: EF_U_B_MarineCombatUniform_Diver_Des
	{
		displayName="XDF Marine Diver Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_XDF_Marine_Diver";
			containerClass="Supply40";
			uniformType = "Neopren";
			mass=40;
		};
	};
	class EF_V_AAV_Black;
	class V_XDF_AAV: EF_V_AAV_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Core: EF_V_AAV_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Coremanite)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co_core.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Rifleman_Black;
	class V_XDF_AAV_Rifleman: EF_V_AAV_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Scout: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Scout)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Scout_Black;
	class V_XDF_AAV_Medic: EF_V_AAV_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Medic)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_med_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Support_Black;
	class V_XDF_AAV_Support: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class V_XDF_AAV_Support_Shieldmaiden: EF_V_AAV_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Support, Shieldmaiden)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co_Shieldmaiden.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_TL_Black;
	class V_XDF_AAV_TL: EF_V_AAV_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Diver_Black;
	class V_XDF_AAV_Diver: EF_V_AAV_Diver_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Diver)";
		hiddenUnderwaterSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_AAV_Diver_Black;
	class V_XDF_AAV_Diver_Mask: EF_V_AAV_Diver_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Diver/Mask)";
		hiddenUnderwaterSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
		};
		hiddenUnderwaterSelections[]={"unhide"};
		shownUnderwaterSelections[]={"hide"};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
			hiddenUnderwaterSelections[]={"unhide"};
			shownUnderwaterSelections[]={"hide"};
			hiddenUnderwaterSelectionsTextures[] = 
			{
				"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa", 
				"\xdf_ef\retextures\xdf_uniform\vests\diving_gear_co.paa"
			};
		};
	};
	class EF_V_AAV_Sailor_Black;
	class V_XDF_AAV_Sailor: EF_V_AAV_Sailor_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Marine Vest (Sailor)";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
	};
	class EF_V_CCR_Rifleman_Black;
	class V_XDF_CCR_Rifleman: EF_V_CCR_Rifleman_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class EF_V_CCR_Scout_Black;
	class V_XDF_CCR_Scout: EF_V_CCR_Scout_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Scout)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class EF_V_CCR_Support_Black;
	class V_XDF_CCR_Support: EF_V_CCR_Support_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Support)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class EF_V_CCR_TL_Black;
	class V_XDF_CCR_TL: EF_V_CCR_TL_Black
	{
		author="Radium";
		scope=2;
		displayName="XDF Commando Rig (Team Leader)";
		hiddenSelectionsTextures[] = 
		{
			"\xdf_ef\retextures\xdf_uniform\vests\V_XDF_AA_vest_co.paa",
			"\xdf_ef\retextures\xdf_uniform\vests\ccr_pouches_black_CO.paa",
		    "\xdf_ef\retextures\xdf_uniform\vests\ccr_black_CO.paa",
			"\a3\weapons_f_epb\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply300";
		};
	};
	class EF_LPNVG;
	class XDF_LPNVG: EF_LPNVG
	{
		author="Radium";
		scope=2;
		displayName="XDF LPNVG G3";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_co.paa"
		};
	};
	class EF_LPNVG_T;
	class XDF_LPNVG_T: EF_LPNVG_T
	{
		author="Radium";
		scope=2;
		displayName="XDF LPNVG-T G3";
		hiddenSelectionsTextures[]=
		{
			"\xdf_ef\retextures\xdf_uniform\headgear\lpnvg_co.paa"
		};
	};
	class ef_arifle_mxar;
	class ef_arifle_MXAR_XDF: ef_arifle_mxar
	{
		author="Radium";
		_generalMacro="arifle_MX_Black_F";
		scope=2;
		displayName="XDF ACR-X4AR";
		baseWeapon="ef_arifle_MXAR_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_long_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};
	class ef_arifle_mxar_gl;
	class ef_arifle_MXAR_GL_XDF: ef_arifle_mxar_gl
	{
		author="Radium";
		_generalMacro="arifle_MX_Black_F";
		scope=2;
		displayName="XDF ACR-X4AR 3GL";
		baseWeapon="ef_arifle_MXAR_GL_XDF";
		hiddenSelectionsTextures[]=
		{
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_base_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\glx_co.paa",
			"\xdf\retextures\xdf_uniform\weapons\mx\xmx_long_co.paa"
		};
		reloadMagazineSound[]=
		{
			"\xdf\sounds\reloads\acr_reload.ogg",
			2,
			1,
			10
		};
		class GL_3GL_F: GL_3GL_F
		{
			reloadMagazineSound[]=
			{
				"\xdf\sounds\reloads\mx_gl_reload.ogg",
				4,
				1,
				10
			};
		};
		magazineWell[] +=
		{
			"MX_65x39_XDF",
			"MX_65x39_Large_XDF"
		};
	};

	//////////////////// VEHICLES ////////////////////
	class EF_autocannon_30mm_Hunter;
	class EF_autocannon_30mm_Hunter_AX: EF_autocannon_30mm_Hunter
	{
		displayName = "AX Autocannon 30mm";
		magazines[] += 
		{
			"EF_200Rnd_30mm_HEDPAX_shells_Tracer_Blue", "EF_200Rnd_30mm_HEABAX_shells_Tracer_Blue"
		};
	};
	class EF_missiles_SAAMI_manual;
	class EF_missiles_SAAMI_AX_manual: EF_missiles_SAAMI_manual
	{
		magazines[] += 
		{
			"4Rnd_70mm_SAAMI_AX_missiles"
		};
		autoReload = 0;
	};
	class EF_Weapon_Titan_NLOS;
	class EF_Weapon_Titan_NLOS_AX: EF_Weapon_Titan_NLOS
	{
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
		magazines[] += 
		{
			"EF_Magazine_Titan_NLOS_AX_1Rnd", 
			"EF_Magazine_Titan_NLOS_AX_2Rnd",
			"EF_Magazine_Titan_NLOS_AX_4Rnd",
			"EF_PylonMissile_Titan_NLOS_AX_1Rnd", 
			"EF_PylonMissile_Titan_NLOS_AX_2Rnd"
		};
	};
	class EF_missiles_titan_manual;
	class EF_missiles_titan_AX_manual: EF_missiles_titan_manual
	{
		magazines[] += 
		{
			"2Rnd_Titan_AT_XDF_missiles"
		};
	};
	class EF_weapon_SidearmLauncher;
	class EF_weapon_SidearmAXLauncher: EF_weapon_SidearmLauncher
	{
		displayName = "ARM-955M Hyperfox";
		magazines[] +=
		{
			"EF_magazine_Missile_Sidearm_AX_x1",
			"EF_PylonMissile_Missile_Sidearm_AX_x1"
		};
		lockingTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locking.ogg",
			1,
			1
		};
		lockedTargetSound[]=
		{
			"\xdf\sounds\lock\xdf_locked.ogg",
			1,
			2.5
		};
	};
};