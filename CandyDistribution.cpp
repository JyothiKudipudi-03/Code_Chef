/*  Candy Distribution
Chef has N candies. He has to distribute them to exactly  M of his friends such that each friend gets equal number of candies and each friend
gets even number of candies. Determine whether it is possible to do so.
NOTE: Chef will not take any candies himself and will distribute all the candies.   */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, M;
                cin >> N >> M;
                if (N % M == 0) {
                        int Candies = N / M;
                        if (Candies % 2 == 0) {
                                cout << "YES" << endl;
                        }
                        else {
                                cout << "NO" << endl;
                        }
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
