class CfgMarkers
{
	class flag_XDF: Flag
	{
		name="Xeno Defence Force";
		icon="\xdf\markers\flag_XDF.paa";
		texture="\xdf\markers\flag_XDF.paa";
		size=32;
		scope=1;
		shadow=0;
		color[]={1,1,1,1};
		markerClass="Flags";
	};
	class xdf_alien: Flag
	{
		name="Xeno Marker";
		icon="\xdf\markers\xdf_alien.paa";
		texture="\xdf\markers\xdf_alien.paa";
		size=32;
		scope=1;
		shadow=1;
		color[]={0,0,0,1};
		markerClass="Military";
	};
	class xdf_wolf: Flag
	{
		name="XDF Wolf";
		icon="\xdf\markers\xdf_wolf.paa";
		texture="\xdf\markers\xdf_wolf.paa";
		size=32;
		scope=1;
		shadow=1;
		color[]={0,0,0,1};
		markerClass="Military";
	};
};