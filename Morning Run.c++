/*Morning Run
Chef wants to run at least  1000 meters to reach his fitness goal.
There's a rectangular park nearby, with a length of X meters and a width of Y meters
Can Chef complete his goal by running one loop around the park? (Loop meaning running the entire path around the edge of the park.*/
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int X, Y;
        cin >> X >> Y;
        // Calculate the perimeter
        int perimeter = 2 * (X + Y);

        // Check if Chef's goal is met
        if (perimeter >= 1000) {
                cout << "YES" << endl;
        } else {
                cout << "NO" << endl;

        }
        return 0;
}
