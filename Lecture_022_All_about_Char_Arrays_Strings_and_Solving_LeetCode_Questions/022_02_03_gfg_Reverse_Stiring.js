
// Method 2:

// Use split() inbuilt function in JavaScript to split string into array of characters i.e. [ ‘G’, ‘e’, ‘e’, ‘k’, ‘s’, ‘ ‘, ‘f’, ‘o’, ‘r’, ‘ ‘, ‘G’, ‘e’, ‘e’, ‘k’, ‘s’ ]
// Use reverse() function in JavaScript to reversal the array of characters i.e. [ ‘s’, ‘k’, ‘e’, ‘e’, ‘G’, ‘ ‘, ‘r’, ‘o’, ‘f’, ‘ ‘, ‘s’, ‘k’, ‘e’, ‘e’, ‘G’ ]
// Use join() function in JavaScript to join the elements of an array into a string.


// Example:
  
// Function to reverse string
function ReverseString(str) {
    return str.split('').reverse().join('')
 }
   
 // Function call 
 document.write(ReverseString("Geeks for Geeks"))
 
 // Output:
 
 // skeeG rof skeeG
 
 