package LabProject.Design_Pattern_Lab;


import java.sql.Array;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeSet;

public class lab4_SingletonProg
{
    public static void solve(int[] array, int N){
        int[] answer=new int[N];
        TreeSet<Integer> ts=new TreeSet<>();
        Map<Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<N;i++){
            ts.add(array[i]);
            if(hm.containsKey(array[i]))
                hm.put(array[i],hm.get(array[i])+1);
            else
                hm.put(array[i],1);
        }
        for(int i=0;i<N;i++){
            int x=array[i]*2;
            int y=ts.floor(x)==null?-1:ts.floor(x);
            if(y==array[i] && hm.get(array[i])==1){
                y=ts.floor(array[i]-1)==null?-1:ts.floor(array[i]-1);
            }
            if(y==-1)
                answer[i]=-1;
            else{
                answer[i]=y;
            }
        }
        for(int i = 0;i<answer.length;i++)
        {
            System.out.print(answer[i]);
            System.out.print(" ");
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int j = 1;
        while(t>0)
        {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            System.out.print("Case #"+j+": ");
            solve(arr,n);
            System.out.println();
            j++;
            t--;
        }
    }
}
