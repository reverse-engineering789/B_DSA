#include <iostream>
using namespace std;

void update(int **p){
    // Case - 1
    p = p + 1;
    
    // Case - 2
    // *p = *p + 1;

    // Case - 3
    // **p = **p + 1;
}


int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    cout << endl << endl;
    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;

return 0;
}

// Output:
// before5
// before0x61ff08
// before0x61ff04
// after5
// after0x61ff08
// after0x61ff04

// ----------------------------------------------------


// CASE - 2

#include <iostream>
using namespace std;

void update(int **p){
    // Case - 1
    p = p + 1;
    
     // Case - 2
     *p = *p + 1;

    // Case - 3
    // **p = **p + 1;
}


int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    cout << endl << endl;
    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;

return 0;
}

// Output:
// before5
// before0x61ff08
// before0x61ff04
// after9
// after0x61ff08
// after0x61ff04

// --------------------------------------




// CASE - 3



#include <iostream>
using namespace std;

void update(int **p){
    // Case - 1
    // p = p + 1;
    
     // Case - 2
    //  *p = *p + 1;

    // Case - 3
     **p = **p + 1;
}


int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    cout << endl << endl;
    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;

return 0;
}

// Output:
// before5
// before0x61ff08
// before0x61ff04
// after6
// after0x61ff08
// after0x61ff04
// --------------------------------------