/* Parliament
An important resolution is being discussed in the Parliament of Chefland. There are N members present in the Parliament out of which X members voted 
in favour of the resolution and the remaining voted against it.
According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament 
vote in favour of the resolution.
Determine if the resolution is passed or not.*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int N, X;
                cin >> N >> X;
                if(2*X>=N){
                        cout<<"YES"<<endl;
                }
                else{
                        cout<<"NO"<<endl;
                }
        }
}

