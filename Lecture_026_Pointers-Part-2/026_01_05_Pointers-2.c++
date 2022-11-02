

#include <iostream>
using namespace std;

int main () {
int a[20] = {1,2,3,5};
cout << &a << endl;
cout << a << endl;


int *p = &a[0];
cout << p << endl;
cout << *p << endl;


return 0;
}  

// Output:
// 0x61fec0
// 0x61fec0
// 0x61fec0
// 1


// // -----------------------------------------

#include <iostream>
using namespace std;

int main () {
int a[20] = {1,2,3,5};
// cout << &a << endl;
// cout << a << endl;
cout << " ->" << &a[0] << endl;

int *p = &a[0];
// cout << p << endl;
// cout << *p << endl;
cout << " -> " << &p << endl;

return 0;
}  


// Output:
//  ->0x61fec0
//  -> 0x61febc





// cout << " ->" << &a[0] << endl;
// cout << " -> " << &p << endl;