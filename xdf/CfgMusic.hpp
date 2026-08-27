class cfgMusicClasses
{
    class XDF_Music
    {
        displayName = "[XDF] Xeno Defence Force";
    };
};
class CfgMusic
{
    class XDF_MainTheme
    {
        name = "XDF Main Menu Theme";
        sound[] = {"\xdf\mainmenu\xdf_maintheme.ogg", 1, 1};
        theme = "Lead";
        duration = 248;
        //musicClass = "XDF_Music";
    };
    class XDF_ex25Nemesis
    {
        name = "XDF - EX-25 Nemesis";
        sound[] = {"\xdf\sounds\music\XDF_ex25Nemesis.ogg", 1, 1};
        theme = "Lead";
        duration = 240;
        musicClass = "XDF_Music";
    };
};