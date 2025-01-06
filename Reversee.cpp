#include <bits/stdc++.h>
using namespace std;

int main() { 
	// your code goes here
        int N;
        cin >> N;
        int reverse = 0;
        while(N>0){
                int digit = N%10;
                reverse = reverse*10+digit;
                N = N/10;
        }
          cout << reverse << endl;
}
