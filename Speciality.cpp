/*  Speciality
On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.
Given the number of problems in each of these 3 categories as X,Y, and Z respectively (where all three integers are distinct), 
find if the user has been most active as a Setter, Tester, or Editorialist.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y, Z;
                cin >> X >> Y >> Z;
                if (X > Y && X > Z) {
                        cout << "Setter" << endl;
                }
                else if (Y > X && Y > Z) {
                        cout << "Tester" << endl;
                }
                else {
                        cout << "Editorialist" << endl;
                }
        }

}
