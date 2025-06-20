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