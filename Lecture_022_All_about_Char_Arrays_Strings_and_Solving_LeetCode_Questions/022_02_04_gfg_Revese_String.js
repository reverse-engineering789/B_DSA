// Method 3:

// Use spread operator instead of split() function to convert string into array of characters i.e. [ ‘G’, ‘e’, ‘e’, ‘k’, ‘s’, ‘ ‘, ‘f’, ‘o’, ‘r’, ‘ ‘, ‘G’, ‘e’, ‘e’, ‘k’, ‘s’ ]. Learn more about the spread operator here Spread Operator
// Use reverse() function in JavaScript to reversal the array of characters i.e. [ ‘s’, ‘k’, ‘e’, ‘e’, ‘G’, ‘ ‘, ‘r’, ‘o’, ‘f’, ‘ ‘, ‘s’, ‘k’, ‘e’, ‘e’, ‘G’ ]
// Use join() function in JavaScript to join the elements of an array into a string.
// Example:


const ReverseString = str => [...str].reverse().join('');
  
document.write(ReverseString("Geeks for Geeks"))

// Output:

// skeeG rof skeeG