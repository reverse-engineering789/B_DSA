
// Reverse Stack Using Recursion
// Contributed by
// Easy
// Avg time to solve 21 mins
// Success Rate 80 %
// Share
// 126 upvotes
// Problem Statement

// Reverse a given stack of integers using recursion.
// Note:
// You are not allowed to use any extra space other tham the interal stack space
// used due to recusion.
// You are not allowed to use the loop constructs of any sort available as handy.
// For example: for, for-each, while, etc.
// The only inbult stack methods allowed are:
// push(x) -- Push element x onto stack.
// pop() -- Removes the element on top of the stack.
// top() -- Get the top element.


/* --------------------------------------------------

void reverseStack(stack<int> &stack) {
    // Write your code here
}

// --------------------------------------------------
*/

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element){
    // base case:
    if(s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();
    
    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if (stack.empty()){
        return;
    }
   
    int num = stack.top();
    stack.pop();

    // recursive call

    reverseStack(stack);

    insertAtBottom(stack, num);
}    

