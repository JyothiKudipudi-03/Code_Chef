#include <bits/stdc++.h>
using namespace std;

/*
Problem: Diwali Discount
Chef is trying to buy a Diwali gift for Rs. A, and he has a voucher for Rs. B. Chef will have to pay the remaining amount after applying the voucher. If the voucher's value exceeds the gift's value, Chef will not have to pay anything.

Input:
The first and only line of input contains 2 integers - A and B.

Output:
Output the amount Chef will pay for buying the gift.

Constraints:
1 ≤ A, B ≤ 5000

Examples:
Input:
3000 1000
Output:
2000

Input:
1000 5000
Output:
0
*/

// Main Function
int main() {
    int A, B;
    cin >> A >> B;
    if (A < B) {
        cout << 0 << endl;  // Voucher covers full amount
    } else {
        cout << (A - B) << endl;  // Remaining amount to be paid
    }
    return 0;
}
