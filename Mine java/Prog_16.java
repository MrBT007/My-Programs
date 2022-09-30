package LabProject;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Prog_16 extends JFrame implements MouseListener{
    String alpha[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    int a=0;
    boolean flag=false;
    Prog_16(){
        addMouseListener(this);
        setSize(500,500);
        setLayout(null);
        setVisible(true);
    }
    private int i,j;
    private String str = " ";
    public void init()
    {
        this.addMouseListener (this);
    }
    public void paint(Graphics g)
    {
        g.drawString(str,i,j);
    }
    public void update(Graphics g)
    {
        paint(g);
    }

    public void mouseClicked(MouseEvent e) {
        if(a==26) {
            flag=true;
        }
        if(a==1) {
            flag=false;
        }
        if (flag==false) {
            a++;
            System.out.println(alpha[a-1]);
            i = e.getX();
            j = e.getY();
            str = alpha[a-1];
            repaint();
        }
        if (flag==true) {
            a--;
            System.out.println(alpha[a-1]);
            i = e.getX();
            j = e.getY();
            str = alpha[a-1];
            repaint();
        }
    }
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

    public static void main(String[] args) {
        new Prog_16();
    }
}