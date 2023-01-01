// Aggressive Cows

// Difficulty: Moderate
// PROBLEM STATEMENT
// Given an array of length ‘N’, where each element 
// denotes the position of a stall. Now you have ‘N’ 
// stalls and an integer ‘K’ which denotes the number 
// of cows that are aggressive. To prevent the cows 
// from hurting each other, you need to assign the 
// cows to the stalls, such that the minimum distance 
// between any two of them is as large as possible. 
// Return the largest minimum distance.

// Input Format :
// The first line contains a single integer ‘T’ 
// denoting the number of test cases.

// The first line of each test case contains two 
// integers ‘N’ and ‘K’ denoting the number of 
// elements in the array/list and the number of 
// aggressive cows.

// The second line contains ‘N’ single space-separated 
// integers denoting the elements of the array.
// Output Format :
// For each test case, print the majority element in a 
// separate line.
// Note :
// You do not need to print anything; it has already 
// been taken care of.
// Constraints :
// 1 <= T <= 5
// 2 <= N <= 20000
// 2 <= C <= N
// 0 <= ARR[i] <= 10 ^ 9

// Where ‘T’ is the number of test cases, 'N' is the 
// length of the given array and, ARR[i] denotes the 
// i-th element in the array.

// Time Limit: 1 sec.




bool isPossible(vector<int> &stalls, int k, int mid ){
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    //    Write your code here.
    int s = 0;
    
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) /2;
    
    while(s <= e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}