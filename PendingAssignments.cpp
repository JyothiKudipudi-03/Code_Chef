/*  Pending Assignments
Chef has finally decided to complete all of his pending assignments.
There are X assignments where each assignment takes Y minutes to complete.
Find whether Chef would be able to complete all the assignments in Z days. */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z, days, assignment;
                cin >> X >> Y >> Z;
                days = Z * 24 * 60;
                assignment = X * Y;
                if (assignment <= days) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }

        }
}
