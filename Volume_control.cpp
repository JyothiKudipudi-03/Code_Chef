/*  Volume Control
Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1
while pressing the volume down button decreases the volume by 1.
Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int X , Y, Volume;
        cin >> X >> Y;
        Volume = abs(X-Y);
        cout<< Volume << endl;
	}
        return 0;
}
