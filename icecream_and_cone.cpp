#include <bits/stdc++.h>
using namespace std;

/*
Problem: Icecream and Cone
Chef has X cones and Y scoops of ice cream. Each ice cream cone requires exactly one cone and one scoop of ice cream.
Your task is to determine the maximum number of ice cream cones Chef can make with the available ingredients.

Input Format:
Input will contain two integers X and Y - the number of cones and ice cream scoops, respectively.

Output Format:
Output the maximum number of ice cream cones Chef can make.

Constraints:
1 ≤ X ≤ 100
1 ≤ Y ≤ 100

Sample 1:
Input:
10 5
Output:
5

Explanation:
Chef has 10 cones and 5 scoops of ice cream. Chef can make a maximum of 5 ice cream cones.
*/

// Main Function
int main() {
    int X, Y;
    cin >> X >> Y;  // Read the values of X (cones) and Y (scoops)
    cout << min(X, Y) << endl;  // Output the minimum of X and Y, which is the max number of ice cream cones
    return 0;
}
