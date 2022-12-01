// Delete middle element from stack

// Problem Statement:
// You are having a stack "ARR" of size 'N+1'. Your task is to 
// delete the middlemost element so that the size of resulting 
// stack is 'N'.

// A stack is a linear data structire where both insertion and 
// deletion of elements take place at the top. It floows 
// LIFO(last in first out) approaches. Books piled on top of 
// each other is an example of stack, where you can only remove 
// a single book at a time,
// which is at athe top of the stack. Likewise, u can only 
// add a single book at a time, on the top of the srtack only.

// Example:
// INPUT: ARR[] = [1,2,3,4,5], N = 4;
// OUTPUT: ARR[] = [1,2,3,4,5]

// The above example contains an odd number of elements, 
// hence the middle element is clearly the (N+1)/ 2th 
// element whicfh is removed from the stack in the output.

// INTPUT:ARR[] = [5,6,7,8] , N = 3
// OUTPUT: ARR[] = [5,7,8]


// The above example contains an even number of elements, so 
// out of the two middle elements, we consider the one which 
// occurs first. Hence, the middle element would be4 ((N+1)/2-1) 
// element, which is 6 and is removed from the stack in the output.



// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 2
// 4
// 1 2 3 4 5
// 7
// 83 74 67 49 94 8 11 1
// Sample Output 1:
// 1 2 4 5
// 83 74 67 94 8 11 1
// Explanation for Sample 1:
// In the 1st testcase, there are an odd number of elements, 
// hence the middle element is clearly the (N+1) / 2th element 
// which is 3, and is removed from the stack in the output.

// In the 2nd testcase, there are an odd number of elements, 
// hence the middle element is clearly the (N+1) / 2th 
// element which is 49, and is removed from the stack in the output.
// Sample Input 2:
// 3
// 1
// 5 10    
// 4
// 1 3 4 2 7
// 5
// 9 5 2 7 8 6
// Sample Output 2:
// 10
// 1 3 2 7
// 9 5 7 8 6

/* 
the above code was already given in the question
#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   
}
*/

#include <iostream>
#include<stack>
#include <bits/stdc++.h> 
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    // base case:
    if(count == size/2){
        inputStack.pop();
        return;
        }
        int num = inputStack.top();
        inputStack.pop();

        // recursive call
        solve(inputStack, count+1, size);

        inputStack.push(num);
}
    
    
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   solve(inputStack, count, N);
}