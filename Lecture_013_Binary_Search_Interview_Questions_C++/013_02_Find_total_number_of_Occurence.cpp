// Find total number of occurence

// forumula to find total number of occurence = (lastIndex - firstIndex) + 1

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

  int first = firstOcc(even, 5, 3);
  int last = lastOcc(even, 5, 3);
  // forumula to find total number of occurence = (lastIndex - firstIndex) + 1
  int totalNumberOfOcc = (last - first) + 1;
  cout << "Total number of Occurece will be: " << totalNumberOfOcc << endl;
    return 0;
}

// Output:
// First Occurence of 3 is at index: 2
// last Occurence of 3 is at index: 3
// Total number of Occurece will be: 2