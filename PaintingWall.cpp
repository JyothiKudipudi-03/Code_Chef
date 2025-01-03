/*   Painting Walls
Chef wants to decorate his house by painting the walls this Christmas.
Each wall has a dimension of X m ×Y m.
If the cost of paint is 2 rupees per m2, find the maximum number of walls Chef can paint completely with Z rupees. */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z;
                cin >> X >> Y >> Z;
                int Wall_paint = Z / 2;
                int Each_wall = X * Y;
                cout << Wall_paint / Each_wall << endl;
        }


}
