/*Who Makes P1
Tyro and Dom are fighting over who makes the first problem of the contest. Both of them are very lazy so they don't want to make it.
Tyro has a patience level of A, meaning he will only be convinced on the A th time when Dom asks him to make the problem.
Dom, on the other hand, has decided to convince Tyro at most B times. If Tyro is not convinced by the B th time, Dom will proceed to make it himself.
Given the values of A and B, find out who will end up making the problem.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int A, B;
        cin >> A >> B;
        if (A <= B) {
                cout << "Tyro" << endl;
        }
        else {
                cout << "Dom" << endl;
        }
        return 0;
}
