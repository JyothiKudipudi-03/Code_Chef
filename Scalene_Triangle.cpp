/* Scalene Triangle
Given A,B, and C as the sides of a triangle, find whether the triangle is scalene.
Note:
A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle. */

#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int a, b, c;
                cin >> a >> b >> c;
                // your code goes here
                if (a != b && a != c && b != c) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }


}
