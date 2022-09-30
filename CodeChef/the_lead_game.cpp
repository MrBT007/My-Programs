#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int P1 = 0, P2 = 0;
    int flag = 1,t1,t2,max=0; 
    for(int i=0;i<n;i++) {
        cin >> t1 >> t2;
        P1 += t1;  P2 += t2;
        if(max < abs(P1-P2)) {
            max = abs(P1-P2);
            if(P1<P2) flag = 2;
            else flag = 1; 
        }
    }
    cout << flag << " " << max << endl;
}

int main() {
	// your code goes here
	solve();
	return 0;
}
