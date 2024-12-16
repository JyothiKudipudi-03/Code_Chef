/*  Pass the Exam
Chef appeared for an exam consisting of 3 sections.
        .. Each section is worth 100 marks.
Chef scored A marks in Section 1,     B marks in section 2,     and C marks in section 3.
Chef passes the exam if both of the following conditions satisfy:
      ..  Total score of Chef is ≥100;
      ..  Score of each section ≥10
Determine whether Chef passes the exam or not. */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int A, B, C,TotalScore;
                cin >> A >> B >> C;
                TotalScore = A+B+C;
                if(TotalScore>=100 && A>=10 && B>=10 && C>=10){
                        cout<<"PASS"<<endl;
                }
                else{
                        cout<<"FAIL"<<endl;
                }
        }
}
