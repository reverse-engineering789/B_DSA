// size of pointer

// problem: i am getting the size of the pointer as 4, but the expected size 
// was 8

#include <iostream>
using namespace std;

int main () {
    int num = 5;

    cout << num << endl;

    cout << "address of num is: " << &num << endl;
    
    int *ptr = &num;

    // cout << "value is: " << *ptr << endl;
    
    // cout << "this will print the address: " << ptr << endl;
  

  double d = 4.3;
  double *p2 = &d;

    cout << "size of integer: " << sizeof(num) << endl;
    cout << "size of pointer: " << sizeof(ptr) << endl;
    cout << "size of pointer: " << sizeof(p2) << endl;
    cout << *p2 << endl;
    cout << p2 << endl;
    return 0;

}


// Output:
// size of integer: 4
// size of pointer: 4
// size of pointer: 4
// 4.3
// 0x61fef8




// // --------------------------------------------------------------------




