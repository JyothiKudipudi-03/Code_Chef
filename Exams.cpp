/*  Exams
In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.  */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z;
                cin >> X >> Y >> Z;
                if (Z > (X * Y) / 2) {
                        cout << "YES" << endl;
                } else {
                        cout << "NO" << endl;
                }

        }
}
