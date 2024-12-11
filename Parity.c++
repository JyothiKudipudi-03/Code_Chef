/* Parity
Ashu and Arvind participated in a coding contest, as a result of which they received 
N
N chocolates. Now they want to divide the chocolates between them equally.

Can you help them by deciding if it is possible for them to divide all the 
N
N chocolates in such a way that they each get an equal number of chocolates? */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int T;
        cin >> T;
        for (int i = 1; i <= T; i++) {
                int N;
                cin >> N;
                if (N % 2 == 0) {
                        cout << "Yes" << endl;
                }
                else {
                        cout << "No" << endl;
                }
        }
        return 0;
}
