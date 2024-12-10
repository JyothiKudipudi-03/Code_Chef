/*   RCB vs CSK
In the recent RCB vs CSK match, RCB batted first and scored  X runs while CSK batted second and scored Y runs.
It is known that RCB qualifies to the playoffs if they win by at least 18 runs, otherwise CSK qualify.
Knowing the final scores of both teams, find out who qualified to the playoffs. */
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int RCB, CSK, Score;
        cin >> RCB >> CSK;
        Score = RCB - CSK;
        if (Score >= 18) {
                cout << "RCB" << endl;
        }
        else {
                cout << "CSK" << endl;
        }
        return 0;
}
