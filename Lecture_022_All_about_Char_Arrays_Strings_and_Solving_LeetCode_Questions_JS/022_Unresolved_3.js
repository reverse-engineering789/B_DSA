// 022_04_02_Leetcode_Solution_Valid_Palindrome.js


// Not able to understand:    
//  s = s.replace(/[^a-zA-Z0-9]/g,'')



// leetcode valid Palindrome

// LeetCode: 

// Valid Palindrome

// Add to List

// Share
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.

// Runtime: 64 ms, faster than 91.75% of JavaScript online submissions for Valid Palindrome.
// Memory Usage: 36.5 MB, less than 100.00% of JavaScript online

const isPalindrome = s => {
    s = s.toLowerCase().replace(/[^a-z0-9]/gi,'');
    for (let i = 0, j = s.length - 1; i <= j; i++, j--) {
      if (s.charAt(i) !== s.charAt(j)) return false;
    }
    return true;
  }

// my code: littile modified 
const isPalindrome = s => {
    s = s.toLowerCase().replace(/[^a-z0-9]/g,'')
     let i = 0;
     let j = s.length - 1
     while (i<j){
      if (s[i]!=s[j]) {
        return false
    }
    i++
    j--
}
    return true;
}

  let test = isPalindrome('Noo n')
  console.log(test)