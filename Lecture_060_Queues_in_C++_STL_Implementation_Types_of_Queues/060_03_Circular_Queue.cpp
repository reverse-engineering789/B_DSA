// Circular Queue

// Easy
// Avg time to solve 15 mins
// Success Rate 85 %


// Problem Statement
// You will be given "Q" queries. You need to implement a 
// cirular queue according to those queries. Each query will 
// belong to one of these tow types:

// 1.'x': Enqueue element 'x' into the end of the nth queue. 
// Returns true if the element is enqueued, otherwise false.

// 2: Dequeue the element at the front of the nth queue. 
// Returns -2 if the queue is empty, otherwise, returns 
// the dequeued element.

// Note:
// Enqueue means adding an element to the end of the queue, 
// while Dequeue means removing the element from the front 
// of the queue.


// Detailed explanation ( Input/output format, Notes, Constraints, 
//                        Images )
// Sample Input 1:
// 3 7
// 1 2 
// 1 3 
// 2 
// 1 4 
// 1 6 
// 1 7 
// 2
// Sample Output 1:
// True 
// True
// 2
// True
// True
// False
// 3
// Explanation Of Sample Output 1:
// For this input, we have the size of the queue, 'N' = 3, 
// and the number of queries, 'Q' = 7.

// Operations performed on the queue are as follows:

// push(2): Push element ‘2’ into the queue. This returns true.
// push(3): Push element ‘3’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 2.
// push(4): Push element ‘4’ into the queue. This returns true.
// push(6): Push element ‘6’ into the queue. This returns true.
// push(7): Push element ‘7’ into the queue. This returns false 
// because the queue is full.
// pop(): Pop the top element from the queue. This returns 3.
// Sample Input 2:
// 4 7
// 1 11 
// 1 51 
// 1 26 
// 2 
// 1 6
// 2
// 2 
// Sample Output 2:
// True
// True
// True
// 11
// True
// 51
// 26
// Explanation For Sample Output 2:
// For this input, we have the size of the queue, 'N' = 3, and 
// the number of queries, 'Q' = 7.

// Operations performed on the queue are as follows:

// push(11): Push element ‘11’ into the queue. This returns true.
// push(51): Push element ‘51’ into the queue. This returns true.
// push(26): Push element ‘26’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 11.
// push(6): Push element ‘6’ into the queue. This returns true.
// pop(): Pop the top element from the queue. This returns 51.
// pop(): Pop the top element from the queue. This returns 26.



// --------------------------------------------
// The bellow code was already given in the question
// #include <bits/stdc++.h> 
// class CircularQueue{
//     public:
//     // Initialize your data structure.
//     CircularQueue(int n){
//         // Write your code here.
//     }

//     // Enqueues 'X' into the queue. Returns true 
//        if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         // Write your code here.
//     }

//     // Dequeues top element from queue. Returns -1 if the 
//        stack is empty, otherwise returns the popped element.
//     int dequeue(){
//         // Write your code here.
//     }
// };
// The above code was already given  in the question.
//-------------------------------------------




#include <bits/stdc++.h> 
#include <iostream>
#include <queue>
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        // to check whether queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            //  cout << "Queue is Full";
             return false;
        }else if (front == -1){  // first element to push
            front = rear = 0;
            // arr[rear] = value;
        }else if (rear == size - 1 && front != 0){
            rear = 0; // to maintain cyclic nature
            // arr[rear] = value;
        }else{
            // normal flow
            rear++;
        } 
        // push inside the queue
            arr[rear] = value;
            return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front == -1){ // to check queue is empty.
            // cout << "Queue is Empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }else if(front == size - 1){
            front = 0; // to maintain cyclic nature 
        }else{
            // normal flow
            front++;
        }
        return ans;
    }
};