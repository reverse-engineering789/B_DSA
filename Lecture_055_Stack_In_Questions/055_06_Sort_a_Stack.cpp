// Sort a Stack

// Easy
// Avg time to solve 10 mins
// Success Rate 90 %
// Problem Statement:
// You are given a stack consisting of N integers. Your task is
// to sort this stack in desending order using recursion.

// we can only use the following fucntions on this stack S.

// is_empty(s): Test whether stack is empty or not.
// push(s): Adds a new element to the stack.
// pop(s): removes top element from the stack.
// top(s): Returns value of the top element. Note that this
//  function does not remvoe elements from the stack.


// Note:
// 1. Use of any liip constructs like while, for.. etc is not
//  allowed.
// 2. The stack may contain duplicate integers.
// 3. The stack may contain any integer i.e. may either be
//  negative, positive or zero.


// Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 1
// 5
// 5 -2 9 -7 3
// Sample Output 1:
// 9 5 3 -2 -7
// Explanation Of Sample Input 1:
// 9 Is the largest element, hence it’s present at the
//  top. Similarly 5>3, 3>-2 and -7 being the smallest 
//  element is present at the last. 
// Sample Input 2:
// 1
// 5
// -3 14 18 -5 30
// Sample Output 2:
// 30 18 14 -3 -5
// Explanation Of Sample Input 2:
// 30 is the largest element, hence it’s present at the 
// top. Similarly, 18>14, 14>-3 and -5 being the smallest 
// element is present at the last. 


/* the bellow code was already given in the question*/
/* -----------------------------------------------------*/


// #include <bits/stdc++.h> 
// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// }


/* the above code was already given in the question*/
/* -----------------------------------------------------*/



#include <bits/stdc++.h> 
#include <iostream>
#include <stack>
using namespace std;


void sortedInsert(stack<int> & stack, int num){
      if (stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
         return;
      }

      int n = stack.top();
      stack.pop();

      // recusive call
      sortedInsert(stack, num);

      stack.push(n);

}
void sortStack(stack<int> &stack)
{
	// Write your code here 
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    cout << "num" << num << endl;
    stack.pop();

    // recursive call
    sortStack(stack);

    sortedInsert(stack, num);
}
