
#include <iostream>
using namespace std;

int main () {

 int arr[10] = {0};

 cout << "address of first memory block is " << arr << endl;
 cout << arr[0] << endl;
 cout << arr[1] << endl;
 cout << "address of first memory block is: " << &arr[0] << endl;

//  Output:
//  address of first memory block is 0x61fee8
// 0
// 0
// address of first memory block is: 0x61fee8
return 0;
}  



