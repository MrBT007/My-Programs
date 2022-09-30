// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void towersOfHanoi(int n, char source, char destiny, char helper)
{
    if (n == 0)
    {
        return;
    }

    towersOfHanoi(n - 1, source, helper, destiny);
    cout << "Move from " << source << " to " << destiny << "\n";
    towersOfHanoi(n - 1, helper, destiny, source);
}

int main()
{
    int blocks;
    char source, destiny, helper;
    cin >> blocks >> source >> destiny >> helper;
    towersOfHanoi(blocks, source, destiny, helper);
    return 0;
}

/*
         A   B   C

         \   \   \
        1\   \   \
        2\   \   \
        3\   \   \
        4\   \   \

now move 1,2,3,4 to C as in A has

condition : move only 1 block at a time


*/