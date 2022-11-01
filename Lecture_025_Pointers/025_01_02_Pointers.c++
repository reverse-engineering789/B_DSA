// #include <iostream>
// using namespace std;

// int main () {
//     int num = 5;

//     cout << num << endl;

//     cout << "address of num is: " << &num << endl;

//     return 0;

// }

// // Output:
// // 5
// // address of num is: 0x61ff0c

// // ----------------------------------------------------------------

#include <iostream>
using namespace std;

int main () {
    int num = 5;

    cout << num << endl;

    cout << "address of num is: " << &num << endl;
    
    int *ptr = &num;

    cout << "value is: " << *ptr << endl;
    
    cout << "this will print the address: " << ptr << endl;

    return 0;

}


// Output:
// 5
// address of num is: 0x61ff08
// value is: 5
// this will print the address: 0x61ff08


// // -----------------------------------------------------------







