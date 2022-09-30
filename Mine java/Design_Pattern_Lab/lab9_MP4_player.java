package LabProject.Design_Pattern_Lab;

import java.io.File;

public class lab9_MP4_player implements lab9_Advance_media_player
{
    @Override
    public void playVLC(String FileName) {
        //Nothing to do
    }

    @Override
    public void playMP4(String FileName) {
        System.out.println("Playing MP4 file named -> "+ FileName);
    }
}
