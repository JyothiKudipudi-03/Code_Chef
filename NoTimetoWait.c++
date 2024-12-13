/*No Time to Wait
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved.
However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly 
H hours to solve the problem.
Now Chef finally decides to use his special power which he has gained through years of intense yoga.
He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2,…,TN hours respectively behind his current time.

Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int N, H, x;
        cin >> N >> H >> x;

        vector < int > T(N);
        for (int i = 0; i < N; i++) {
                cin >> T[i];
        }

        // Check if there's any T_i that satisfies T_i >= (H - x)
        bool canSolve = false;
        for (int i = 0; i < N; i++) {
                if (T[i] >= (H - x)) {
                        canSolve = true;
                        break; // No need to continue checking, we found a valid T_i
                }
        }

        cout << (canSolve ? "YES" : "NO") << endl;

        return 0;
}
