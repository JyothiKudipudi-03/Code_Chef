/*  Sum it
Bob received an assignment from his school: he has two numbers  A and B, and he has to find the sum of these two numbers.
Alice, being a good friend of Bob, told him that the answer to this question is C.
Bob doesn't completely trust Alice and asked you to tell him if the answer given by Alice is correct or not.
If the answer is correct print "YES", otherwise print "NO" (without quotes).  
Sample 1:
Input            Output
3
1 2 3            YES
4 5 9            YES
2 3 6            NO
Explanation:
Test case 1: 
1+2=3, so Alice's answer is correct.
Test case 2:
4+5=9, so Alice's answer is correct.
Test case 3: 
2+3=5,which doesn't equal 6, so Alice's answer is incorrect. */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         int t ;
         cin >> t ;
         for(int i=1; i<=t;i++){
                 int A, B, C, Sum;
                 cin >> A >> B >> C ;
                 Sum = A + B;
                 if(Sum==C){
                         cout << "YES" << endl;
                 }
                 else{
                         cout<< "NO" << endl;
                 }
         }
         return 0 ;
}


