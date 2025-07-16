class CfgMagazines
{
	class qav_300Rnd_127x99_mag;
	class qav_300Rnd_127x99_AX_mag: qav_300Rnd_127x99_mag
	{
		ammo="B_127x99_Ball_Tracer_Blue";
		displayName="12.7 mm 300rnd Tracer (AX) Belt";
		displaynameshort="AX Tracer";
		tracersEvery=1;
	};
	class qav_200Rnd_127x99_AX_mag: qav_300Rnd_127x99_AX_mag
	{	
		count = 200;
	};
	class qav_100Rnd_30mm_MP_shells_Tracer_Red;
	class qav_100Rnd_30mm_MP_shells_Tracer_AX: qav_100Rnd_30mm_MP_shells_Tracer_Red
	{
		ammo="B_30mm_AXHE";
		displayName="30 mm 100rnd Tracer (AX) Belt";
		displaynameshort="AX Tracer";
		count = 100;
	};
	class qav_200Rnd_30mm_MP_shells_Tracer_AX: qav_100Rnd_30mm_MP_shells_Tracer_AX
	{
		ammo="B_30mm_AXHE";
		displayName="30 mm 200rnd Tracer (AX) Belt";
		displaynameshort="AX Tracer";
		count = 200;
	};
	class qav_1500Rnd_12x7_belt;
	class qav_1500Rnd_12x7_belt_AX: qav_1500Rnd_12x7_belt
	{
		ammo = "B_127x99_Ball_Tracer_Blue";
		displayName = "1500Rnd SLAP-T-AX";
		displayNameShort = "SLAP-T-AX";
	};
};