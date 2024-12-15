/*Minimum Coins
There are only 2 type of denominations in Chefland:
Coins worth 1 rupee each
Notes worth 10 rupees each Chef wants to pay his friend exactly X rupees. What is the minimum number of coins Chef needs to pay exactly X rupee
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t; // read number of test cases
        while (t--) {
                int X;
                cin >> X; // read the amount to be paid
                cout << X % 10 << "\n"; // output the number of coins needed
        }
        return 0;
}
