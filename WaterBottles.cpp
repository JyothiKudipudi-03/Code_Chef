/*   Chef and Water Bottles
Chef has N empty bottles where each bottle has a capacity of X litres.
There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.
Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely. */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, X, K;
                cin >> N >> X >> K;
                int maxfillable = K / X;
                int result = min(maxfillable, N);
                cout << result << endl;

        }
}
