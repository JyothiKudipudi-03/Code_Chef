/*   Netflix
Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.
Given that Alice, Bob, and Charlie have  A,B, and C rupees respectively and a Netflix subscription costs X rupees, 
find whether any two of them can contribute to buy a subscription.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         int t;
         cin >> t;
         while(t--){
                 int A,B,C,X;
                 cin >> A >> B >> C >> X;
                 if((A+B)>=X || (B+C)>=X || (A+C)>=X){
                         cout << "YES" << endl;
                 }
                 else {
                         cout << "NO"<<endl;
                 }
         }
}
