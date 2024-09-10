//[nil,get3DENSelected "" select 0] call BIS_fnc_exportCfgGroups; //Eden
//[nil,nil] call BIS_fnc_exportCfgGroups; //Zeus

class CfgGroups {
    class WEST {

        class B_XDF {
            name = "Xeno Defence Force";

            class XDF_Infantry 
            {
                name = "XDF Frontline Infantry";
                class XDF_Frontline_Fireteam
                {
                    name="XDF Fireteam";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Operative"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Medic"; rank = "CORPORAL"; position[] = {-3.38086,6.17017,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_Marksman"; rank = "CORPORAL"; position[] = {6.2041,3.31848,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_HAT"; rank = "CORPORAL"; position[] = {-6.74756,12.3885,0.00143909}; dir = 180;};
                };
                class XDF_Frontline_Squad
                {
                    name="XDF Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Operative"; rank = "SERGEANT"; position[] = {0,6.10352e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Medic"; rank = "CORPORAL"; position[] = {-5.05371,4.17657,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_HAT"; rank = "CORPORAL"; position[] = {-10.0781,8.35547,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_Marksman_F"; rank = "CORPORAL"; position[] = {3.94189,5.74329,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_Grenadier"; rank = "CORPORAL"; position[] = {7.98193,10.8524,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_JTAC"; rank = "CORPORAL"; position[] = {-15.3213,12.5225,0.00143909}; dir = 180;};
                    class Object6	{side = 1; vehicle = "B_XDF_Operative_F"; rank = "CORPORAL"; position[] = {12.0571,16.1354,0.00143909}; dir = 180;};
                    class Object7	{side = 1; vehicle = "B_XDF_Medic"; rank = "CORPORAL"; position[] = {-20.5127,16.6806,0.00143909}; dir = 180;};
                };
                class XDF_Frontline_Sentry
                {
                    name="XDF Sentry";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Light_Operative"; rank = "PRIVATE"; position[] = {0,-1.52588e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Light_Operative_F"; rank = "PRIVATE"; position[] = {-4.40527,4.89345,0.00143862}; dir = 180;};
                };
                class XDF_Frontline_Drone_Team
                {
                    name="XDF Drone Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_uav.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_UAV_F"; rank = "SERGEANT"; position[] = {-5.16406,-4.87904,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Light_Operative"; rank = "PRIVATE"; position[] = {-10.0005,0.231186,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "XDF_Mars"; rank = "PRIVATE"; position[] = {0,-0.000106812,-0.0177736}; dir = 180;};
                };
                class XDF_Frontline_Recon_Team
                {
                    name="XDF Reconnaissance Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Operative_F"; rank = "SERGEANT"; position[] = {8.75391,-10.02,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_UAV"; rank = "CORPORAL"; position[] = {0,0,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_JTAC"; rank = "CORPORAL"; position[] = {4.46143,-4.9234,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_Marksman_F"; rank = "CORPORAL"; position[] = {14.1157,-5.8735,0.00143909}; dir = 180;};
                };
                class XDF_Frontline_Sniper_Team
                {
                    name="XDF Sniper Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Sniper"; rank = "SERGEANT"; position[] = {0.000488281,0.00012207,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_JTAC"; rank = "SERGEANT"; position[] = {-3.33301,5.68604,0.00143862}; dir = 180;};
                };
            };

            class XDF_SpecOps 
            {
                name = "XDF Anti-Xeno Infantry";
                class XDF_AX_Fireteam
                {
                    name="XDF AX Fireteam";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Operative"; rank = "LIEUTENANT"; position[] = {0,0,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Medic"; rank = "SERGEANT"; position[] = {-3.38086,6.17017,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Hunter"; rank = "SERGEANT"; position[] = {6.2041,3.31848,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_HAT"; rank = "SERGEANT"; position[] = {-6.74756,12.3885,0.00143909}; dir = 180;};
                };
                class XDF_AX_Elite_Fireteam
                {
                    name="XDF AX Elite Fireteam";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "CAPTAIN"; position[] = {0,0,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_Medic_F"; rank = "LIEUTENANT"; position[] = {-3.38086,6.17017,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "SERGEANT"; position[] = {6.2041,3.31848,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Elite_HAT"; rank = "SERGEANT"; position[] = {-6.74756,12.3885,0.00143909}; dir = 180;};
                };
                class XDF_AX_Squad
                {
                    name="XDF AX Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Operative"; rank = "LIEUTENANT"; position[] = {0,6.10352e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Medic"; rank = "SERGEANT"; position[] = {-5.05371,4.17657,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_HAT_F"; rank = "SERGEANT"; position[] = {-10.0781,8.35547,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Hunter"; rank = "SERGEANT"; position[] = {3.94189,5.74329,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Gunner"; rank = "SERGEANT"; position[] = {7.98193,10.8524,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_AX_JTAC"; rank = "SERGEANT"; position[] = {-15.3213,12.5225,0.00143909}; dir = 180;};
                    class Object6	{side = 1; vehicle = "B_XDF_AX_Operative_F"; rank = "SERGEANT"; position[] = {12.0571,16.1354,0.00143909}; dir = 180;};
                    class Object7	{side = 1; vehicle = "B_XDF_AX_Medic"; rank = "SERGEANT"; position[] = {-20.5127,16.6806,0.00143909}; dir = 180;};
                };
                class XDF_AX_Elite_Squad
                {
                    name="XDF AX Elite Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative_F"; rank = "CAPTAIN"; position[] = {0,6.10352e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_Medic"; rank = "LIEUTENANT"; position[] = {-5.05371,4.17657,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Elite_HAT"; rank = "SERGEANT"; position[] = {-10.0781,8.35547,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "SERGEANT"; position[] = {3.94189,5.74329,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Elite_Gunner_F"; rank = "SERGEANT"; position[] = {7.98193,10.8524,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_AX_Elite_JTAC_F"; rank = "SERGEANT"; position[] = {-15.3213,12.5225,0.00143909}; dir = 180;};
                    class Object6	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "SERGEANT"; position[] = {12.0571,16.1354,0.00143909}; dir = 180;};
                    class Object7	{side = 1; vehicle = "B_XDF_AX_Elite_Medic"; rank = "SERGEANT"; position[] = {-20.5127,16.6806,0.00143909}; dir = 180;};
                };
                class XDF_AX_Sentry
                {
                    name="XDF AX Sentry";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Operative"; rank = "SERGEANT"; position[] = {0,-1.52588e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Operative_F"; rank = "SERGEANT"; position[] = {-4.40527,4.89345,0.00143862}; dir = 180;};
                };
                class XDF_AX_Elite_Sentry
                {
                    name="XDF AX Elite Sentry";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "LIEUTENANT"; position[] = {0,-1.52588e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_Operative_F"; rank = "LIEUTENANT"; position[] = {-4.40527,4.89345,0.00143862}; dir = 180;};
                };
                class XDF_AX_Drone_Team
                {
                    name="XDF AX Drone Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_uav.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_UAV"; rank = "LIEUTENANT"; position[] = {12.0029,-23.2681,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_Operative_F"; rank = "SERGEANT"; position[] = {8.74121,-17.033,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_JTAC_F"; rank = "SERGEANT"; position[] = {18.2695,-20.0674,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "XDF_Mars"; rank = "PRIVATE"; position[] = {0,0,-0.0178094}; dir = 180;};
                };
                class XDF_AX_Elite_Drone_Team
                {
                    name="XDF AX Elite Drone Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_uav.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "CAPTAIN"; position[] = {-6.7876,-32.5435,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_UAV_F"; rank = "SERGEANT"; position[] = {-5.3042,-25.6631,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Elite_JTAC"; rank = "LIEUTENANT"; position[] = {0.162109,-34.0376,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Elite_Gunner"; rank = "SERGEANT"; position[] = {-3.8501,-18.7427,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "SERGEANT"; position[] = {7.08154,-35.4917,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "XDF_Mars"; rank = "PRIVATE"; position[] = {0,0,-0.0178156}; dir = 180;};
                };
                class XDF_AX_Recon_Team
                {
                    name="XDF AX Reconnaissance Team";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Operative"; rank = "LIEUTENANT"; position[] = {0,0,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_UAV_F"; rank = "SERGEANT"; position[] = {-4.23145,5.10336,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_JTAC"; rank = "SERGEANT"; position[] = {5.15918,4.29614,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Hunter"; rank = "SERGEANT"; position[] = {-8.57227,10.1857,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Gunner"; rank = "SERGEANT"; position[] = {10.1167,8.68344,0.00143909}; dir =180;};
                };
                class XDF_AX_Elite_Recon_Squad
                {
                    name="XDF AX Elite Reconnaissance Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "CAPTAIN"; position[] = {0,4.57764e-005,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_UAV"; rank = "LIEUTENANT"; position[] = {-4.84229,4.67633,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Elite_JTAC_F"; rank = "SERGEANT"; position[] = {4.82715,4.60382,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter_F"; rank = "SERGEANT"; position[] = {-9.43018,9.50091,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "SERGEANT"; position[] = {9.64111,9.10808,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_AX_Elite_Gunner"; rank = "SERGEANT"; position[] = {-14.0249,14.265,0.00143909}; dir = 180;};
                };
                class XDF_AX_Hunter_Squad
                {
                    name="XDF AX Hunter Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Operative"; rank = "LIEUTENANT"; position[] = {0,-0.0001297,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Hunter"; rank = "SERGEANT"; position[] = {-4.67773,4.62757,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Medic"; rank = "SERGEANT"; position[] = {9.34082,9.32507,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_HAT"; rank = "SERGEANT"; position[] = {-14.4463,13.8454,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Gunner"; rank = "SERGEANT"; position[] = {4.84033,4.49442,0.00143909}; dir =180;};
                    class Object5	{side = 1; vehicle = "B_XDF_AX_JTAC"; rank = "SERGEANT"; position[] = {-9.34229,9.38245,0.00143909}; dir = 180;};
                };
                class XDF_AX_Elite_Hunter_Squad
                {
                    name="XDF AX Elite Hunter Squad";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_AX_Elite_Operative"; rank = "CAPTAIN"; position[] = {0,0.000144958,0.00143909}; dir = 180;};
                    class Object1	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "LIEUTENANT"; position[] = {-4.66504,4.68822,0.00143909}; dir = 180;};
                    class Object2	{side = 1; vehicle = "B_XDF_AX_Elite_Hunter"; rank = "SERGEANT"; position[] = {4.90918,4.5201,0.00143909}; dir = 180;};
                    class Object3	{side = 1; vehicle = "B_XDF_AX_Elite_Gunner_F"; rank = "SERGEANT"; position[] = {-14.3228,13.9025,0.00143909}; dir = 180;};
                    class Object4	{side = 1; vehicle = "B_XDF_AX_Elite_Gunner"; rank = "SERGEANT"; position[] = {13.9668,14.3923,0.00143909}; dir = 180;};
                    class Object5	{side = 1; vehicle = "B_XDF_AX_Elite_HAT_F"; rank = "SERGEANT"; position[] = {-9.43018,9.37469,0.00143909}; dir = 180;};
                    class Object6	{side = 1; vehicle = "B_XDF_AX_Elite_JTAC"; rank = "SERGEANT"; position[] = {9.46631,9.54346,0.00143909}; dir = 180;};
                    class Object7	{side = 1; vehicle = "B_XDF_AX_Elite_Medic"; rank = "SERGEANT"; position[] = {-19.0767,18.6032,0.00143909}; dir = 180;};
                };
                class XDF_Xenohunter_Team
                {
                    name="XDF Xenohunter Fireteam";
                    side=1;
                    faction="B_XDF";
                    icon="\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    class Object0	{side = 1; vehicle = "B_XDF_Xenohunter"; rank = "MAJOR"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "B_XDF_Xenohunter_Corpsman"; rank = "CAPTAIN"; position[] = {5,-4.9502,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "B_XDF_Xenohunter_Exterminator"; rank = "CAPTAIN"; position[] = {-5,-4.9502,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "B_XDF_Xenohunter_Sharpshooter"; rank = "CAPTAIN"; position[] = {10,-9.9502,0.00143909}; dir = 0;};
                }
            };

            class Motorized 
            {
                name = "Motorized";
            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support";

            };

            class Mechanized {
                name = "Mechanized";

            };

            class Armored {
                name = "XDF Armor";
                class XDF_Odin_Platoon
                {
                    name="XDF Odin Platoon";
                    side=1;
                    faction="B_XDF";
					icon="\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    class Object0	{side = 1; vehicle = "XDF_Odin"; rank = "SERGEANT"; position[] = {0,-0.000167847,0.0269566}; dir = 180;};
                    class Object1	{side = 1; vehicle = "XDF_Odin"; rank = "SERGEANT"; position[] = {16.7246,22.914,0.028038}; dir = 180;};
                    class Object2	{side = 1; vehicle = "XDF_Odin"; rank = "SERGEANT"; position[] = {-20.0981,23.0319,0.0279059}; dir =180;};
                };
            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


