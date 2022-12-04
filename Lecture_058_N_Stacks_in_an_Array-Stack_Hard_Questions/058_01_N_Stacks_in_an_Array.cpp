// N Stacks In An Array

// Hard
// Avg time to solve 20 mins
// Success Rate 80 %

// Problem Statement

// Design a data structure to inplement N stacks using array of size S. 
// It should support the following operations:

// Push(X, M): Push an element X into the Mth stack. Returns -1 if the 
// stack is empty, otherwise, returns the popped elemnent.


// Two types of queries donote these operations:
// Type 1: For push(X, M) opeartion.
// Type 2: for pop(M) operation.




// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1 :
// 3 6 5
// 1 10 1
// 1 20 1
// 1 30 2
// 2 1
// 2 2
// Sample Output 1 :
// True 
// True
// True
// 20
// 30
// Explanation 1 :
// For the given input, we have the number of stacks, N = 3, 
// size of the array, S = 6 and number of queries, Q = 5.
// Operations performed on the stack are as follows:
// push(10, 1): Push element ‘10’ into the 1st stack. This returns true.
// push(20, 1): Push element ‘20’ into the 1st stack. This returns true.
// push(30, 2): Push element ‘30’ into the 2nd stack. This returns true.
// pop(1): Pop the top element from the 1st stack. This returns 20.
// pop(2): Pop the top element from the 2nd stack. This returns 30.

// The following image shows the snapshots of the stack after each 
// operation:

// Sample Input 2 :
// 1 5 5
// 1 15 1
// 1 25 1
// 2 1
// 1 30 1
// 2 1
// Sample Output 2 :
// True
// True
// 25
// True
// 30


// ----------------------------------------------------
// the bellow code was already given in the question


// #include <bits/stdc++.h> 
// class NStack
// {
// public:
//     // Initialize your data structure.
//     NStack(int N, int S)
//     {
//         // Write your code here.
//     }

//     // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
//     bool push(int x, int m)
//     {
//         // Write your code here.
//     }

//     // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int pop(int m)
//     {
//         // Write your code here.
//     }
// };



// the above code was already given in the question
// ----------------------------------------------------




#include <bits/stdc++.h> 
class NStack
{
        // Write your code here.
        int *arr;
        int *top;
        int *next;

        int n, s;

        int freespot;

        public:
        // initialize your data structure:
        NStack(int N, int S){
            n = N;
            s = S;
            arr = new int[s];
            top = new int[n];
            next = new int[s];

            // top initialize:
            for(int i = 0; i < n; i++){
                top[i] = -1;
            }

            // next initialise
            for(int i = 0; i < s; i++){
                next[i] = i+1;
            }

            // update last value to -1
            next[s-1] = -1;

            // initialize freespot
            freespot = 0;
        }   
        
// 

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(freespot == -1){
            return false;
        }

        // find index 
        int index = freespot;
   
         // insert element into array
        arr[index] = x;
    
        // update freespot
        freespot = next[index];

       


        // update next;
        next[index] = top[m-1];

        // update top
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write yo ur code here.
        // check underflow condition:
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
