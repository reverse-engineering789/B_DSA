// Selection Sort

// similar to bubble sort, but instead of first placing large 
// vlaue into sorted position, it places small values into sorted position 


// Slection Sort Psudocode:

// * Store the first Element as the smallest value u have seen so far. 

// * Compare this item to the next item in the array until u fnd a smaller 
//   number. 

// * If a smaller number is found, designate the smaller number to if the 
//   "minimunm" and countu8nue until the end of the array. 

// * If the minimum is not the value(index) u initially began with, swap the 
//   two values. 

// * Repeat this with the next element until the array is sorted 


// Inplimentation of the code:  
  // IN THE BELLOW CODE WE CAN SWAP THE NUMBER BUT ITS NOT EFFICIENT \
  // Beacuse we are swapping the last number of an array with that number 
  // only which is not nessesory.

  // and another reason is that we do swap the same number even its the lowest
  // Ex:
  // IN case of 0 and 2

  function selectionSort(arr){
    for (let i = 0; i < arr.length; i++){
        let lowest = i;
         for (let j = i+1; j < arr.length; j++){
             if (arr[j] < arr[lowest]){
                 lowest = j;
             }
         }
        console.log('******************')
        console.log(arr)
        console.log('SWAPPING TO: ')
        let temp = arr[i]
        arr[i] = arr[lowest]
        arr[lowest] = temp
        console.log(arr)
        console.log('******************')
    }
    return arr
}


console.log(selectionSort([0,2,34,22,10,19,17]))



//  Output:
// ******************
// [0,  2, 34, 22,10, 19, 17]
// SWAPPING TO:
// [0,  2, 34, 22,10, 19, 17]
// ******************
// ******************
// [0,  2, 34, 22,10, 19, 17]
// SWAPPING TO:
// [0,  2, 34, 22,10, 19, 17]
// ******************
// ******************
// [0,  2, 34, 22,10, 19, 17]
// SWAPPING TO:
// [0,  2, 10, 22,34, 19, 17]
// ******************
// ******************
// [0,  2, 10, 22,34, 19, 17]
// SWAPPING TO:
// [0,  2, 10, 17,34, 19, 22]
// ******************
// ******************
// [0,  2, 10, 17,34, 19, 22]
// SWAPPING TO:
// [0,  2, 10, 17,19, 34, 22]
// ******************
// ******************
// [0,  2, 10, 17,19, 34, 22]
// SWAPPING TO:
// [0,  2, 10, 17,19, 22, 34] 
// ******************
// ******************
// [0,  2, 10, 17,19, 22, 34]  // Swapping 34 with 34
// SWAPPING TO:
// [0,  2, 10, 17,19, 22, 34]
// ******************
// [0,  2, 10, 17,19, 22, 34]





//-------------------------------------------------------------------




// IN THE above CODE WE CAN SWAP THE NUMBER BUT ITS NOT EFFICIENT \
  // Beacuse we are swapping the last number of an array with that number 
  // only which is not nessesory.

  // and another reason is that we do swap the same number even its the lowest
  // Ex:
  // IN case of 0 and 2

   // WE CAN FIX IT BY ADDING SIMPLE IF STATEMENT:



function selectionSort(arr){
    for (let i = 0; i < arr.length; i++){
        let lowest = i;
         for (let j = i+1; j < arr.length; j++){
             if (arr[j] < arr[lowest]){
                 lowest = j;
             }
         }
         if (i !== lowest){
            console.log('******************')
            console.log(arr)
            console.log('SWAPPING TO: ')
            let temp = arr[i]
            arr[i] = arr[lowest]
            arr[lowest] = temp
            console.log(arr)
            console.log('******************')
         }
    }
    return arr
}


console.log(selectionSort([0,2,34,22,10,19,17]))



// [0,  2, 34, 22,10, 19, 17]
//  SWAPPING TO:
//  [0,  2, 10, 22,34, 19, 17]
//  ******************
//  ******************
//  [0,  2, 10, 22,34, 19, 17]
//  SWAPPING TO:
//  [0,  2, 10, 17,34, 19, 22]
//  ******************
//  ******************
//  [0,  2, 10, 17,34, 19, 22]
//  SWAPPING TO:
//  [0,  2, 10, 17,19, 34, 22]
//  ******************
//  ******************
//  [0,  2, 10, 17,19, 34, 22]
//  SWAPPING TO: 
//  [0,  2, 10, 17,19, 22, 34]
//  ******************
//  [0,  2, 10, 17,19, 22, 34]


function selectionSort(arr){
    for (let i = 0; i < arr.length; i++){
        let lowest = i;
         for (let j = i+1; j < arr.length; j++){
             if (arr[j] < arr[lowest]){
                 lowest = j;
             }
         }
         if (i !== lowest){
            let temp = arr[i]
            arr[i] = arr[lowest]
            arr[lowest] = temp
         }
    }
    return arr
}


console.log(selectionSort([0,2,34,22,10,19,17]))

// ES6 -- 2015: //---------------------------------



function selectionSort(arr){
    const swap = (arr, idx1, idx2) =>
    ([arr[idx1], arr[idx2]] = [arr[idx2], arr[idx1]])

    for (let i = 0; i < arr.length; i++){
        let lowest = i
        for (let j = i + 1; j < arr.length; j++){
       if (arr[lowest] > arr[j]){    // Or if (arr[j] < arr[lowest])
           lowest = j
       }
    }
if (i !== lowest) swap (arr, i, lowest)
}
return arr
}

console.log(selectionSort([0,2,34,22,10,19,17]))


// Output:
// [0,  2, 10, 17,19, 22, 34]