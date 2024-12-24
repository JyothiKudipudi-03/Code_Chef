/*  Greater Average
You are given 3 numbers A,B, and C.
Determine whether the average of A and B is strictly greater than C or not?
NOTE: Average of A and B is defined as (A+B)/2
For example, average of 5 and 9 is 7, average of 5 and 8 is 6.5. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin>>t;
        while(t--){
                float A,B,C;
                cin>>A>>B>>C;
                float Avergae = (A+B)/2;
                if(Avergae > C){
                   cout  << "YES" << endl;   
                }
                else{
                        cout << "NO" << endl;
                }
        }
}
