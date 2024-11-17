#include <bits/stdc++.h>
using namespace std;

/*
Problem: Glass Prices
Chef is deciding whether to buy a plastic or metal frame for spectacles.

Chef will buy the metal frame if and only if its cost is at most twice the price of the plastic frame. Otherwise, Chef will buy the plastic frame.

Input:
- Two integers X and Y: the price of the plastic frame and the metal frame respectively.

Output:
- Print "METAL" if Chef buys the metal frame, otherwise print "PLASTIC".

Constraints:
1 ≤ X ≤ 2000
1 ≤ Y ≤ 2000

Examples:

Input:
499 999
Output:
PLASTIC

Input:
499 998
Output:
METAL

Input:
698 1099
Output:
METAL
*/

int main() {
    // Input: Prices of plastic and metal frames
    int plastic, metal;
    cin >> plastic >> metal;

    // Check if Chef will buy metal or plastic frame
    if (2 * plastic >= metal) {
        cout << "METAL" << endl;
    } else {
        cout << "PLASTIC" << endl;
    }

    return 0;
}
