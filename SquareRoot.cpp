/*  Finding Square Roots
In olden days finding square roots seemed to be difficult but nowadays it can be easily done using in-built functions available across many languages .
Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using in-built functions.
So here's your chance.*/


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N;
                cin >> N;
                int sqrtt = sqrt(N);
                cout << sqrtt << endl;
        }
}
