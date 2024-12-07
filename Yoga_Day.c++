/* Yoga Day 
Surya Namaskar, also known as Sun Salutation, is a series of 12 yoga poses performed in a sequence.
Chef repeats this sequence of yoga poses multiple times during his session.
Given that Chef has performed 
N yoga poses, find the number of rounds of Surya Namaskar he completed during the session.
  
Input Format
The input will contain a single integer N, denoting the number of yoga poses Chef performed during his session.

Output Format
Output the number of rounds of Surya Namaskar Chef completed during the session.
Sample 1:
Input
Output
55         4
Explanation:
Chef completed 4 rounds of Surya Namaskar comprising of 
4 * 12  = 48
4⋅12 = 48 yoga poses.
The fifth round was incomplete since Chef performed only 7 poses in that round. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
          int N;
          cin >> N ;
          cout << N/12 << endl;
          return 0;
}





