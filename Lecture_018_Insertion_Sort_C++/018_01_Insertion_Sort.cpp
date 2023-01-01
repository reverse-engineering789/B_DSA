// Insertion Sort

// Difficulty: Easy
// PROBLEM STATEMENT
// You are given ‘N’ integers in the form of an array ‘ARR’. 
// Print the sorted array using the insertion sort.

// Note :
// No need to return anything. You should sort the array 
// in-place.


// For Example :
// Let ‘ARR’ be: [1, 4, 2]
// The sorted array will be: [1, 2, 4].
// Input Format :
// The first line of input contains an integer ‘T’, denoting 
// the number of test cases.

// The first line of each test case contains an integer, ‘N’, 
// representing the size of the array.

// The second line of each test case contains ‘N’ space-separated 
// integers, representing the array ‘ARR’ elements.
// Output Format :
// For each test case, print the sorted array.

// Print output of each test case in a separate line.
// Note :
// You do not need to print anything. It has already been 
// taken care of. Just implement the given function. 
// Constraints :
// 1 <= T <= 10
// 1 <= N <= 5*10^3
// 1 <= ARR[i] <= 10^5

// Time Limit: 1 sec





#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i -1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                // shift 
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}