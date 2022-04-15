// Return maximum occurring character in an input string
// Difficulty Level : Easy

 
// Write an efficient function to return maximum occurring character in the input string e.g., if input string is “test” then function should return ‘t’.
 

// Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
// Algorithm: 
// One obvious approach to solve this problem would be to sort the input string and then traverse through the sorted string to find the character which is occurring maximum number of times. Let us see if we can improve on this. So we will use a technique called ‘Hashing’. In this, when we traverse through the string, we would hash each character into an array of ASCII characters. 
 

// Input string = “test”
// 1: Construct character count array from the input string.
//   count['e'] = 1
//   count['s'] = 1
//   count['t'] = 2

// 2: Return the index of maximum value in count array (returns ‘t’).



// solution: 
// Javascript program to output the maximum occurring character
// in a string

    let ASCII_SIZE = 256;
    function getMaxOccurringChar(str)
    {
     
        // Create array to keep the count of individual
        // characters and initialize the array as 0
        let count = new Array(ASCII_SIZE);
        for (let i = 0; i < ASCII_SIZE; i++)
        {
            count[i] = 0;
        }
         
        // Construct character count array from the input
        // string.
        let len = str.length;
        for (let i = 0; i < len; i++)
        {
            count[str[i].charCodeAt(0)] += 1;
        }
        let max = -1;   // Initialize max count
        let result = ' ';   // Initialize result
         
        // Traversing through the string and maintaining
        // the count of each character
        for (let i = 0; i < len; i++)
        {
            if (max < count[str[i].charCodeAt(0)])
            {
                max = count[str[i].charCodeAt(0)];
                result = str[i];
            }
        }
        return result;
    }
     
    // Driver Method
    let str = "sample string";
    document.write("Max occurring character is " , getMaxOccuringChar(str));