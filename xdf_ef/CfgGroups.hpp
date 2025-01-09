//[nil,get3DENSelected "" select 0] call BIS_fnc_exportCfgGroups; //Eden
//[nil,nil] call BIS_fnc_exportCfgGroups; //Zeus

class CfgGroups {
    class WEST {

        class B_XDF {
            name = "Xeno Defence Force";
            class XDF_Marine_SpecOps 
            {
                name = "XDF Marine Special Forces";
                class XDF_Marine_Section
                {
                    name="XDF Marine Section";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Marine_TL"; rank = "CAPTAIN"; position[] = {0,0.000144958,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Marine_JTAC"; rank = "LIEUTENANT"; position[] = {-4.66504,4.68822,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_Marine_Hunter"; rank = "SERGEANT"; position[] = {4.90918,4.5201,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_Marine_Gunner"; rank = "SERGEANT"; position[] = {-14.3228,13.9025,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_Marine_Gunner"; rank = "SERGEANT"; position[] = {13.9668,14.3923,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_Marine_HAT"; rank = "SERGEANT"; position[] = {-9.43018,9.37469,0.00143909}; dir = 180;};
                    class Object6	{side = 1; vehicle = "B_XDF_Marine_Operative"; rank = "SERGEANT"; position[] = {9.46631,9.54346,0.00143909}; dir = 180;};
                    class Object7	{side = 1; vehicle = "B_XDF_Marine_Medic"; rank = "SERGEANT"; position[] = {-19.0767,18.6032,0.00143909}; dir = 180;};
                };
			};
        };
    };
};


