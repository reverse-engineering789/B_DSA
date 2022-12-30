#include <iostream>
using namespace std;


int counting(int num){
    cout << "Numbers: " << endl;
    for (int i = 1; i <= num; i++){
        cout << i << endl;
    }
}
int main(){
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    counting(number);
    return 0;
}

// output:
// Enter the number: 
// 5
// Numbers: 
// 1
// 2
// 3
// 4
// 5