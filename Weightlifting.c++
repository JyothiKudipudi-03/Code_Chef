/* Weightlifting

Chef, being an international powerlifter, has participated in a powerlifting competition.
The competition consists of three rounds, i.e., squat, bench press, and, deadlift. 
In each round, the goal is to lift maximum weight, and Chef gets two attempts to do that.
For each round, the score of best attempt is taken into consideration and the total score is calculated as the sum of scores of all rounds.

You are given Chef's score in both attempts of rounds 1, 2 and 3 as A1,A2,B1,B2,C1 and C2 respectively. Find the value of Chef's total score in the competition.*/
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int A1, A2, B1, B2, C1, C2;
        cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
        int squat = max(A1, A2);
        int benchpress = max(B1, B2);
        int deadlift = max(C1, C2);
        cout << squat + benchpress + deadlift << endl;
        return 0;
}
