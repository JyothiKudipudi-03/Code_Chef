/*  Good Program
In computing, the collection of four bits is called a nibble.
Chef defines a program as:   Good, if it takes exactly 
X nibbles of memory, where X is a positive integer. Not Good, otherwise.
Given a program which takes N bits of memory, determine whether it is Good or Not Good.  */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X;
                cin >> X;
                if (X % 4 == 0) {
                        cout << "Good" << endl;
                }
                else {
                        cout << "Not Good" << endl;
                }
        }

}
