// Bubble sort

// A sorting algorithm where the largest values bubble 
// up to the top!

// swapping]

// [5, 3, 4, 1, 2]
// [3, 5, 4, 1, 2]
// [3, 4, 5, 1, 2]
// [3, 4, 1, 5, 2]
// [3, 4, 1, 2, 5]


// BubbleSort Pseudocode:

// * Start looping from with a variable called i the end of the
//   array towards the beggining

// * Start an inner loop with a variable called j from the beggining
//   until i - 1 

// * if arr[j] is grater then arr[j+1] swap those two vlaues!

// * Return the sorted array



// naive approach:

function bubbleSort(arr){
    for (let i = 0; i < arr.length;  i++){
        for (let j = 0; j < arr.length; j++){
            console.log(arr, arr[j], arr[j+1])
            if(arr[j] > arr[j+1]){
                // SWAP 
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
    return arr
}

console.log(bubbleSort([37,45,29,8]))



// Output:
// [ 37, 45, 29, 8 ] 37 45
// [ 37, 45, 29, 8 ] 45 29
// [ 37, 29, 45, 8 ] 45 8
// [ 37, 29, 8, 45 ] 45 undefined   // here 45 is trying to fubd the next element 
                                    // which does not exists, it is being compared 
                                    // with that which is not reqired. sot the code can
                                    // be optimized.
// [ 37, 29, 8, 45 ] 37 29
// [ 29, 37, 8, 45 ] 37 8
// [ 29, 8, 37, 45 ] 37 45
// [ 29, 8, 37, 45 ] 45 undefined
// [ 29, 8, 37, 45 ] 29 8
// [ 8, 29, 37, 45 ] 29 37
// [ 8, 29, 37, 45 ] 37 45
// [ 8, 29, 37, 45 ] 45 undefined
// [ 8, 29, 37, 45 ] 8 29
// [ 8, 29, 37, 45 ] 29 37
// [ 8, 29, 37, 45 ] 37 45
// [ 8, 29, 37, 45 ] 45 undefined
// [ 8, 29, 37, 45 ]




// -------------------------------------------------


function bubbleSort(arr){
    for (let i = arr.length; i > 0;  i--){
        //   i = 4 ;         i > 0;   i++
        for (let j = 0; j < i-1 ; j++){
             //  j = 0; j < 3   ; j++    // again the loop runs but next time
                                         //   i = 3 beacuse of i--,  & j = 2
             console.log(arr, arr[j], arr[j+1])
            if(arr[j] > arr[j+1]){
                // SWAP 
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
    return arr
}

console.log(bubbleSort([37,45,29,8]))


// Output:
// [ 37, 45, 29, 8 ] 37 45
// [ 37, 45, 29, 8 ] 45 29
// [ 37, 29, 45, 8 ] 45 8
// [ 37, 29, 8, 45 ] 37 29
// [ 29, 37, 8, 45 ] 37 8
// [ 29, 8, 37, 45 ] 29 8
// [ 8, 29, 37, 45 ]


// -    -    -      -        -     



function bubbleSort(arr){
    for (let i = arr.length; i > 0;  i--){
        //   i = 4 ;         i > 0;   i++
        for (let j = 0; j < i-1 ; j++){
             //  j = 0; j < 3   ; j++    // again the loop runs but next time
                                         //   i = 3 beacuse of i--,  & j = 2
             console.log(arr, arr[j], arr[j+1])
            if(arr[j] > arr[j+1]){
                // SWAP 
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
        console.log('One Pass complete')   
    }
    return arr
}

console.log(bubbleSort([37,45,29,8,12,88,-3]))



// Output:
// [37, 45, 29, 8,12, 88, -3] 37 45
// [37, 45, 29, 8,12, 88, -3] 45 29
// [37, 29, 45, 8,12, 88, -3] 45 8
// [37, 29,  8, 45,12, 88, -3] 45 12
// [37, 29,  8, 12,45, 88, -3] 45 88
// [37, 29,  8, 12,45, 88, -3] 88 -3


//   One Pass complete
//   [37, 29,  8, 12,45, -3, 88] 37 29
//   [29, 37,  8, 12,45, -3, 88] 37 8
//   [29,  8, 37, 12,45, -3, 88] 37 12
//   [29,  8, 12, 37,45, -3, 88] 37 45
//   [29,  8, 12, 37,45, -3, 88] 45 -3
//   One Pass complete

//   [29,  8, 12, 37,-3, 45, 88] 29 8
//   [8, 29, 12, 37,-3, 45, 88] 29 12
//   [8, 12, 29, 37,-3, 45, 88] 29 37
//   [8, 12, 29, 37,-3, 45, 88] 37 -3
//   One Pass complete

//   [8, 12, 29, -3,37, 45, 88] 8 12
//   [8, 12, 29, -3,37, 45, 88] 12 29
//   [8, 12, 29, -3,37, 45, 88] 29 -3
//   One Pass complete

//   [8, 12, -3, 29,37, 45, 88] 8 12
//   [8, 12, -3, 29,37, 45, 88] 12 -3
//   One Pass complete

//   [8, -3, 12, 29,37, 45, 88] 8 -3
//   One Pass complete

//   One Pass complete
//   [-3,  8, 12, 29,37, 45, 88]






// ES6: solution 




// --        --         --


function bubbleSort(arr){
    const swap = (arr, idx1, idx2) => {
        [arr[idx1], arr[idx2]] = [arr[idx2], arr[idx1]];
    };

    for (let i = arr.length; i > 0; i--){
        for (let j = 0; j < i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap (arr, j, j + 1)
            }
        }
    }
    return arr
}

console.log(bubbleSort([37,45,29,8,12,88,-3]))


// Output:
// [-3,  8, 12, 29,37, 45, 88]