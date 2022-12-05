// Implement a Queue

// Easy
// Avg time to solve 20 mins
// Success Rate 80 %



// Problem Statement
// Implement a Queue Data Structure specifically to store integer 
// data using a Singly Linked List or an array.
// You need to inplement the following public functions:

// 1. Constructor: It initializes the data memebers as required.

// 2. enqueue(data): This function should take one argument of type 
// integer.It enqueues the element into the queue.

// 3. dequeue(): It dequeuse/removes the element from the front of the 
// queue and it turn, returns the element being dequeued or removed. 
// In case the queue is empty, it returns -1.

// 4. front(): It retrns the element being kept at the front of the 
// queue.In case the queue is Empty, it returns -1.

// 5. isEmpty(): It returns a boolean value indicating wheter the 
// queue is empty or not.



// operations Pefromed On the Queue:

// Query-1(Denote by an integer 1): Enqueues intege data to the queue.

// Query-2(Denoted by an integer 2): Dequeues the data kept at the 
// front of the queue and returns it to the caller, return -1 if no 
// element is present in the queue.

// Query-3(Denoted by an integer 3): Fetches and returns the data 
// being kept at the front of the querue but doesn't remove it, unlike 
// the dequeue function, return -1 if no element is presentg in the 
// queue.

// Query-4(Denoted by an integer 4): returns a boolean value denoting 
// whether the quere is empty or not.



// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 1
// 7
// 1 17
// 1 23
// 1 11
// 2
// 2
// 2
// 2
// Sample Output 1 :
// 17
// 23
// 11
// -1
// Explanation For Sample Output 1 :
// The first three queries are of enQueue, so we will push 17, 23, and 11 into the queue.

// The next four queries are of deQueue, so we will starting removing elements from the queue, so the first element will be 17, then 23, and then 11. And after the third dequeue query, the queue is now empty so for the fourth query, we will return -1.
// Sample Input 2 :
// 1
// 3
// 2
// 1 10
// 3
// Sample Output 2 :
// -1 
// 10


#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;


class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout << "Queue is Full" << endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }



    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear){
            return -1;
        }else{
            int ans = arr[qfront];
           arr[qfront] -1;
           qfront++;
           if(qfront == rear){
            qfront = 0;
            rear = 0;
           }
           return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront == rear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};