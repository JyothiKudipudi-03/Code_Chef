/*  Candy Store
Chef has started working at the candy store. The store has 100 chocolates in total.
Chef’s daily goal is to sell X chocolates. 
For each chocolate sold, he will get 1 rupee.
However, if Chef exceeds his daily goal, he gets 2 rupees per chocolate for each extra chocolate.
If Chef sells Y chocolates in a day, find the total amount he made.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--)
        {
                int X, Y;
                cin >> X >> Y;
                // your code goes here
                if (X >= Y) {
                        cout << Y << endl;
                }
                else {
                        cout << X + ((Y - X) * 2) << endl;
                }
        }


}
