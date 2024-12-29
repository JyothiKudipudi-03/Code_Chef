/*   Janmansh and Coins
Janmansh received X coins of 10 rupees and Y coins of 5 rupees from Chingari. Since he is weak in math, can you find out how much total money does he have?  */



#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int T;
        cin >> T; // Read the number of test cases
        while (T--) {
                int X, Y;
                cin >> X >> Y; // Read the number of 10-rupee and 5-rupee coins
                int total = 10 * X + 5 * Y; // Calculate the total money
                cout << total << endl; // Output the result
        }
        return 0;
}
