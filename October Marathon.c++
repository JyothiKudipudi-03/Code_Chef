/*October Marathon
chef organised a 30 kilometres marathon in Chefland.
The participants receive medals on completing the marathon as following:

If the total time taken is less than 3 hours, they receive a GOLD medal.
If the total time taken is greater than equal to 3 hours but less than 6 hours, they receive a SILVER medal.
If the total time taken is greater than equal to 6 hours, they receive a BRONZE medal.
Chefina participated in the marathon and completed it in X hours. Which medal would she receive?*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int X;
    cin >> X;

    // Determine the medal type
    if (X < 3) {
        cout << "GOLD" << endl;
    } else if (X >= 3 && X < 6) {
        cout << "SILVER" << endl;
    } else { // Automatically handles X >= 6
        cout << "BRONZE" << endl;
    }
    return 0;
}
