// Reverse_Array.js


// Not able to understand the method:


// Method 2:

// Reversing an array in place
// Reversing an array in place is by using the same method we used to swap numbers. But without the need of declaring an extra empty array.




const reverseArrayInPlace = (array) => {
    for (let i = 0; i <= Math.floor(array.length / 2); i++) {
        let temp = array[i];
        array[i] = array[array.length - 1 - i];
        array[array.length - 1 - i] = temp;
    }
    return array;
}

reverseArrayInPlace([1,4,7, 5, 7, 9, 13 ,86, 12]);

// -> [ 12, 86, 13, 9, 7, 5, 7, 4, 1 ]