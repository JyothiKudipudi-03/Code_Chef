/* Find Remainder
Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line. */


#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int A , B;
                cin >> A >> B;
                cout << A%B << endl;
        }
}
