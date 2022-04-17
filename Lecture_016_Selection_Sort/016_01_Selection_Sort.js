// code sturucture reference ==> gfg

// time coplexity best and worst case: O(n^2)
// space complextity: O(1)

// selection sort is NOT a stable algorithm

let swap = (arr, minIndex, i) => {
    let temp = arr[minIndex]
    arr[minIndex] = arr[i]
    arr[i] = temp 
   }

let selectionSort = (arr,n) => {
   for (let i = 0; i < n-1; i++){
      let minIndex = i

      for (let j = i+1; j < n; j++)
          if (arr[j] < arr[minIndex])
          minIndex = j
      swap(arr, minIndex, i)
   

   }
}

let printArray = (arr, size) => {
    for (let i = 0; i < size; i++){
        console.log(arr[i])
    }
}

let arr1 = [6,2,8,4,10]
let n = 5

selectionSort(arr1, n)
printArray(arr1, n)



// Output:
// 2
// 4
// 6
// 8
// 10