/*   Complementary Strand in a DNA
You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.
Chef knows that:
A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.
Using the string S, determine the sequence of the complementary strand of the DNA.  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                string s;
                cin >> s;
                string complement;
                for (int i = 0; i < n; i++) {
                        if (s[i] == 'A') complement += 'T';
                        else if (s[i] == 'T') complement += 'A';
                        else if (s[i] == 'C') complement += 'G';
                        else if (s[i] == 'G') complement += 'C';
                }
                cout << complement << endl;

        }
        return 0;
}
