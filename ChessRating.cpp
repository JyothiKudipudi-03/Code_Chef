/*   Chess Ratings
Alice has recently started playing Chess. Her current rating is X. She noticed that when she wins a game, her rating increases by 8 points.
Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to  Y?  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y;
                cin >> X >> Y;
                int Difference = Y - X;
                if (Difference <= 0) {
                        cout << 0 << endl;
                }
                else {
                        cout << (Difference + 7) / 8 << endl;
                }
        }
}
