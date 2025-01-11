/*    Mario and Transformation
Mario transforms each time he eats a mushroom as follows:
If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating   X mushrooms.  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int x;
                cin >> x;
                x %= 3;
                if (x == 0) cout << "NORMAL\n";
                else if (x == 1) cout << "HUGE\n";
                else cout << "SMALL\n";
        }
        return 0;
}
