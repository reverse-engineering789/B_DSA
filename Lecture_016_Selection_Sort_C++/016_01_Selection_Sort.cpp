// Selection Sort:

// Problem statement:

// Selection sort is one of the sorting algorithms that works by repeatedly 
// finding the minimum element from t5he unsorted part of the arrray and 
// putting it at the begginnig of the unsorted region of the array.

// You are given an unsorted array consisting of no-negative integers. 
// Your task is to sort the array in non-sdecreasing order using the 
// selection sort algorithm.

// For Example:
// Selection sort implemntation for the given array:
// {29. 72, 98, 13, 87, 66, 52, 51, 36} is shown bellow:

// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 1
// 5
// 6 2 8 4 10
// Sample Output 1:
// 2 4 6 8 10
// Explanation :
// In the first step, the minimum element is 2. Thus it is swapped with
//  the starting element of the unsorted region.
// In the second step, 4 is the minimum element. Now, it is swapped 
// with the starting element of the unsorted region.
// Similarly, in the third step, the minimum element is 6, which is 
// swapped accordingly.
// In the final step, all elements are arranged as per the 
// non-decreasing order. Thus the array is sorted. 
// Sample Input 2:
// 2
// 2
// 1 2
// 4
// 4 3 2 1
// Sample Output 2:
// 1 2
// 1 2 3 4

void selectionSort(vector<int>&arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]) 
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

                                                                              


