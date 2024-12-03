#include <bits/stdc++.h>
using namespace std;

/*
Problem: Calorie Intake
Chef has decided that he will cut down on his calorie intake. He will eat at most X calories in a day.
Today, he already ate Y sweets, each having Z calories. Find out how many more calories he can eat. 
If he has already exceeded his limit, output -1.

Input Format:
The first and only line of input contains 3 integers - X, Y, and Z.

Output Format:
For each test case, output on a new line:
- -1 if Chef has exceeded his calorie limit.
- The amount of calories Chef can still eat if he has not exceeded it.

Constraints:
1 ≤ X, Y, Z ≤ 100

Sample 1:
Input:
10 2 4
Output:
2

Explanation:
Chef was allowed to eat 8 calories. He already ate 2 * 4 = 8 calories. Therefore, he has 10 - 8 = 2 calories more till he hits his limit.

Sample 2:
Input:
10 2 6
Output:
-1

Explanation:
Chef was allowed to eat 8 calories, but he already ate 2 * 6 = 12 calories. Therefore, he has exceeded his limit already, and we print -1.

Sample 3:
Input:
100 10 10
Output:
0
*/

// Main Function
int main() {
    int X_calories, sweets, Z_calories, already_ate, total_calories;
    cin >> X_calories >> sweets >> Z_calories;

    // Calculate the total calories Chef has already consumed
    already_ate = sweets * Z_calories;

    // Calculate how many more calories Chef can eat
    total_calories = X_calories - already_ate;

    // If the remaining calories are greater than or equal to 0, output the remaining calories
    if (total_calories >= 0) {
        cout << total_calories << endl;
    } else {
        cout << -1 << endl;  // If Chef exceeded his calorie limit, output -1
    }

    return 0;
}
