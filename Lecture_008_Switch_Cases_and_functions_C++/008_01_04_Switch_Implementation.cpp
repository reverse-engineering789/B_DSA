// importence of break;


// default statement is not nessesory

#include <iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = 'l';

    cout << endl;
    
    switch(num){
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
// Frist
// Second