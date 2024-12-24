/*  Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription.
Also, the cost of one Chef-TV subscription is X rupees. 
Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV. */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int N, X;
                cin >> N >> X;
                int Subscription = (N + 5) / 6; // Rounds up by adding 5 before dividing
                int Minimum_cost = Subscription * X;
                cout << Minimum_cost << endl;
        }
        return 0;
}
