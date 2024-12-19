/* Monthly Budget
Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.
Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.*/


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Expenditure;
                cin >> X >> Y;
                Expenditure = 30 * Y;
                if (X >= Expenditure) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
