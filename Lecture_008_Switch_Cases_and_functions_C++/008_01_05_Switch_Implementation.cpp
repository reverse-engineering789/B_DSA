// nested switch cases:

#include <iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = 'l';

    cout << endl;
    
    switch(ch){
        case 1: cout << "Frist" << endl;
                // break;
        
        case 'l': cout << "Second" << endl;
                break;
        
        default: cout << "It is default case" << endl;
    }
    cout << endl;
   return 0;
}


// Output:
// Second