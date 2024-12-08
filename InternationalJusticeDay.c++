#include <bits/stdc++.h>

using namespace std;
/* International Justice Day
In honor of International Justice Day, the Supreme Court of Chefland has decided to address all pending cases simultaneously.

For a given case, the accused will be convicted if the convincing power of the prosecution, denoted by integer 
X
X, is greater than or equal to the convincing power of the defense, denoted by integer 
Y
Y.

Determine whether the accused is convicted. */

int main() {
        // your code goes here
        int X, Y;
        // Input the convincing powers of prosecution (X) and defense (Y)
        cin >> X >> Y;

        // Compare and output the result
        if (X >= Y) {
                cout << "YES" << endl;
        } else {
                cout << "NO" << endl;
        }

        return 0;
}
