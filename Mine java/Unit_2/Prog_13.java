package LabProject.Unit_2;

import java.util.Scanner;

abstract class Shape{
    abstract double area();
}

class Circle extends Shape
{
    float radius;
    Circle(float r)
    {
        radius = r;
    }
    @Override
    double area()
    {
        return (Math.PI * radius *radius);
    }
}

class Rectangle extends Shape{
    float length , width;
    Rectangle(float l , float b)
    {
        length = l;
        width = b;
    }
    @Override
    double area()
    {
        return (length * width);
    }
}

class Triangle extends Shape{
    float height , base;
    Triangle(float h , float b)
    {
        height = h;
        base = b;
    }
    @Override
    double area()
    {
        return (0.5 * base * height);
    }
}

public class Prog_13
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter the value of length and width : ");
        float l = cin.nextFloat();
        float w = cin.nextFloat();
        Rectangle r = new Rectangle(l,w);
        System.out.format("Area of this Rectangle is %.2f Unit", r.area());

    }
}
