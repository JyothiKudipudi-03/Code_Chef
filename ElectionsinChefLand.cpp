/*  Elections in Chefland
Election season has started in Chefland and the election commission wants to know the count of eligible voters.
There are N people in Chefland where the age of the ith person in Ai.
Given that a person needs to be at least X years old to vote, find the number of eligible voters.  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, X;
                cin >> N >> X;
                vector < int > arr(N);
                for (int i = 0; i < N; i++) {
                        cin >> arr[i];
                }
                int count = 0;
                for (int i = 0; i < N; i++) {
                        if (arr[i] >= X) {
                                count++;
                        }
                }
                cout << count << endl;
        }
}
