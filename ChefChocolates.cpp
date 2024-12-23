/*  Chef and Chocolates
Chef wants to gift C chocolates to Botswal on his birthday. However, he has only X chocolates with him.
The cost of 1 chocolate is Y rupees.
Find the minimum money in rupees Chef needs to spend so that he can gift C chocolates to Botswal.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int C,X,Y;
                cin >> C >> X >> Y;
                int chocolatesWithHim = C - X;
                int Cost = chocolatesWithHim*Y;
                cout << Cost << endl;
        }
}
