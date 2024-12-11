/* Chef On Date
Chef and his girlfriend went on a date. Chef took 
X
X dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of 
Y
Y dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her. */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++) {
                int X, Y;
                cin >> X >> Y;
                if (X >= Y) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "No" << endl;
                }
        }
        return 0;
}
