/* Movie Snacks
Chef is watching a movie, and during the intermission, wants to get himself some snacks.
A bucket of popcorn costs   X rupees, and a drink costs Y rupees.
There is also a combo offer available, which provides one bucket of popcorn and one drink at a cost of Z rupees.

Chef wants to buy two buckets of popcorn and three drinks.
What's the minimum amount he needs to pay to do so?  */
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int X_popcorn, Y_drink, Z_combo;
        cin >> X_popcorn >> Y_drink >> Z_combo;
        if ((X_popcorn + Y_drink) >= Z_combo) {
                cout << (2 * (Z_combo)) + Y_drink << endl;
        }
        else {
                cout << (2 * X_popcorn) + (3 * Y_drink) << endl;
        }
        return 0;
}
