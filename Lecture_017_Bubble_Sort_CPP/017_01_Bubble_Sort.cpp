// Problem Statement
// Bubble sort is one of the sorting algorithms that works by repeatdly
// swapping the adjecent elements of the array if they are not in sorted 
// order.
// You are given an unsorted arrat consisting og N non-negative integers,
//  Your task is to sort the arraty in no-decreasing order usnign the
//  bubble sort algorithm.


// For Example:
// Bubble sort implementation for given array: {6,2,8,4,10}
// is shown below:

// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 1
// 5
// 6 2 8 4 10
// Sample Output 1:
// 2 4 6 8 10
// Sample Input 2:
// 2
// 2
// 1 2
// 4
// 4 3 2 1
// Sample Output 2:
// 1 2
// 1 2 3 4
// #include <bits/stdc++.h> 
// void bubbleSort(vector<int>& arr, int n)
// {   
//     // Write your code here.
//     for(int i = 1; i < n; i++){
//         // for round 1 to n-1
        
//         for(int j = 0; j < n-i; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }
