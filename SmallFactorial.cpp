/*    Small factorials
You are asked to calculate factorials of some small positive integers.  */


#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial using array representation for large numbers
void factorial(int n) {
    vector<int> result(1, 1); // Initialize with 1 (0! = 1)

    // Perform multiplication from 1 to n
    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (size_t i = 0; i < result.size(); i++) {
            int product = result[i] * x + carry;
            result[i] = product % 10; // Store the last digit
            carry = product / 10;    // Carry forward the remaining
        }

        // Process remaining carry
        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Print the result in reverse order
    for (auto it = result.rbegin(); it != result.rend(); it++) {
        cout << *it;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Input number
        factorial(n); // Compute and print factorial
    }
    return 0;
}
