/*  Course Registration
There is a group of N friends who wish to enroll in a course together.
The course has a maximum capacity of M students that can register for it.
If there are K other students who have already enrolled in the course, 
determine if it will still be possible for all the N friends to do so or not. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
                int N,M,K;
                cin >> N >> M >> K;
               if(N+K <= M){
                       cout<<"YES"<<endl;
               } 
               else{
                       cout<<"NO"<<endl;
               }
                
        }
}
