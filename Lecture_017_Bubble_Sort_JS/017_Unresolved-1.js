// 017_01_Bubble_Sort.js


// getting undefined at the end of the 
// array list, in the output. 
// except that everything is fine


let swap = (arr, i, j ) => {
    let temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp 
   }

let bubbleSort = (arr, n) => {
     let i, j
     for (i = 0; i < n; i++){
         for(j = 0; j < n - i; j++){
             
            if (arr[j] > arr[j+1]){
                swap (arr, j, j + 1)
            }
         }
     }
}

let printArray = (arr,size) => {
    let i 
    for (i = 0; i < size; i++){
     console.log(arr[i]) 
    }
}

const arr = [64, 34, 25, 12, 22, 11, 90]
let n = arr.length
console.log('Unsorted array: ')
console.log(printArray(arr, n))

bubbleSort(arr, n)

console.log('The sorted array: ') 
console.log(printArray(arr, n))


// Output:
// Unsorted array: 
// 64
// 34
// 25
// 12
// 22
// 11
// 90
// undefined
// The sorted array:
// 11
// 12
// 22
// 25
// 34
// 64
// 90
// undefined


