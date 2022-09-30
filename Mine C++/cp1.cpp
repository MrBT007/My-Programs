#include <bits/stdc++.h>
// This header file which contains most of another header files requires in competitive coding
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << cos(90) << endl;

    // For Multiple Input
    int a, b, c;

    cin >> a >> b; // This takes an integer at one time .. until space or /n ("Enter") not provided
                   // Ex : 1564 8   here 1564 is one integer and 4 is another integer

    c = a + b;
    cout << c << endl;

    int e;
    char d;
    cin >> d >> e;
    cout << d << " " << e; //character takes only first number as character not integer
    // Input : 123 45
    // Output : 1 23 --> Because compiler finds next continuous integer which is 23 .. but after space its unnecessary
    return 0;
}