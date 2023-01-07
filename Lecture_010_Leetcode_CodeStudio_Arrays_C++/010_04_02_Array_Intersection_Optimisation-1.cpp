// Intersection Of Two Sorted Arrays

// Difficulty: Easy
// PROBLEM STATEMENT
// You are given two arrays 'A' and 'B' of size 'N' and 'M' 
// respectively. Both these arrays are sorted in non-decreasing
//  order. You have to find the intersection of these two arrays.

// Intersection of two arrays is an array that consists of 
// all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur 
// in the original arrays.
// 4. If there is no intersection present then return an empty 
// array.
// Input Format :
// The first line of the input contains an integer 'T',
// denoting the number of test cases.

// The first line of each test case contains two integers 
// 'N' 'M', denoting the size of the two arrays.

// The second line of each test case contains 'N' space-separated 
// integers denoting the elements of the first array.

// The third line of each test case contains 'M' space-separated 
// integers denoting the elements of the second array.
// Output Format :
// The only line of output of each test case contains 'K'
// space-separated integers which correspond to the intersection 
// of the two arrays A and B.

// The output of each test case will be printed on a separate line.
// Note :
// You do not need to print anything, it has already been taken 
// care of. Just implement the given function.
// Constraints :
// 1 <= T <= 100
// 1 <= N, M <= 10^4
// 0 <= A[i] <= 10^5
// 0 <= B[i] <= 10^5

// Time Limit: 1 sec
// Follow Up:
// Can we solve this problem using the time complexity of 
// O(max(N, M)).


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector <int> ans;
    
    for(int i = 0; i < n; i++){
        int element = arr1[i];
        
        for(int j = 0;  j < m; j++){
            if(element < arr2[j]){
                break;
            }
            if (element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -2;
                break;
            }
        }
    }
    return ans;
}