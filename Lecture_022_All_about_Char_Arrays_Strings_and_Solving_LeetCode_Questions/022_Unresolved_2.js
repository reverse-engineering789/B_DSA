// 022_04_01_L_B_Valid_Palindrome_LeetCode_Problem.js


// Not able to undrestand where to add the dirver code. 

let isValid = function( ch ){
    if ((ch >= 'a' && cvh <= 'z') || (ch >= 'A' && cvh <= 'Z') || (ch >= '0' && cvh <= '9')){
          return 1
    }
    return 0
}

let toLowerCase = function (ch) {
   if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
   return ch;
else{
   let temp = ch - 'A' + 'a';
   return temp;
}
}
let checkPalindrome = function(a) {
   let s = 0;
   let e = a.length()-1;

   while(s<=e) {
       if(a[s] != a[e])
       {
           return 0;       
       }
       else{
           s++;
           e--;
       }
   }
   return 1;
}

let isPalindrome = function(s) {
     let i = 0
     let temp = ""

     for (let j = 0; j < s.length(); j++){
         if (void(s[j])){
             temp.push_back(s[j])
         }
    }

    for(let j=0; j<temp.length(); j++) { 
       temp[j] = toLowerCase(temp[j]);
   }
   
   //check palindrome
   return checkPalindrome(temp);
   
}




// c++ code: 
// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// private:
//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }
        
//         return 0;
//     }
    
//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
//     bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;       
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// public:
//     bool isPalindrome(string s) {
        
//         //faltu character hatado
//         string temp = "";
        
//         for(int j=0; j<s.length(); j++) {   
//             if(valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }
        
//         //lowercase me kardo
//         for(int j=0; j<temp.length(); j++) { 
//             temp[j] = toLowerCase(temp[j]);
//         }
        
//         //check palindrome
//         return checkPalindrome(temp);
        
//     }
// };