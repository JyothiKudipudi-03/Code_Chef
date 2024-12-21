/* First and Last Digit
Given an integer N . Write a program to obtain the sum of the first and last digits of this number.   
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t; // Number of test cases
        while (t--) {
                int N, last_digit, first_digit;
                cin >> N;

                last_digit = N % 10; // Get the last digit

                first_digit = N; // Extract the first digit
                while (first_digit >= 10) { // Loop until we get the first digit
                        first_digit /= 10;
                }

                cout << last_digit + first_digit << endl; // Output the sum
        }
        return 0;
}
