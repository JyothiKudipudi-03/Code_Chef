/*  Instagram
Chef categorises an instagram account as spam, if, the following count of the account is more than 10 times the count of followers.
Given the following and follower count of an account as X and Y respectively, find whether it is a spam account. */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--)
        {
                int X, Y;
                cin >> X >> Y;
                if (Y * 10 < X) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
        return 0;

}
