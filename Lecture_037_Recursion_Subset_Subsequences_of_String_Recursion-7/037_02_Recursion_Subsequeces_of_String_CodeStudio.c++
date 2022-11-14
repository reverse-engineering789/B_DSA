 Problem statement:
 You are given a string "str" containing lowercase English letters from a to z inclusive.
 Your task is to find all non-empty possible4 subsequences of "str".

 A Subsequence of a string is the one which is generated by deleting 0 or more 
 letters from the string and keeping the rest of the letters int 
 the same order.

//  Detailed explanation ( Input/output format, Notes, Constraints, Images )
// Sample Input 1:
// 1 
// abc
// Sample Output 1:
// a ab abc ac b bc c
// Explanation Of Sample Input 1:
// All possible subsequences of abc are :  
// “a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”
// Sample Input 2:
// 1
// bbb
// Sample Output 2:
// b b b bb bb bb bbb
 
 void solve(string str, string output, int index, vector<string>& ans){
    // base case:
    if (index >= str.length()){
        if (output.length() > 0){
            ans.push_back(output);
        }
        return;
    }

    // exclude:
    solve(str, output, index+1, ans);
    
    // include:
    char element = str[index];
    output.push_back(element);
    slove(nums, output, index+1, ans);
 }

 vector<string> subsequences(string str){
    vector <string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
 }