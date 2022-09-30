package LabProject.Design_Pattern_Lab;

public class lab9_Audio_player implements lab9_media_player
{
    lab9_Media_Adapter media_adapter;
    @Override
    public void play(String AudioType, String FileName) {
        if(AudioType == "vlc" || AudioType == "mp4")
        {
            media_adapter = new lab9_Media_Adapter(AudioType);
            media_adapter.play(AudioType,FileName);
        }
        else if(AudioType == "mp3")
        {
            System.out.println("Playing mp3 file named -> "+FileName);
        }
        else
        {
            System.out.println(AudioType+" is not Supported!!!");
        }
    }
}
