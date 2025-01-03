/*  Pizza Cutting
Chef has a circular pizza and a knife to cut that into pieces. He can only cut the pizza in a way such that the knife starts from the boundary of the pizza,
passes the centre, and ends at the boundary.
Find whether Chef an divide the pizza into N pieces using any (possibly zero) number of cuts.  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N;
                cin >> N;
                if (N == 1 || N % 2 == 0) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}

