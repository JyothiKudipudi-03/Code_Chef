/* Coldplay Tickets
You want to go to the Coldplay concert along with N of your friends. You are buying tickets for everyone.
Each ticket costs 5000 INR. Calculate the total amount you need to pay (in INR) */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
       int N, total_tickets ;
       cin >> N ;
       total_tickets = N + 1;
       cout << total_tickets*5000 << endl;
       return 0;
}
