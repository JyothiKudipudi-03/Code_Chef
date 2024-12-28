/*   Shopping Change
Chef went shopping and bought items worth X rupees(1≤X≤100). Unfortunately, Chef only has a single 100 rupees note.
Since Chef is weak at maths, can you help Chef in calculating what money he should get back after paying 100 rupees for those items?   */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int T; // Number of test cases
        cin >> T;
        while (T--) {
                int X; // Price of items
                cin >> X;
                cout << 100 - X << endl; // Calculate and print the change
        }
        return 0;
}
