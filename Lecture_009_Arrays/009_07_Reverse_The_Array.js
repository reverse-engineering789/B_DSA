// let arr = [1,2,3,4,5,6,7,8,9]
// let reverse = arr.reverse()
// console.log(reverse)

// // Output:
// // [9, 8, 7, 6, 5,4, 3, 2, 1]



// //--------------------------------------------

let reverse = (arr) => {
   let start = 0
    let end = arr.length - 1 

     while(start <= end){
        //  swap(arr[start], arr[end])         
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
             start++
             end--
         }
     }

let printArray = (arr) => {
     for (let i = 0; i < arr.length; i++){
         console.log(arr[i])
     }
}

let arr = [1,4,0,5,-2,15]
let brr = [2,6,3,9,4]

reverse(arr)
reverse(brr)

printArray(arr)
console.log('\n')
printArray(brr)


// Output:
// 15
// -2
// 5
// 0
// 4
// 1


// 4
// 9
// 3
// 6
// 2

