/*    High Accuracy
There are 100 questions in a paper.
Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.
It is given that Chef received exactly X (0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.  */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int T;
        cin >> T;
        while (T--) {
                int X;
                cin >> X;
                int correct = (X + 2) / 3; // Equivalent to ceil(X / 3)
                int incorrect = 3 * correct - X;
                cout << incorrect << endl;
        }

}
