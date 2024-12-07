/*Sweets Shop
Sushil went to a sweet shop because he always craves to eat sweets. This is not good for his health as he has diabetes,
but he doesn't care. A laddu costs Rs. 10 while a jalebi costs Rs. 20
Initially, Sushil had Rs. X but then Sushil bought N laddus, how many jalebis can he buy with the remaining money?  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input initial amount and number of laddus
    int X, N;
    cin >> X >> N;

    // Cost calculations
    int remainingMoney = X - (N * 10);
    int jalebis = remainingMoney / 20;

    // Output the number of jalebis
    cout << jalebis << endl;

    return 0;
}
