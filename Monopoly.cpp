/*   Monopoly in Chefland
Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.
There are exactly 3 companies in the market each of whose revenues are denoted by R1,R2 and R3 respectively.
A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.
Given the revenue of the 3 companies, help Chef determine if any of them has a monopolistic advantage.  */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int R1, R2, R3;
                cin >> R1 >> R2 >> R3;
                if ((R1 + R2) < R3 || (R2 + R3) < R1 || (R1 + R3) < R2) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
