// Method 1:

// Check the input string that if given string is empty or just have one character or it is not of string type then it return “Not Valid string”.
// If the above condition false create an array where we can store the result. Here revArray[] is the new array.
// Loop through the array from the end to the beginning and push each and every item in the array revArray[].
// Use join() prebuilt function in JavaScript to join the elements of an array into a string.
// Example:


function ReverseString(str) {
  
    // Check input
    if(!str || str.length < 2 || 
            typeof str!== 'string') {
        return 'Not valid'; 
    }
      
    // Take empty array revArray
    const revArray = [];
    const length = str.length - 1;
      
    // Looping from the end
    for(let i = length; i >= 0; i--) {
        revArray.push(str[i]);
    }
      
    // Joining the array elements
    return revArray.join('');
}
  
document.write(ReverseString("Geeks for Geeks"))

// Output:

// skeeG rof skeeG













