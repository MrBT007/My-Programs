// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int recChocolates(int chocolates , int wrp)
{
    if(wrp > chocolates)
        return 0;

    int extraChocolates = chocolates / wrp;

    return extraChocolates + recChocolates(extraChocolates + chocolates % wrp ,wrp); 
}

int maximumChocolates(int rs ,int price, int wrp)
{
    int chocolates = rs / price;

    return chocolates + recChocolates(chocolates , wrp);
}

int main()
{
    int rupees ;
    cin>>rupees;
    int price;
    cin>>price;
    int wrapers;
    cin>>wrapers;
    cout<<maximumChocolates(rupees,price,wrapers);
    return 0;
}