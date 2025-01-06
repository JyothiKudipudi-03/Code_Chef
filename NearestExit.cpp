/*  Nearest Exit
There are two exits in a bus with 100 seats:
First exit is located beside seat number 1.
Second exit is located beside seat number 100.
Seats are arranged in a straight line from 1 to 100 with equal spacing between any 2 adjacent seats.
A passenger prefers to choose the nearest exit while leaving the bus.
Determine the exit taken by passenger sitting on seat X.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X;
                cin >> X;
                if (X <= 50) {
                        cout << "LEFT" << endl;
                }
                else {
                        cout << "RIGHT" << endl;
                }
        }
}
