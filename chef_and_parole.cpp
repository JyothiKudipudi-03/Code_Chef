#include <bits/stdc++.h>
using namespace std;

/*
Problem: Chef and Parole

Chef must spend at least 7 days in prison to be released on parole.

Input Format:
- The first and only line of input consists of an integer X denoting the number of days spent in prison by the Chef.

Output Format:
- Output "YES" if the Chef will be released on parole, and "NO" otherwise.
- You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints:
1 ≤ X ≤ 30

Examples:

Input:
5
Output:
NO

Explanation:
Chef has not completed 7 days in prison.

Input:
12
Output:
YES
*/

int main() {
    // Input: Number of days spent in prison
    int prison;
    cin >> prison;

    // Check if Chef is eligible for parole
    if (prison >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
