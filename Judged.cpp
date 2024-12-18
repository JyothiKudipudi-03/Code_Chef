/*  Judged
The tech fest of IIT Ropar, Advitiya, has a talent show as part of the festivities.
The preliminary round of the talent show has participants being evaluated by 5 judges, and only those participants whose performance was liked by at least 4
judges will qualify for the next round.Anuj participated in the talent show, and now wants to know if he'll qualify or not.
You are given the responses of all 5 judges — help Anuj decide whether he qualified. Each judge's response is given to you as a binary integer, where:
0 means the judge didn't like Anuj's performance. 1 means the judge liked Anuj's performance. */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int R1,R2,R3,R4,R5,Qualify;
                cin>>R1>>R2>>R3>>R4>>R5;
                Qualify = R1+R2+R3+R4+R5;
                if(Qualify>=4){
                        cout <<"YES"<<endl;
                }
                else{
                        cout<<"NO"<<endl;
                }
        }
}
