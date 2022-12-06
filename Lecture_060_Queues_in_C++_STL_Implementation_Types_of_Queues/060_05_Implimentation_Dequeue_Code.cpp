// Implement Deque

// Easy
// Avg time to solve 15 mins
// Success Rate 85 %

// Problem Statement:
// Design a data structure to implement deque of size 'N'. 
// It should support the fillowing operations:

// pushFront(X): Inserts an element X in the front of the deque. 
// Returns true if the element is inserted, otherwise false.

// pushRear(X): Inserts an element X in the back of the deque. 
// Returns true if the element is inserted, otherwise false.

// popFront(): Pops an element from the front of the deque. 
// Returns -1 if the deque is empty, otherwise returns the popped element.

// popRear(): Pops  an element from the back of the deque. 
// Returns -1 if the deque is empty, otherwise returns the popped element.

// getFront(): Returns the first element of the deque. 
// If the deque is empty, it returns -1.

// getRear(): Returns the last element of the deque. 
// If the deque is empty, it returns -1.

// isEmpty(): Returns true if the deque is empty, otherwise false.

// isFull(): Returns true if the deque is full, otherwise false.




// Following types of queries denote these operations:
// Type 1: For pushFront(X) operation.
// Type 2: For pushRear(X) operation.
// Type 3: For popFront() operation.
// Type 4: For popRear() operation.
// Type 5: For getFront() operation.
// Type 6: For getRear() operation.
// Type 7: For isEmpty() operation.
// Type 8: For isFull() operation.

// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 5 7
// 7
// 1 10
// 1 20
// 2 30
// 5
// 4
// 4
// Sample Output 1:
// True 
// True 
// True
// True
// 20
// 30
// 10
// Explanation 1:
// For the given input, we have the number of queries, Q = 7.
// Operations performed on the deque are as follows:

// isEmpty(): Deque is initially empty. So, this returns true.
// pushFront(10): Insert the element ‘10’ in the front of the deque. This returns true.
// pushFront(20): Insert the element ‘20’ in the front of the deque. This returns true.
// pushRear(30): Insert the element ‘30’ in the back of the deque. This returns true.
// getFront(): Returns the front element of the deque i.e. 20
// popRear(): Pop an element from the back of the deque. This returns 30.
// popRear(): Pop an element from the back of the deque. This returns 10.

// The following image shows the snapshots of the deque after each operation:

// Sample Input 2:
// 2 5
// 1 15
// 2 25
// 1 20
// 8
// 6
// Sample Output 2:
// True
// True
// False
// True
// 25


// ---------------------------------------------------
// The bellow code was already given in the question.

// #include <bits/stdc++.h> 
// class Deque
// {
// public:
//     // Initialize your data structure.
//     Deque(int n)
//     {
//         // Write your code here.
//     }

//     // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushFront(int x)
//     {
//         // Write your code here.
//     }

//     // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushRear(int x)
//     {
//         // Write your code here.
//     }

//     // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popFront()
//     {
//         // Write your code here.
//     }

//     // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popRear()
//     {
//         // Write your code here.
//     }

//     // Returns the first element of the deque. If the deque is empty, it returns -1.
//     int getFront()
//     {
//         // Write your code here.
//     }

//     // Returns the last element of the deque. If the deque is empty, it returns -1.
//     int getRear()
//     {
//         // Write your code here.
//     }

//     // Returns true if the deque is empty. Otherwise returns false.
//     bool isEmpty()
//     {
//         // Write your code here.
//     }

//     // Returns true if the deque is full. Otherwise returns false.
//     bool isFull()
//     {
//         // Write your code here.
//     }
// };

// The above code was already give in the question.
// ----------------------------------------------------


 
#include <bits/stdc++.h> 
class Deque
{
  int *arr;
  int front;
  int rear;
  int size;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;

    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if((front == 0 && rear == size -1) || (rear == (front - 1)%(size-1))){
          return false;
        }
        else if (front == -1){
            front = rear = 0;
        }
        else if (front == 0 &&  rear != size -1){
            front = size -1;
        }else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if ((front == 0 && rear == size-1) || (rear == front - 1)%(size - 1)){
            return false;
        }else if(front  == -1){
            front = rear = 0;
        }else if (rear == size -1 && front != 0){
            rear = 0;
        }else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if (front == -1){
            return -1;
        }
       
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear){
            front = rear = -1;
        }else if (front == size - 1){
            front = 0;
        }else{
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if (front == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear){
            front = rear = -1;
        }else if (rear == 0){
            rear = size -1;
        }else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if (front == -1){
            return true;
        }else{
            return false;
        }

    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front == 0 && rear == size - 1)  || (front != 0 && rear == (front - 1)%(size - 1))){
            return true;
        }else{
            return false;
        }
    }
};