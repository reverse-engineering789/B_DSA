// The bellow code is NOT the Optimized one...  SO LOTS OF ITERATION IS REQUIRED

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

console.log(bubbleSort([8,1,2,3,4,5,6,7]))

// Output:
// [
//     8, 1, 2, 3,
//     4, 5, 6, 7 
//   ] 8 1        
//   [
//     1, 8, 2, 3,
//     4, 5, 6, 7 
//   ] 8 2        
//   [
//     1, 2, 8, 3,
//     4, 5, 6, 7 
//   ] 8 3        
//   [
//     1, 2, 3, 8,
//     4, 5, 6, 7 
//   ] 8 4        
//   [
//     1, 2, 3, 4,
//     8, 5, 6, 7 
//   ] 8 5        
//   [
//     1, 2, 3, 4,
//     5, 8, 6, 7
//   ] 8 6
//   [
//     1, 2, 3, 4,
//     5, 6, 8, 7
//   ] 8 7
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 3 4
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 4 5
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 5 6
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 6 7
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 3 4
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 4 5
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 5 6
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 3 4
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 4 5
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 3 4
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ]



// Some time we may get almost sorted Array, but we dont have any way to 
// identify it. so we keep swapping the elements even though they are already 
// sorted. 
// Ex: [8,1,2,3,4,5,6,7]
  
// So jnow we have to optimize our code: 
// we just have to check that did we do any swapping the last iteration? 
// if we did not then that means we are done. the array is sorted.

// we can do it using 'noSwaps'



//--------------------------------------------------




function bubbleSort(arr){
    let noSwaps
    for (let i = arr.length; i > 0;  i--){
        //   i = 4 ;         i > 0;   i++
        noSwaps = true   // INITIALLY SET NO SWAP = TRUE
        for (let j = 0; j < i-1 ; j++){
             //  j = 0; j < 3   ; j++   
             console.log(arr, arr[j], arr[j+1])
            if(arr[j] > arr[j+1]){
                // SWAP 
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                noSwaps = false    // IF WE MAKE SWAP THEN SET IT TO FALSE
            }
        }  
        if (noSwaps) break
    }
    return arr
}

console.log(bubbleSort([8,1,2,3,4,5,6,7]))


// Output:
// [
//     8, 1, 2, 3,
//     4, 5, 6, 7 
//   ] 8 1        
//   [
//     1, 8, 2, 3,
//     4, 5, 6, 7 
//   ] 8 2        
//   [
//     1, 2, 8, 3,
//     4, 5, 6, 7
//   ] 8 3
//   [
//     1, 2, 3, 8,
//     4, 5, 6, 7
//   ] 8 4
//   [
//     1, 2, 3, 4,
//     8, 5, 6, 7
//   ] 8 5
//   [
//     1, 2, 3, 4,
//     5, 8, 6, 7
//   ] 8 6
//   [
//     1, 2, 3, 4,
//     5, 6, 8, 7
//   ] 8 7
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 1 2
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 2 3
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 3 4
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 4 5
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 5 6
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ] 6 7
//   [
//     1, 2, 3, 4,
//     5, 6, 7, 8
//   ]