// Duplicate In Array
// Posted: 28 Nov, 2020
// Difficulty: Easy
// PROBLEM STATEMENT
// You are given an array ‘ARR’ of size ‘N’ containing each number 
// between 1 and ‘N’ - 1 at least once. There is a single integer 
// value that is present in the array twice. Your task is to find 
// the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value
// present in the array is 4. Hence, the answer is 4 in this case.
// Note :
// A duplicate number is always present in the given array.
// Input Format:
// The first line of the input contains an integer, 'T,’ denoting 
// the number of test cases.
// The first line of each test case contains a single integer, 'N',
// denoting the number of elements in the array.
// The second line of each test case contains 'N' space-separated 
// integers denoting the elements of the array 'ARR'.
// Output Format:
// For each test case, print a single integer - the duplicate 
// element in the array.

// Print the output of each test case in a separate line.
// Constraints:
// 1 <=  T  <= 10
// 2 <=  N <= 10 ^ 5
// 1 <=  ARR[i]  <= N - 1

// Where 'T' denotes the number of test cases, 'N' denotes the
// number of elements in the array, and 'ARR[i]' denotes the 'i-th' 
// element of the array 'ARR'.

// Time limit: 1 sec



int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
    
    // XOR ing all array elements:
    
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
	// XOR [1, n -1]
    for(int i = 1; i < arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}