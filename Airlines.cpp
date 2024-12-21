/*Codechef Airlines
Chef has opened a new airline. Chef has 10 airplanes where each airplane has a capacity of X passengers.
On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes.
Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day.  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z, Capacity, Available_seats, earnings;
                cin >> X >> Y >> Z;
                Capacity = 10 * X;
                Available_seats = min(Y, Capacity);
                earnings = Available_seats * Z;
                cout << earnings << endl;
        }
}
