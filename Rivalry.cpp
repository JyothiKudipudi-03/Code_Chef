/*  Rivalry
Dominater and Everule are very competitive, and keep trying to show that they are better at competitive programming than the other. 
What better measure is there than their rating?
Both of them participated in a contest. Before the contest, Dominater's rating was R1 and Everule's rating was R2.
Dominater's rating changed by D1 in the contest, and Everule's rating changed by D2.
Who has the higher final rating after the contest?
Print "Dominater" if his rating is higher, and "Everule" if his rating is higher (without the quotes).
It is guaranteed they do not have equal ratings at the end of the contest. */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
        int  R1,R2,D1,D2;
        cin >> R1 >> R2 >> D1 >> D2;
        int Dominater = R1+D1;
        int Everule   = R2+D2;
        if(Dominater > Everule){
                cout << "Dominater" << endl;
        }
        else {
                cout << "Everule" << endl;
        }
}
