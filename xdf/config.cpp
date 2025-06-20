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

class SlotInfo;
class CowsSlot: SlotInfo
{
	compatibleItems[] += 
    {
        "XDF_Mantis_Scope"
    };
};
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		XDF_Mantis_Scope = 1;
	};
};