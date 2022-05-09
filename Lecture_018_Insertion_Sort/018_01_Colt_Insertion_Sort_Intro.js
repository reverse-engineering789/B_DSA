// algorithm    Time Complexity    TimeComplexity    TimeComplexity     Space Complexity 
//                   (Best)          (Average)          (Worst)             
// Bubble Sort        O(n)            O(n)^2             O(n)^2              O(1)
// Insertion Sort     O(n)            O(n)^2             O(n)^2              O(1)
// Selection SOrt     O(n)^2          O(n)^2             O(n)^2              O(1)



// Insertion Sort: 

// Builds up the sort by gradually creating a larger left 
// half which is always sorted

//-------------------------------------------

// Insertiom Sort Psuedocode 

// * Start by picking the second element in the array 

// * Now compare the second element with the one before it and swap 
//   if necessary

// * continue to the next element and if it is in the incorrect onder, 
//   iterate through the sorted portion(i.e. the left side) to place 
//   the element in the correct place. 

//  * Repeat until the array is sorted


function insertionSort (arr) {
    for (let i = 1; i < arr.length; i++){
        let currentVal = arr[i]
        for (let j = i - 1; j >= 0 && arr[j] > currentVal; j--){
            arr[j+1] = arr[j]
        }
        arr[j+1] = currentVal
    }
    return currentVal
}

console.log(insertionSort([2,1,9, 76, 4]))


// Output:
// [ 1, 2, 4, 9, 76 ]