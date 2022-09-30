package LabProject;
import java.util.Scanner;
public class Prog_12 {
    public  static  void  main(String[]  args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 for Simple calculations");
        System.out.println("Enter 2 for finding square root");
        System.out.println("Enter 3 for convert radian to degree");
        System.out.println("Enter 4 for convert degree to radian");
        System.out.println("Enter 5 for finding trigonometric value");
        System.out.println("Enter 6 for finding log at base 10");
        System.out.println("Enter 7 to EXIT");
        System.out.println();
        while(true)
        {
            int choise = sc.nextInt();
            switch (choise)
            {

                case 2:
                {
                    System.out.println("Enter the value for finding root : ");
                    double a = sc.nextDouble();
                    System.out.println("The root of "+a+" is "+Math.sqrt(a));
                    System.out.println();
                    break;
                }
                case 3:
                {
                    System.out.println("Enter the value of Angle in radian : ");
                    double a = sc.nextDouble();
                    System.out.println("The value in degree is "+Math.toDegrees(a));
                    System.out.println();
                    break;
                }
                case 4:
                {
                    System.out.println("Enter the value of Angle in degree : ");
                    double a = sc.nextDouble();
                    System.out.println("The value in radian is "+Math.toRadians(a));
                    System.out.println();
                    break;
                }
                case 5:
                {
                    System.out.println("Enter the value of Angle");
                    double a = sc.nextDouble();
                    System.out.println("Sin("+a+") is "+Math.sin(Math.toRadians(a)));
                    System.out.println("Cos("+a+") is "+Math.cos(Math.toRadians(a)));
                    System.out.println("Tan("+a+") is "+Math.tan(Math.toRadians(a)));
                    System.out.println();
                    break;
                }
                case 6:
                {
                    System.out.println("Enter the value for finding log at base 10: ");
                    double a = sc.nextDouble();
                    System.out.println("log("+a+") is "+Math.log10(a));
                    break;
                }
                case 7:
                {
                    break;
                }
                case 1:
                {
                    System.out.println("Enter two numbers : ");
                    int a = sc.nextInt();
                    int b = sc.nextInt();
                    System.out.println("Enter 1 for + operation");
                    System.out.println("Enter 2 for - operation");
                    System.out.println("Enter 3 for / operation");
                    System.out.println("Enter 4 for * operation");
                    System.out.println("Enter 5 for % operation");
                    while(true)
                    {
                        int choise2 = sc.nextInt();
                        switch (choise2)
                        {
                            case 1:
                            {
                                System.out.println(a+b);
                                break;
                            }
                            case 2:
                            {
                                System.out.println(a-b);
                                break;
                            }
                            case 3:
                            {
                                if(b == 0)
                                {
                                    System.out.println("Error ...");
                                    break;
                                }
                                System.out.println((float) a/b);
                                break;
                            }
                            case 4:
                            {
                                System.out.println(a*b);
                                break;
                            }
                            case 5:
                            {
                                System.out.println(a%b);
                                break;
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
}

