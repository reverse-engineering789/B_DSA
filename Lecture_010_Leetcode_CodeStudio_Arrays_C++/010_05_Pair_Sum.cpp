// Pair Sum

// PROBLEM STATEMENT
// You are given an integer array 'ARR' of size 'N' and an 
// integer 'S'. Your task is to return the list of all pairs 
// of elements such that each sum of elements of each pair 
// equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be 
// less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order 
// of their first value. In case if two pairs have the same 
// first value, the pair with a smaller second value should 
// come first.
// Input Format:
// The first line of input contains two space-separated 
// integers 'N' and 'S', denoting the size of the input 
// array and the value of 'S'.

// The second and last line of input contains 'N' 
// space-separated integers, denoting the elements of the 
// input array: ARR[i] where 0 <= i < 'N'.
// Output Format:
// Print 'C' lines, each line contains one pair i.e two 
// space-separated integers, where 'C' denotes the count 
// of pairs having sum equals to given value 'S'.
// Note:
// You are not required to print the output, it has already 
// been taken care of. Just implement the function.
// Constraints:
// 1 <= N <= 10^4
// -10^5 <= ARR[i] <= 10^5
// -2 * 10^5 <= S <= 2 * 10^5

// Time Limit: 1 sec


#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector <int>> ans;
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] + arr[j] == s){
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}