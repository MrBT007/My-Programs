package LabProject.Design_Pattern_Lab;

import java.lang.reflect.UndeclaredThrowableException;

public class lab9_Media_Adapter implements lab9_media_player{
    lab9_Advance_media_player media_player;
    @Override
    public void play(String AudioType, String FileName) {
        if(AudioType == "vlc") media_player.playVLC(FileName);
        else if(AudioType == "mp4") media_player.playMP4(FileName);
    }

    public lab9_Media_Adapter(String AudioType)
    {
        if(AudioType == "vlc") media_player = new lab9_VLC_player();
        else if(AudioType == "mp4") media_player = new lab9_MP4_player();
        else System.out.println(AudioType+" is not Supported!!!");
    }
}
