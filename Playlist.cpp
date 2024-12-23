/*  Playlist
Chef's playlist contains 3 songs named A,B, and C, each of duration exactly X minutes. Chef generally plays these 3 songs in loop, i.e, A→B→C→A→B→C→A→…
Chef went on a train journey of N minutes and played his playlist on loop for the whole journey. How many times did he listen to the song C completely? */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, X, A, B, C;
                cin >> N >> X;
                int Total_songs = N / X;
                int complete = Total_songs / 3;
                cout << complete << endl;
        }
}
