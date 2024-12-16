/* Chef and Chocolates
Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy chocolates for Chefina where each chocolate costs Z rupees.
Find the maximum number of chocolates that Chef can buy for Chefina. */

#include <bits/stdc++.h>
using namespace std;
int main() {
        int t;
        cin >> t;
        while (t--)
        {
                int x, y, z, chocolate;
                cin >> x >> y >> z;
                // your code goes here
                chocolate = x * 5 + y * 10;
                cout << chocolate / z << endl;
        }
        return 0;
}
