// Name : Bhut Tushar
// Basicaly armstrong number is like that .. if we cuberoot seprate number of any number and sum up .. and comes the original number
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin >> num;
    int originaln = num;
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit, 3);
        num /= 10;
    }
    if (sum == originaln)
    {
        cout << "This is Armstrong Number\n";
    }
    else
    {
        cout << "This isn't Armstrong Number\n";
    }

    return 0;
}