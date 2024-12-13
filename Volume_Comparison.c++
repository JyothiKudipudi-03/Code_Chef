/* Volume Comparison
Alice has two objects: A cuboid with length A units, height B units, and width C units.
A cube with an edge length of X units.
Alice wants to know which of the two objects has a larger volume, or if their volumes are equal. */

#include <bits/stdc++.h>
using namespace std;

int main() {
        // your code goes here
        int A, B, C, X, Cuboid, Cube;
        cin >> A >> B >> C >> X;
        Cuboid = A * B * C;
        Cube = X * X * X;
        if (Cuboid > Cube) {
                cout << "Cuboid" << endl;
        }
        else if (Cuboid == Cube) {
                cout << "Equal" << endl;
        }
        else {
                cout << "Cube" << endl;
        }
        return 0;
}
