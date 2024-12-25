/*  Cricket Match
There is a cricket match in Chefland. Chef's team requires N runs to win in M overs.
Given that 1 over consists of 6 balls and a player can score a maximum of 6 runs in a ball, find whether Chef's team can win.*/


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, M;
                cin >> N >> M;
                int Over = 36 * M;
                if (Over >= N) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
