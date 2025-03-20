//[nil,get3DENSelected "" select 0] call BIS_fnc_exportCfgGroups; //Eden
//[nil,nil] call BIS_fnc_exportCfgGroups; //Zeus

class CfgGroups {
	class EAST {
		class O_PXLA {
			name = "Pro-Xeno Liberation Alliance";

			class PXLA_Infantry
			{
				name = "PXLA Infantry";
				class PXLA_Fireteam
				{
					name="PXLA Fireteam";
					side=0;
					faction="O_PXLA";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Object0	{side = 0; vehicle = "O_PXLA_Grunt"; rank = "CORPORAL"; position[] = {0,0,0.00143909}; dir = 0;};
					class Object1	{side = 0; vehicle = "O_PXLA_Grenadier"; rank = "PRIVATE"; position[] = {5,-4.94995,0.00143909}; dir = 0;};
					class Object2	{side = 0; vehicle = "O_PXLA_Machinegunner"; rank = "PRIVATE"; position[] = {-5,-4.94995,0.00143909}; dir = 0;};
					class Object3	{side = 0; vehicle = "O_PXLA_AT_Grunt"; rank = "PRIVATE"; position[] = {10,-9.94995,0.00143909}; dir = 0;};
				};
				class PXLA_Assault_Squad
				{
					name="PXLA Assault Squad";
					side=0;
					faction="O_PXLA";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Object0	{side = 0; vehicle = "O_PXLA_Rifleman"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
					class Object1	{side = 0; vehicle = "O_PXLA_Medic"; rank = "CORPORAL"; position[] = {20,-20,0.00143909}; dir = 0;};
					class Object2	{side = 0; vehicle = "O_PXLA_Marksman"; rank = "PRIVATE"; position[] = {-10,-10,0.00143909}; dir = 0;};
					class Object3	{side = 0; vehicle = "O_PXLA_AT_Grunt"; rank = "PRIVATE"; position[] = {-15,-15,0.00143909}; dir = 0;};
					class Object4	{side = 0; vehicle = "O_PXLA_Infiltrator"; rank = "PRIVATE"; position[] = {15,-15,0.00143909}; dir = 0;};
					class Object5	{side = 0; vehicle = "O_PXLA_HeavyGunner"; rank = "PRIVATE"; position[] = {-5,-5,0.00143909}; dir = 0;};
					class Object6	{side = 0; vehicle = "O_PXLA_Machinegunner"; rank = "PRIVATE"; position[] = {5,-5,0.00143909}; dir = 0;};
					class Object7	{side = 0; vehicle = "O_PXLA_Grunt"; rank = "PRIVATE"; position[] = {10,-10,0.00143909}; dir = 0;};
				};
				class PXLA_Anti_Armor
				{
					name="PXLA Anti-Armor Team";
					side=0;
					faction="O_PXLA";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Object0	{side = 0; vehicle = "O_PXLA_Grunt"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
					class Object1	{side = 0; vehicle = "O_PXLA_AT_Grunt"; rank = "PRIVATE"; position[] = {-5,-5,0.00143909}; dir = 0;};
					class Object2	{side = 0; vehicle = "O_PXLA_AT_Grunt"; rank = "PRIVATE"; position[] = {5,-5,0.00143909}; dir = 0;};
					class Object3	{side = 0; vehicle = "O_PXLA_Medic"; rank = "PRIVATE"; position[] = {10,-10,0.00143909}; dir = 0;};
				};
				class PXLA_Anti_Armor
				{
					name="PXLA Anti-Air Team";
					side=0;
					faction="O_PXLA";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Object0	{side = 0; vehicle = "O_PXLA_Grunt"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
					class Object1	{side = 0; vehicle = "O_PXLA_AA_Grunt"; rank = "PRIVATE"; position[] = {-5,-5,0.00143909}; dir = 0;};
					class Object2	{side = 0; vehicle = "O_PXLA_AA_Grunt"; rank = "PRIVATE"; position[] = {5,-5,0.00143909}; dir = 0;};
					class Object3	{side = 0; vehicle = "O_PXLA_Medic"; rank = "PRIVATE"; position[] = {10,-10,0.00143909}; dir = 0;};
				};
			};
		};
	};
}