// Note: cin - will stop the execution 
// when u will enter:
// 1. space: "_"
// 2. tab: \t
// 3. newline/enter: \n


#include <iostream>
using namespace std;

int main(){
    char name[20];

    cout << "Enter your name:" << endl;
    cin >> name;
    name[2] = '\0';



    cout << "Your name is: " ;
    cout << name << endl;


    return 0;
}

// Output:
// Enter your name:
// Surya
// Your name is: Su