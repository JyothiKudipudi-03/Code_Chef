/*  Gold Coins 101
Chef and Chefina are competing against each other in a football game where the player scoring the maximum goals, wins.

It is known that the winner of the game receives 
A
A gold coins while the loser receives 
B
B gold coins.

Sample 1:
Input
Output
5 2 3 4
2
Explanation:
Chef scored 
3
3 goals while Chefina scored 
4
4 goals. Thus, Chef loses and gets 
2
2 coins.

Sample 2:
Input
Output
7 6 5 1
7
Explanation:
Chef scored 
5
5 goals while Chefina scored 
1
1 goal. Thus, Chef wins and gets 
7
7 coins. */
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (X > Y) {
                cout << A << endl; // Chef wins
        } else {
                cout << B << endl; // Chefina wins
        }

        return 0;
}
