/*               ATM
Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 US Dollar.
Calculate Pooja's account balance after an attempted transaction.*/


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int X;
        float Y;
        cin >> X >> Y;
        if (X % 5 == 0 && (Y >= X + 0.50)) {
                Y -= (X + 0.50); // Deduct withdrawal amount and bank charge
                cout << fixed << setprecision(2) << Y << endl; // Output the balance
        }
        else {
                cout << Y << endl;
        }
        return 0;

}
