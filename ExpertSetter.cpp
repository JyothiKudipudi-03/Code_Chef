/*   Expert Setter
A problem setter is called an expert if at least 50% of their problems are approved by Chef.
Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.   */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y;
                cin >> X >> Y;
                if (2 * Y >= X) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
