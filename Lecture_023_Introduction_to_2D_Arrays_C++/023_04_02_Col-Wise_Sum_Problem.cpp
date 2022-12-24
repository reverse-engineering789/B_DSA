#include<iostream>
using namespace std;



bool isPresent(int arr[][3], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}


// to print col wise sum:
void printColSum(int arr[][3], int row, int col){
    cout << "Printing Sum -> " << endl;
    for(int col = 0; col < 3; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main(){
    // create 2d array
    int arr[3][3];
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
   
   cout << "Enter the elements: " << endl;
    // taking input -> row col input 
    for(int col = 0; col < 3; col++){
        for(int row = 0; row < 3; row++){
            cin >> arr[row][col];
          }
    }

    cout << "Printing the array: " << endl;
    // print
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search: " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)){
        cout << "Element found" << endl;
    }else{
        cout << "Element not found" << endl;
    }
    printColSum(arr, 3, 3);
    return 0;
}


// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// Printing the array: 
// 1 4 7
// 2 5 8
// 3 6 9 
// Enter the element to search:
// 5
// Element found
// Printing Sum ->
// 6 15 24