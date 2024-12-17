/*                  Expiring Bread
Eikooc loves bread. She has N loaves of bread, all of which expire after exactly M days. 
She can eat upto K loaves of bread in a day. Can she eat all the loaves of bread before they expire?    */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, M, K;
                cin >> N >> M >> K;
                if (M * K >= N) {
                        cout << "Yes" << endl;
                }
                else {
                        cout << "No" << endl;
                }
        }
}
