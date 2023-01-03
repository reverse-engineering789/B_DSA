// 1. Reverse a String With Built-In Functions
// For this solution, we will use three methods: the String.prototype.split() method, the Array.prototype.reverse() method and the Array.prototype.join() method.

// The split() method splits a String object into an array of string by separating the string into sub strings.
// The reverse() method reverses an array in place. The first array element becomes the last and the last becomes the first.
// The join() method joins all elements of an array into a string.




function reverseString(str) {
    // Step 1. Use the split() method to return a new array
    var splitString = str.split(""); // var splitString = "hello".split("");
    // ["h", "e", "l", "l", "o"]
 
    // Step 2. Use the reverse() method to reverse the new created array
    var reverseArray = splitString.reverse(); // var reverseArray = ["h", "e", "l", "l", "o"].reverse();
    // ["o", "l", "l", "e", "h"]
 
    // Step 3. Use the join() method to join all elements of the array into a string
    var joinArray = reverseArray.join(""); // var joinArray = ["o", "l", "l", "e", "h"].join("");
    // "olleh"
    
    //Step 4. Return the reversed string
    return joinArray; // "olleh"
}
 
reverseString("hello");


//-------


// Chaining the three methods together:
function reverseString(str) {
    return str.split("").reverse().join("");
}
reverseString("hello");


