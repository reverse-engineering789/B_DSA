// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }

// void update(int *p){
//     *p = *p + 1;
// }

// int getSum( int arr[], int n){

//      cout << "Size of arr: " << sizeof(arr) << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//    return sum;
// }
// int main () {

//    int arr[5] = {1,2,3,4,5};

//    cout << "Sum is: " << getSum(arr,5) << endl;

// return 0;
// }  

// // Output:
// // Size of arr: 4
// // Sum is: 15


// // -----------------------------------------
// //  OR OR OR OR OR OR OR OR OR OR OR OR 
// // -----------------------------------------


// #include <iostream>
// using namespace std;

// void print(int *p) {
//     cout << *p << endl;
// }

// void update(int *p){
//     *p = *p + 1;
// }

// int getSum( int *arr, int n){

//      cout << "Size of arr: " << sizeof(arr) << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//    return sum;
// }
// int main () {

//    int arr[5] = {1,2,3,4,5};

//    cout << "Sum is: " << getSum(arr,5) << endl;

// return 0;
// }  

// // Output:
// // Size of arr: 4
// // Sum is: 15



// // ---------------------------------------------------------------




#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p){
    *p = *p + 1;
}

int getSum( int *arr, int n){

     cout << "Size of arr: " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
   return sum;
}
int main () {

   int arr[6] = {1,2,3,4,5,6};

   cout << "Sum is: " << getSum(arr+3,3) << endl;

return 0;
}  

// Output:
// Size of arr: 4
// Sum is: 15