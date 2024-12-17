/*   TV Discount
Chef is looking to buy a TV and has shortlisted two models. The first one costs A rupees, while the second one costs B rupees.
Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one.
Help Chef determine which of the two TVs would be cheaper to buy during the sale.   */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int A, B, C, D, first_Tv, Second_Tv;
                cin >> A >> B >> C >> D;
                first_Tv = A - C;
                Second_Tv = B - D;
                if (first_Tv > Second_Tv) {
                        cout << "Second" << endl;
                }
                else if (first_Tv == Second_Tv) {
                        cout << "Any" << endl;
                }
                else {
                        cout << "First" << endl;
                }
        }
}
