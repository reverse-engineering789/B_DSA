// Modular Exponentiation

// Difficulty: Easy
// PROBLEM STATEMENT
// You are given a three integers 'X', 'N', and 'M'. 
// Your task is to find ('X' ^ 'N') % 'M'. A ^ B is 
// defined as A raised to power B and A % C is the 
// remainder when A is divided by C.

// Input Format :
// The first line of input contains a single integer 'T',
// representing the number of test cases. 

// The first line of each test contains three space-separated 
// integers 'X', 'N', and 'M'.
// Output Format :
// For each test case, return a single line containing the 
// value of ('X' ^ 'N') % 'M'.
// Note:
// You don't need to print anything, it has already been 
// taken care of. Just implement the given function.
// Follow Up :
// Can you solve the problem in O(log 'N') time complexity 
// and O(1) space complexity?
// Constraints :
// 1 <= T <= 100   
// 1 <= X, N, M <= 10^9

// Time limit: 1 sec




#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    
    while(n > 0){
        if(n&1){
            // odd
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m) %m;
        n = n >> 1;
    }
    return res;
}