#include <stdio.h>

int main()
{

    int arr[] = {10,20,30,45,67,56,74} ;
    int i = 4 ,*j,*k,*x,*y ;
    j = &i;
    j = j+9;
    k = k-3;
    x= &arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j =&arr[4];
    k = (arr+4);
    if ( j == k)
    {
        printf("Two pointer points to same location");
    }
    else 
    {
        printf("Two pointer points to different location");
    }
// int a = 1 ;
// printf("%d %d %d\n",a , a++ , ++a);
// // printf("%d %d %d\n"a , ++a , a++);
// // printf("%d\n",++a);
// // printf("%d\n",a++);
// // printf("%d\n",a);
return 0;
}