/*   Count the Notebooks
You know that 1 kg of pulp can be used to make 1000 pages and 1 notebook consists of 100 pages.
Suppose a notebook factory receives N kg of pulp, how many notebooks can be made from that?  */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N;
                cin >> N;
                int Pulp = N * 1000;
                int Notebook = Pulp / 100;
                cout << Notebook << endl;
        }
}
