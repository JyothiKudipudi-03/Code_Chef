/*  Is it hot or cold
Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. 
You are given the temperature C, find whether the climate is HOT or COLD. */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int C;
                cin >> C;
                if (C > 20) {
                        cout << "HOT" << endl;
                }
                else {
                        cout << "COLD" << endl;
                }
        }
        return 0;
}
