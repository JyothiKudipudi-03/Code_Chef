/*Just One More Episode
Chef has to attend an exam that starts in X minutes, but of course, watching shows takes priority.
Every episode of the show that Chef is watching, is 24 minutes long.
If he starts watching a new episode now, will he finish watching it strictly before the exam starts? */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int T;
        cin >> T;
        for (int i = 1; i <= T; i++) {
                int X;
                cin >> X;
                if (X > 24) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "No" << endl;
                }
        }
        return 0;
}
