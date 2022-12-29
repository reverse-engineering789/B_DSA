// odd or even using modulo operator, my own solution

#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> odd


bool isEven(int a){
    if (a&1){
       return 0;
    }else{
        return 1;
    }
}
int main(){
    cout << "Enter the number: " << endl;
    int a;
    cin >> a;
    int answer = isEven(a);
    cout << "The number is: " << answer << endl;
    return 0;
}

// Output:
// Enter the number: 
// 3
// The number is: 0