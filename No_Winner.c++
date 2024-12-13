/* No Winner
After a series of matches between Alice, Bob, and Cameron, their scores are A, B, and C, respectively.
Chef plans to organise M additional matches. In each match, two players compete, and there is exactly one winner.
The winner of the match receives one point.

Determine if it is possible for at least two players to end up with the same score after all M additional matches have been completed.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        int T;
        cin >> T;
        while (T--) {
                int A, B, C, M;
                cin >> A >> B >> C >> M;
                if (abs(A - B) <= M || abs(A - C) <= M || abs(B - C) <= M) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
        return 0;
}
