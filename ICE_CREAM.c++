/*   ICE CREAM
Chef wants to buy 2 ice creams, each costing X dollars, for him and Chefina.
However, he only has Y dollars with him. Will he be able to buy 2 ice creams? */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int X , Y, ice_cream;
        cin >> X >> Y ;
        ice_cream = 2*X;
        if(ice_cream<=Y){
                 cout << "YES" << endl;
         }
         else{
                 cout << "No" << endl;
         }
         return 0;
}
