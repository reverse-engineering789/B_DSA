// First and Last Position of an Element In Sorted Array






// Note: To find the first accorence and last occurece u need
//       two funcitons. 
//       1. to find the first index 
//       2. to find the last index 




#include <iostream>
using namespace std;

// code to find the first occurence:
int firstOcc(int arr[], int n, int key){

    int s = 0, e = n-1;

    int mid = s + (e - s)/2;

    int ans = -1;
    while(s <= e){
        if (arr[mid] == key){
            ans = mid;
            e = mid -1;
        }else if (key > arr[mid]){
            s = mid + 1;
        }else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


// code to find the last occurence:

int lastOcc(int arr[], int n, int key){

    int s = 0, e = n-1;

    int mid = s + (e - s)/2;

    int ans = -1;
    while(s <= e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if (key > arr[mid]){
            s = mid + 1;
        }else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){

  int even[5] = {1,2,3,3,5};

  cout << "First Occurence of 3 is at index: " << firstOcc(even, 5, 3) << endl;
  cout << "last Occurence of 3 is at index: " << lastOcc(even, 5, 3) << endl;
    return 0;
}

// Output:
// First Occurence of 3 is at index: 2
// last Occurence of 3 is at index: 3