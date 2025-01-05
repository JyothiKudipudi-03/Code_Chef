/*  Air Conditioner Temperature
There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. 
Everyone has a demand each:

Alice wants the temperature to be at least A degrees.
Bob wants the temperature to be at most B degrees.
Charlie wants the temperature to be at least C degrees.
Can they all agree on some temperature, or not?   */
#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int A, B, C;
                cin >> A >> B >> C;
                if (max(A, C) <= B) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
