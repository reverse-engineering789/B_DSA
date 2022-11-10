// drawbacks of return by reference


#include <iostream>
using namespace std;


int main() {

 char ch = 'q';
cout << sizeof(ch) << endl;

char *c = &ch;
cout << sizeof(c) << endl;

    return 0;
}

// Output:
// 1
// 4