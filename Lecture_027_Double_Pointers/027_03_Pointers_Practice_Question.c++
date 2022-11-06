#include <iostream>
using namespace std;

int main(){
// int first = 6;
// int *p = &first;
// int *q = p;
// (*q)++;
// cout << first << endl;


// // Output:
// // 7

// // ----------


// int first = 8;
// int *p  = &first;
// cout << (*p)++ << " ";
// cout << first << endl;

// // output:
// // 8 9

// // ----------------------------


// int *p = 0;
// int first = 110;
// *p = first;
// cout << *p << endl;
// // Output: ERROR
// // exited with code=3221225477
// // segmentation fault



// // CORRECT CODE:
// int *p = 0;
// int first = 110;
// p = &first;
// cout << *p << endl;

// // Output:
// // 110

// // ---------------------------------------


// int first = 0;
// int second = 11;
// int *third = &second;
// first = *third;
// *third = *third + 1;
// cout << first << " " << second << endl;


// // Output:
// // 11 12




// // ---------------------------------------


// float f = 12.5;
// float p = 21.5;

// float *ptr = &f;

// (*ptr)++;
// *ptr = p;

// cout << *ptr << " " << f << " " << p << endl;


// // Output:
// // 21.5 21.5 21.5

// // ----------------------------------------------



// int arr[5];
// int *ptr;

// cout << sizeof(arr) << " " << sizeof(ptr) << endl;

// Output:
// 20 4


// // ----------------------------------



// int arr[] = {11, 21, 13, 14};
// cout << *(arr) << " " << *(arr+1) << endl;

// // Output:
// // 11 21


// // --------------------------

int arr[6] = {11, 12, 31};
cout << arr << " " << &arr << endl;

// Output:
// 0x61fef8 0x61fef8

// // note:
// // arr = &arr = &arr[0]
// // all 3 are the same
return 0;
}




// // ------------------------------------




