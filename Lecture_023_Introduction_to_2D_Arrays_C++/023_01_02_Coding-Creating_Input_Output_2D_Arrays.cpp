#include<iostream>
using namespace std;

int main(){
    // create 2d array
    int arr[3][4];

    // taking input -> row col input 
    for(int col = 0; col < 4; col++){
        for(int row = 0; row < 3; row++){
            cin >> arr[row][col];
          }
    }
    // print

    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
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
// 1
// 2
// 3
// 1 4 7 
// 2 5 8
// 3 6 9
// 0 3 3