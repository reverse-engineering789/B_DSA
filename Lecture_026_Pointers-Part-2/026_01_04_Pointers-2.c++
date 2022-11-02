

#include <iostream>
using namespace std;

int main () {

 int arr[10] = {23,122,41,67};

int temp[10];
cout << "sizeof(temp)" << sizeof(temp) << endl;
cout <<  "sizeof(*temp)" << sizeof(*temp) << endl;
cout <<  "sizeof(&temp)" << sizeof(&temp) << endl;
int *ptr = &temp[0];
cout << "sizeof(ptr)" << sizeof(ptr) << endl;
cout <<  "sizeof(*ptr)" << sizeof(*ptr) << endl;
cout <<  "sizeof(&ptr)" << sizeof(&ptr) << endl;
return 0;
}  

// Output:
// sizeof(temp)40
// sizeof(*temp)4
// sizeof(&temp)4
// sizeof(ptr)4
// sizeof(*ptr)4
// sizeof(&ptr)4

