/* Writing Speed
Rahul has a 5-page assignment due in 60 minutes. He can write one page in X minutes.
Determine if Rahul can complete the assignment within the given time constraint.

Input Format
The only line of input will contain a single integer X, denoting the time taken (in minutes) by Rahul to write one page.
Output Format
Print YES if Rahul can complete the assignment in time, otherwise print NO.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         int X ;
         cin >> X  ;
         if(X*5<=60){
                 cout << "YES" << endl;
         }
         else{
                 cout << "NO" << endl;
         }
         return 0;
}
