/*   Water Park
Chef decides to go to the water park to play. To enter the water slide, a person must have a weight of at most W Kg and a height of at least H cm.
Chef weighs 60 Kg and his height is 130 cm.Is Chef allowed to enter the water slide? */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
        int W,H;
        cin >> W >> H;
        if(60 <= W && 130 >= H) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
}
