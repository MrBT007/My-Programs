// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);

    return (n & mask);
}

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n | (val << pos);
}

int main()
{
    int n, pos;
    cin >> n >> pos;
    // cout << getBit(n, pos);
    // cout<<setbit(n,pos);
    // cout<<clearBit(n,pos);
    cout << updateBit(n, pos, 1); // --> assuming update 1
    return 0;
}

/* Code Explanation

getBit();

5 Binary -->  0101

1<<2(position) --> 0100 --> matalb em k 1 ne 2nd position par replace karo .

pachi 0100 and 0101 nu and lidhu --> aama darek bit nu and operate thaay means 0 1 0 1   1 & 1 = 1 and 1 & 0 = 0
                                                                               0 1 0 0
                                                                               --------
                                                                               0 1 0 0 

setBit();

5 Binary --> 0101

1<<1 --> place 1 at 1st position from last --> 0010

pachi 0010 ane 0101 nu or lidhu -->  0 1 0 1      0 | 1 = 1 and 1 | 1 = 1 and 0 | 0 = 0
                                     0 0 1 0
                                    ---------
                                     0 1 1 1  --> which gives 7

clearBit();

5 Binary --> 0101

1<<2 --> Place 1 at 2nd position form last --> 0100

have badhi bit flip karva --> ~(1<<2) --> 1011

have 0101 and 1011 nu &  jene 'n' maa j store kro --> 0 1 0 1      (aa karva thi 2nd position par thi 1 clear thai jaay che)
                                                      1 0 1 1
                                                     ---------
                                                      0 0 0 1  --> which gives 1

updateBit();

5 Binary --> 0101

1<<2 --> Place 1 at 2nd position form last --> 0100

have badhi bit flip karva --> ~(1<<2) --> 1011

pachi 0100 and 0101 nu and lidhu --> 0 1 0 1   1 & 1 = 1 and 1 & 0 = 0
                                     0 1 0 1
                                     --------
                                     0 1 0 1

have aa 0100 ma value(0 or 1)>>pos ex. 1<<1 --> 0110 

have aa 0110 ane 'n' 0101 nu or lo --> 0 1 0 1      (aa karva thi 'n' 0101 ma 2nd position par 1 aave che   )
                                       0 1 1 0
                                      ---------
                                       0 1 1 1 --> which gives 7
*/