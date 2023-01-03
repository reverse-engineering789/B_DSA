// 022_07_01_L_B_c_n_Replace_Spaces.js
// Not able to use .replace to replace the space by '@40'


// Question: 

// You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
// Input Format:
// The first line contains a single integer ‘T’ representing the number of test cases. 

// The first line of each test case will contain a single string 'STR' consisting of one or more words. 
// Output Format:
// For each test case, return the modified string after replacing all the spaces between words with “@40”.

// Print the output of each test case in a separate line.
// Note:
// You don’t need to print anything, It has already been taken care of. Just implement the given function.
// Constraints:
// 1 <= T <= 50
// 0 <= |STR| <= 100

// Where ‘|STR|’ is the length of a particular string including spaces.

// Time limit: 1 sec
// Sample Input 1:
// 2
// Coding Ninjas Is A Coding Platform
// Hello World
// Sample Output 1:
// Coding@40Ninjas@40Is@40A@40Coding@40Platform
// Hello@40World
// Explanation Of Sample Output 1:
// In test case 1, After replacing the spaces with “@40” string is: 

// Coding@40Ninjas@40Is@40A@40Coding@40Platform

// In test case 2, After replacing the spaces with “@40” string is: 

// Hello@40World
// Sample Input 2:
// 3
// Hello
// I love coding
// Coding Ninjas India
// Sample Output 2:
// Hello
// I@40love@40coding
// Coding@40Ninjas@40India    
// Explanation For Sample Output 2:
// In test case 1, After replacing the spaces with “@40” string is: 

// Hello

// In test case 2, After replacing the spaces with “@40” string is: 

// I@40love@40coding

// In test case 3, After replacing the spaces with “@40” string is: 

// Coding@40Ninjas@40India





let replaceSpaces = function(str){
    let res = ''

        let leng = str.length
    
      for(i = 0; i < leng; i++){
        if (str[i] === ' '){
          res = res.replace('@40')
        }
        
    }
    return res
}
    
    let test =replaceSpaces('test test')
    console.log(test)



//     c++ code:
//     #include<string>
// #include<iostream>
// using namespace std;
// string replaceSpaces(string &str){
// 	string temp = "";
    
//     for(int i=0; i<str.length(); i++) {
//         if(str[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }