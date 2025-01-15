class CfgWeapons
{
	class QAV_ripsaw_mk30;
	class QAV_ripsaw_mk30_AX: QAV_ripsaw_mk30
	{
		displayName = "Mk44 Bushmaster II-AX";
		class HE: QAV_ripsaw_mk30
		{
			displayName = "Mk44 Bushmaster II-AX 30mm";
			magazines[] = {"QAV_ripsaw_150RND_30mm_HE_AX"};
		};
		class AP: QAV_ripsaw_mk30
		{
			displayName = "Mk44 Bushmaster II-AX 30mm";
			magazines[] = {"QAV_ripsaw_150RND_30mm_AP_AX"};
		};
	};
};