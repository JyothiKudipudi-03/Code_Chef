/*  Qualify the round
In a coding contest, there are two types of problems:
Easy problems, which are worth 1 point each
Hard problems, which are worth 2 points each
To qualify for the next round, a contestant must score at least X points. 
Chef solved A Easy problems and B Hard problems. Will Chef qualify or not?  */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, A, B;
                cin >> X >> A >> B;
                int Score = (A * 1) + (B * 2);
                if (Score >= X) {
                        cout << "Qualify" << endl;
                }
                else {
                        cout << "NotQualify" << endl;
                }
        }
}
