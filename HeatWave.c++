/* Heat Wave
During a scorching heat wave, the temperature in a Chefland reached a record high of  X degrees.
The next day, the recorded temperature was Y degrees. Find whether this was a new record high or not. */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
         int X , Y;
         cin >> X >> Y;
         if(X<Y){
                 cout << "YES" << endl;
         }
         else{
                 cout << "NO" << endl;
         }
         return 0;
}
