package LabProject.Design_Pattern_Lab;

public class lab9_Adapter
{
    public static void main(String[] args) {
        lab9_Audio_player player = new lab9_Audio_player();

        player.play("mp4","Video 1");
        player.play("mp4","Video 2");
        player.play("vlc","VLC 1");
        player.play("mkv","Movie 1");
        player.play("mp3","Audio 1");

    }
}
