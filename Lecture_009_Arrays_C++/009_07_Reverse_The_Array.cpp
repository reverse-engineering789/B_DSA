
#include <iostream>
#include <array>
using namespace std;


void reverseArray(int arr[], int size){
  
  int start = 0;
  int end = size-1;

  while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
int array[6] = {1,2,3,4,5,6};
reverseArray(array, 6);
printArray(array, 6);

}                                                                                

// Output:
// 6 5 4 3 2 1 