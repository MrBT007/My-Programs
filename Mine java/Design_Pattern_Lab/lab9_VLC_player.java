package LabProject.Design_Pattern_Lab;

import java.io.File;

public class lab9_VLC_player implements lab9_Advance_media_player{
    @Override
    public void playVLC(String FileName) {
        System.out.println("Paying VLC file named -> "+FileName);
    }

    @Override
    public void playMP4(String FileName) {
        //Nothing to do
    }
}
