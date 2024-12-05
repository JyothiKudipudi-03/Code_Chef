/* Chef and Socks
Chef needs 
A
A dollars to buy himself a new pair of socks for Christmas.
If he has 
X
X dollars saved up and his parents give him an additional 
Y
Y dollars, will Chef be able to buy new socks?

Input Format
The first and only line of input will contain 
3
3 space-separated integers 
A
,
X
,
A,X, and 
Y
Y — the cost of the socks, the amount of money Chef has saved up, and the additional money he received from his parents.
Output Format
Output a single string denoting the answer: "YES" if Chef can afford the socks, and "NO" otherwise (without quotes).

Each character of the output may be printed in either uppercase or lowercase, i.e., the strings NO, No, nO, and no will all be treated as equivalent.

Constraints
1
≤
A
,
X
,
Y
≤
100
1≤A,X,Y≤100
Sample 1:
Input
Output
58 40 88
YES
Explanation:
Chef has 
40
40 dollars and his parents gave him 
88
88 dollars. Now he has 
40
+
88
=
128
40+88=128 dollars which allows him to buy socks which cost only 
58
58 dollars.  */
#include <iostream>
using namespace std;

int main() {
    // Input variables
    int A, X, Y;
    
    // Taking input
    cin >> A >> X >> Y;
    
    // Calculate total money Chef has
    int totalMoney = X + Y;
    
    // Check if Chef can afford the socks
    if (totalMoney >= A) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}


