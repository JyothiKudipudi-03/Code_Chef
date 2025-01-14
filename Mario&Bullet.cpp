/*    Mario and Bullet
Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does not move.
Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least Z seconds from now.   */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z;
                cin >> X >> Y >> Z;
                int goomba = Y / X;
                int Fire = max(0, Z - goomba);
                cout << Fire << endl;
        }
}
