/*    Car or Bike
Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y;
                cin >> X >> Y;
                if (X > Y) {
                        cout << "CAR" << endl;
                }
                else if (X == Y) {
                        cout << "SAME" << endl;
                }
                else {
                        cout << "BIKE" << endl;
                }
        }
}
