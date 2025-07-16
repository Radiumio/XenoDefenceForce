class CfgMagazines
{
	class Aegis_200Rnd_762x51_MAG_Red_Tracer_F;
	class Aegis_200Rnd_762x51_MAG_AX_Tracer_F: Aegis_200Rnd_762x51_MAG_Red_Tracer_F
	{
		author = "Radium";
		displayName = "7.62 mm 200rnd Tracer (AX)";
		tracersEvery = 1;
		lastRoundsTracer = 200;
		displaynameshort = "AX Tracer";
		ammo="B_762x51_Ball_blue";
	};
	class Aegis_200Rnd_762x51_MAG_AX_Reload_Tracer_F: Aegis_200Rnd_762x51_MAG_AX_Tracer_F
	{
		author = "Radium";
		displayName = "7.62 mm 200rnd Reload Tracer (AX)";
		tracersEvery = 4;
		lastRoundsTracer = 10;
		displaynameshort = "AX R-Tracer";
	};
	class Aegis_20Rnd_762x51_SMAG;
	class Aegis_20Rnd_762x51_SMAG_XDF_Tracer: Aegis_20Rnd_762x51_SMAG
	{
		author = "Radium";
		scope = 2;
		displayName = "7.62 mm 20Rnd Tracer Mag (AX)";
		hiddenSelectionsTextures[] = {"\xdf_aegis\retextures\xdf_uniform\weapons\m110\mag_20Rnd_762_SMAG_black_CO.paa"};
		ammo = "B_762x51_Ball_blue";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	class Aegis_20Rnd_762x51_SMAG_XDF_Reload_Tracer: Aegis_20Rnd_762x51_SMAG_XDF_Tracer
	{
		author = "Radium";
		scope = 2;
		displayName = "7.62 mm 20Rnd Reload Tracer Mag (AX)";
		ammo = "B_762x51_Ball_blue";
		tracersEvery = 0;
		lastRoundsTracer = 4;
	};
};