#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << endl << endl << "Every thing is OK" << endl << endl;
}

// // Output:
// // Every thing is OK



// // ----------------------------------------



#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int * p = &i;
    int ** p2 = &p;

    cout << endl << endl << "Every thing is OK" << endl << endl;

    // Output:
    // Every     thing is OK

    cout << " PRINTING p: " << p << endl;
    cout << " PRINTING *p2: " << *p2 << endl;
//     Output:
//  PRINTING p: 0x61ff08
//  PRINTING *p2: 0x61ff08

    cout << "i: " << i << endl;
    cout << "*p: " << *p << endl;
    cout << "**p2: "  << **p2 << endl;
    
//     Output:
//     i: 5
//     *p: 5
//     **p2: 5

    cout << "&i: " << &i << endl;
    cout << "p: " << p << endl;
    cout << "*p2: "  << *p2 << endl;
    
//     Output:
//     &i: 0x61ff08
// p: 0x61ff08
// *p2: 0x61ff08


    cout << "&p: " << &p << endl;
    cout << "p2: "  << p2 << endl;

// Output:
// &p: 0x61ff04
// p2: 0x61ff04
}



