// /* -----------------------------------------------------*/
// the above code was already given in the question*/

// class Solution
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n)
//     {
//         // code here
//     }
// };

// the above code was already given in the question*/
// /* -----------------------------------------------------*/

#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        stack<int> s;

        // step1: push all elements in stack.
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        // step 2: get 2 elements and compare them

        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(M, a, b, n))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        // step 3: single element in stack is potential celeb
        // so verify it

        bool rowCheck = false;
        int zeroCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
            {
                zeroCount++;
            }
        }

        // all zeros
        if (zeroCount == n)
        {
            rowCheck = true;
        }

        // column check
        bool colCheck = false;
        int oneCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
            {
                oneCount++;
            }
        }

        if (oneCount == n - 1)
        {
            colCheck = true;
        }

        if (rowCheck == true && colCheck == true)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};