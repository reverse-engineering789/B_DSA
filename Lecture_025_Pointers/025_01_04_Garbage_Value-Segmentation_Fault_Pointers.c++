#include <iostream>
using namespace std;

int main () {
// never create a pointer like this which is pointing some 
// garbage value, 
// if u really have to then initialize it with 0.
int *p;

cout << *p << endl;

return 0;

}

// Output:
// 1528349827


// // ------------------------------------n





#include <iostream>
using namespace std;

int main () {

int *p =  0;

cout << *p << endl;

return 0;

}

// segmentation fault.
// Output:
// exited with code=3221225477 in 0.529 seconds



// // -------------------------------------------------------