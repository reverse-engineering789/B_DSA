// USING THE REVERSE METHOD:

// ref: gfg

const fruits = ['Banana', 'Orange', 'Apple', 'Mango']
fruits.reverse()



//------------------------------------------------------------------------


// BY CREATING EXTRA ARRAY: 

// solution: https://stackoverflow.com/questions/10168034/how-can-i-reverse-an-array-in-javascript-without-using-libraries

let reverse = (array) => {
    let arrayOne = array
    let array2 = []

    for (let i = arrayOne.length-1; i >= 0; i--){
      array2.push(arrayOne[i])
    } 
    return array2
}

let arrayOne = [1,2,3,4,5]
let test = reverse(arrayOne)

console.log(test)

// Output:
// [ 5, 4, 3, 2, 1 ]




//------------------------------------------------------------





// Not able to understand the method:

// Method 2:

// https://dev.to/unsungnovelty/initlogs-swapping-numbers-and-reversing-arrays-in-javascript-229c

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


