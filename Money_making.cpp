/* Moneymaking
Chef has 
X
X nuggets and 
Y
Y star pieces with him.

Each nugget sells for 
5000
5000 coins, and each star piece sells for 
9800
9800 coins.

How much money can Chef make by selling all of his items?

Input Format
The only line of input will contain two space-separated integers X and Y  - the number of nuggets and star pieces Chef has.
Output Format
Output a single integer: the amount of money Chef can earn by selling all his items.*/
#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int X, Y;
        cin >> X >> Y;
        int nugget = X * 5000;
        int star_piece = Y * 9800;
        cin >> nugget;
        cin >> star_piece;
        cout << nugget + star_piece << endl;
        return 0;
}
