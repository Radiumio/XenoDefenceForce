class CfgWeapons
{
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
		};
		class AP: autocannon_Base_F
		{
			class player;
		};
	};
	class HMG_127_MBT;
	class QAV_abramsx_M2_RWS: HMG_127_MBT
	{
		magazines[] += {"qav_300Rnd_127x99_AX_mag"};
	};
	class cannon_120mm_long;
	class cannon_120mm_M360: cannon_120mm_long
	{
		magazines[] += {"18Rnd_120mm_APFSDS_T_Blue_AX","12Rnd_120mm_HEAT_AX_T_Blue","4Rnd_120mm_Thermobaric_AX","4Rnd_120mm_cannon_AX_missiles"};
	};
	class MMG_02_coax;
	class qav_abrams_coax: MMG_02_coax
	{
		magazines[] += {"200Rnd_338_Mag_blue_tracer"};
	};
	class autocannon_30mm_M914: autocannon_30mm_CTWS
	{
		class HighROF: HE
		{
			magazines[] += {"qav_100Rnd_30mm_MP_shells_Tracer_AX"};
		};
	};
	class qav_30mm_M914_coax: autocannon_30mm_M914
	{
		class HighROF: HE
		{
			magazines[] += {"qav_100Rnd_30mm_MP_shells_Tracer_AX"};
		};
	};
	class M134_minigun;
	class qav_abramsx_XM134: M134_minigun
	{
		magazines[] += {"qav_1500Rnd_12x7_belt_AX"};
	};
	class autocannon_30mm_M914_twin: autocannon_30mm_CTWS
	{
		class HighROF: HE
		{
			magazines[] += {"qav_200Rnd_30mm_MP_shells_Tracer_AX"};
		};
	};
	class qav_abrams_m2_coax: HMG_127_MBT
	{
		magazines[] += {"qav_200Rnd_127x99_AX_mag"};
	};
};