/*  Bucket and Water Flow
Alice has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters.
Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour.
She left the tap running for exactly Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled. */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int W, X, Y, Z, TotalBucketFlow;
                cin >> W >> X >> Y >> Z;
                TotalBucketFlow = (Y * Z) + W;
                if (TotalBucketFlow < X) {
                        cout << "Unfilled" << endl;
                }
                else if (TotalBucketFlow > X) {
                        cout << "overFlow" << endl;
                }
                else {
                        cout << "filled" << endl;
                }
        }
}
