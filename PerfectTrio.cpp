/* Perfect Trio
Chef defines a group of three friends as a perfect group if the age of one person is equal to the sum of the age of remaining two people.
Given that, the ages of three people in a group are A,B, and C respectively, find whether the group is perfect. */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int A, B, C;
                cin >> A >> B >> C;
                if ((A + B) == C || (A + C) == B || (B + C) == A) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
