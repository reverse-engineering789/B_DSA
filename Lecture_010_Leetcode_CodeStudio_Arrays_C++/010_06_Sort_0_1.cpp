#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void sortOne(int arr[], int n){
    int left = 0, right = n - 1;

    while(left < right){
        while (arr[left] == 0 && left < right){
            left++;
        }
       while (arr[right] == 1 && left < right){
        right--;
       }


       // if u have reached here, it means:
       // arr[left] == 1 and arr[right] == 0

       if(left < right){
        swap(arr[left], arr[right]);
            left++;
            right--;
       }
    }
    
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};
    cout << "Original array is: " << endl;
    for(int i = 0; i <= 7; i++){
        cout << arr[i] << " "; 
    }
    sortOne(arr, 8);
    cout << endl;
    cout << "Sorted array is: " << endl;
    printArray(arr, 8);

    return 0;
}

// Output:
// Original array is: 
// 1 1 0 0 0 0 1 0
// Sorted array is:
// 0 0 0 0 0 1 1 1