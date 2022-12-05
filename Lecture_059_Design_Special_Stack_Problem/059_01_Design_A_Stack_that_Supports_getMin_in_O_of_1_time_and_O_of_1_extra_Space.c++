// Design a stack that supports getMin() in O(1) time and O(1) extra 
// space

// Medium
// Avg time to solve 15 mins
// Success Rate 85 %

// Problem Statement
// Implement a SpecialStack Data Structure that supports getMin() 
// in O(1) time and O(1) extra space along with push(), pop(), 
// top(), isEmpty(), isFull() in O(1). To implement SpecialStack, 
// you should only use inbuilt stack data structure.

// Implemet the following Public functions:
// 1.push(data):
// This function should take one argument of type integer. It 
// pushes the element into the stack and returns nothing.

// 2. pop():
// It pops the element from the top of the stack and, in turn,
// return s the element being popped or deleted. In case the 
// stack is empty, it returns -1.

// 3. top();
// It returns the element being kept at the top of the stack. 
// In case the stack is empty, In case the stack is empty, 
// it returns -1.

// 4. isEmpty():
// It returns  a boolean value indicating whether the stack 
// is empty or not.

// 5. getMin():
// It returns the smallest element present in the stack. In 
// case the stack is empty, it returns -1.


// Operatiions Performed On the Stack:
// Query-1(DEnoted by an integer 1): Pushes integer data 
// to the stack. (push function)

// Query-2(Denoted by an integer 2): Pops the data kept at 
// the top of the stack and returns it to the caller. (pop function)

// Query -3(denoted by an integer 3): Fetches and returns 
// the data being kept at the top of the stack but doesn't 
// remove it, unlike the pop function.(top function)

// Query -4(Denoted by an integer 4): Returns a boolean 
// value denoting wheter the stack is empty or not.(isEmpty function)


// Query -5(Denoted by an integer 5): Returns the smallest 
// element present in the stack. (getMin() function)



// Detailed explanation ( Input/output format, Notes, 
// Constraints, Images )
// Sample Input 1:
// 6
// 1 13
// 1 47
// 5
// 4
// 2
// 3
// Sample Output 1:
// 13
// false
// 47
// 13
// Explanation Of Input 1:
// Here we have six queries in total.

// Query 1: Integer 1 represents the push function. 
// Hence we push element ‘13’ onto the stack.

// Query 2: Integer 1 represents the push function. 
// Hence we push element ‘47’ onto the stack.

// Query 3: Integer 5 represents the getMin function. 
// Hence we print the minimum element present in the stack that is 13.

// Query 4: Integer 4 represents the isEmpty function. 
// Hence here, we print false because the stack is not empty.

// Query 5: Integer 2 represents the pop function. 

// The stack contains element ‘47’ at the top. We remove/pop ‘47’ 
// from the stack and print ‘47’ on the new line.

// Query 6: Integer 3 represents the top function. Because we 
// have element ‘13’ at the top of the stack, we print ‘13’ on the new line.




#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);

    cout << "size of queue is: " << q.size() << endl;

    q.pop();
    
    cout << "size of queue is: " << q.size() << endl;

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}

// Output:
// size of queue is: 3
// size of queue is: 2
// queue is not empty 


// // ---------------------------------------------------------



#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);

    cout << "size of queue is: " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "size of queue is: " << q.size() << endl;

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}


// Output:
// size of queue is: 3
// size of queue is: 0
// queue is empty






#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    cout << "front of queue is: " << q.front() << endl;
    q.push(15);
    cout << "front of queue is: " << q.front() << endl;
    q.push(13);
    cout << "front of queue is: " << q.front() << endl;

    

    q.pop();
    q.pop();
    q.pop();

    

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}


// Output:
// front of queue is: 11
// front of queue is: 11
// front of queue is: 11
// queue is empty