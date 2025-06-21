class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        optic_Mantis_Scope = 1;
    };
};

// Vanilla rails
class SlotInfo;
class CowsSlot: SlotInfo {
    compatibleItems[] = {
        "optic_Mantis_Scope"
    };
};

class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        optic_Mantis_Scope = 1;
    };
};

class ScrollBar;
class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscText;
class RscInGameUI
{
    class RscUnitInfo {};
    class RscOptics_TharsisScope: RscUnitInfo
    {
    	idd=300;
    	controls[]=
    	{
    		"CA_IGUI_elements_group"
    	};
    	class CA_IGUI_elements_group: RscControlsGroup
    	{
    		idc=200;
    		class VScrollbar: VScrollbar
    		{
    			width=0;
    		};
    		class HScrollbar: HScrollbar
    		{
    			height=0;
    		};
    		x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
    		y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
    		w="53.5 * 		(0.01875 * SafezoneH)";
    		h="40 * 		(0.025 * SafezoneH)";
    		class controls
    		{
    			class CA_Distance: RscText
    			{
    				idc=189;
    				style=0;
    				sizeEx="0.045*SafezoneH";
    				colorText[]={1,0.1,0.1,0.8};
    				shadow=1;
    				font="LCD14";
    				text="- - - -";
    				x="33.5 * 		(0.01875 * SafezoneH)";
    				y="11 * 		(0.025 * SafezoneH)";
    				w="5.6 * 		(0.01875 * SafezoneH)";
    				h="2 * 		(0.025 * SafezoneH)";
    			};
    			class CA_VisionMode: RscText
    			{
    				idc=197;
    				style=0;
    				sizeEx="0.045*SafezoneH";
    				colorText[]={1,0.1,0.1,0.8};
    				shadow=1;
    				font="LCD14";
    				text="VIS";
    				x="2 * 		    (0.01875 * SafezoneH)";
    				y="11 * 		(0.025 * SafezoneH)";
    				w="5 * 		(0.01875 * SafezoneH)";
    				h="2 * 		(0.025 * SafezoneH)";
    			};
    			class CA_OpticsZoom: RscText
    			{
    				idc=108;
    				style=1;
    				sizeEx="0.028*SafezoneH";
    				colorText[]={1,0.1,0.1,0.8};
    				shadow=1;
    				font="LCD14";
    				text="5.5";
    				x="38.8 * 		(0.01875 * SafezoneH)";
    				y="20.8 * 		(0.025 * SafezoneH)";
    				w="4 * 		(0.01875 * SafezoneH)";
    				h="1.5 * 		(0.025 * SafezoneH)";
    			};
    			class CA_Bracket: RscText
    			{
    				idc=118;
    				style="0x30 + 0x800";
    				sizeEx="0.035*SafezoneH";
    				shadow=1;
    				font="EtelkaMonospacePro";
    				text="\xdf\weapons\mantis\tharsis_brackets_ca.paa";
    				x="16.5 * 		(0.01875 * SafezoneH)";
    				y="9.75 * 		(0.025 * SafezoneH)";
    				w="20.5 * 		(0.01875 * SafezoneH)";
    				h="20.5 * 		(0.025 * SafezoneH)";
    			};
    		};
    	};
    };
};

#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgFunctions.hpp"
#include "CfgGlasses.hpp"
#include "CfgGroups.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMarkers.hpp"
#include "CfgMoves.hpp"
#include "CfgRecoils.hpp"
#include "CfgSounds.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"