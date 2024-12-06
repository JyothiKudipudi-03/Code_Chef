/*Sweets Shop
Sushil went to a sweet shop because he always craves to eat sweets. This is not good for his health as he has diabetes, but he doesn't care. A laddu costs Rs. 
10
10 while a jalebi costs Rs. 
20
20.

Initially, Sushil had Rs. 
X
X but then Sushil bought 
N
N laddus, how many jalebis can he buy with the remaining money?

Input Format
The first line of input contains 
X
X and 
N
N - the initial amount of money Sushil had and the number of laddus he bought already.
Output Format
For each test case, output on a new line the the number of jalebis he can buy.

Constraints
1
≤
X
≤
100
1≤X≤100
1
≤
N
≤
10
1≤N≤10
10
⋅
N
≤
X
10⋅N≤X
Sample 1:
Input
Output
99 3
3
Explanation:
Sushil had Rs. 
99
99 but after spending on buying 
3
3 laddus, he only has Rs. 
69
69 left, which is enough to buy only 
3
3 jalebis.

Sample 2:
Input
Output
100 10
0
Explanation:
Sushil had Rs. 
100
100 but he spent all of it on buying laddus. So, he can buy 
0
0 jalebis.  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input initial amount and number of laddus
    int X, N;
    cin >> X >> N;

    // Cost calculations
    int remainingMoney = X - (N * 10);
    int jalebis = remainingMoney / 20;

    // Output the number of jalebis
    cout << jalebis << endl;

    return 0;
}
