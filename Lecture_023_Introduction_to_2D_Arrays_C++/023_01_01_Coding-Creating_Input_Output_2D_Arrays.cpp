#include<iostream>
using namespace std;

int main(){
    // create 2d array
    int arr[3][4];

    // taking input -> row wise input 
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
          }
    }
    // print

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
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
// 1 2 3 4 
// 5 6 7 8
// 9 1 2 3