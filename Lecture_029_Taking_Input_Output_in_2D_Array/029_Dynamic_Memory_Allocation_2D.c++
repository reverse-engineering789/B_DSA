// #include <iostream>
// using namespace std;

// int main () {
   
//    int n;

//    cin >> n;

//    int **arr = new int*[n];
//    for(int i = 0; i <n; i++){
//     arr[i] = new int[n];
//    }
//    // creation done
   
//    // taking input
//    for (int i = 0; i <n; i++){
//     for (int j = 0; j < n; j++){
//         cin >> arr[i][j];
//     }
//    }
    
//     // taking output
//     cout << endl;
//     for (int i = 0; i <n; i++){
//     for (int j = 0; j < n; j++){
//         cout << arr[i][j] << " ";
//     }cout << endl;
//    }
//     return 0;

// }

// Output:
// 3
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9

// 1 2 3
// 4 5 6
// 7 8 9

// // -------------------------------------

// code - if number of rows and number of columns are different

#include <iostream>
using namespace std;

int main () {
   
   int row;
   cin >> row;
   
   int col;
   cin >> col;
   // creating a 2D array:
   int **arr = new int*[row];
   for(int i = 0; i <row; i++){
    arr[i] = new int[col];
   }
   // creation done
   
   // taking input
   for (int i = 0; i <row; i++){
    for (int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
   }
    
    // taking output
    cout << endl;
    for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        cout << arr[i][j] << " ";
    }cout << endl;
   }

   // releasing memory:
   for (int i = 0; i < row; i++){
    delete [] arr[i];
   }
   delete []arr;

   // how to create a 2D array dynamically
   // input/output
   // how to free memory
    return 0;

}


// Output:
// 3
// 3
// 1
// 2
// 3
// 4
// 5 
// 6
// 7 8 9

// 1 2 3
// 4 5 6
// 7 8 9