#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    
    // push numbers in the stack
    s.push(2);
    s.push(3);
    
    // pop one number from the stack
    s.pop();

    cout << "Prining to element: " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty." << endl;
    }else{
        cout << "Stack is not empty." << endl;
    }

    cout << "size of the stack is: " << s.size() << endl;
}

// Output:
// Prining to element: 2
// Stack is not empty.
// size of the stack is: 1