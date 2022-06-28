

// gfg solution coverted to L_B version: 

let iterativeFunction = function (arr, x) {
  
    let start=0, end=arr.length-1;
         
    while (start<=end){

        let mid=Math.floor((start + end)/2);
  
        if (arr[mid]===x) return mid;
 
        else if (arr[mid] < x)
             start = mid + 1;
        else
             end = mid - 1;
    }
  
    return (`-1 (not found)`);
}
  

let arr3 = [1, 3, 5, 7, 8, 9];
let x1 = 1;
const answer1 = iterativeFunction(arr3, x1)
console.log(`the index of ${x1} is: ${answer1}`)
  
let x2 = 6;
let arr2 = [1, 3, 5, 7, 8, 9];
const answer2 = iterativeFunction(arr2, x2)
console.log(`the index of ${x2} is: ${answer2}`)



// Output:
// the index of 1 is: 0
// the index of 6 is: -1 (not found)

// // ---------------------------------------------------------

// // L_B

// let binarySearch = (arr, key) => {
//     let start = 0
//     let end = arr.length-1
     
    

//     while (start <= end){
//         let  mid = Math.floor(( start + end ) / 2)
//         if (arr[mid] === key){
//             return mid
//         }
//         if (key > arr[mid]){
//             start = mid + 1

//         }else{
//             end = mid - 1
//         }
//          mid =  Math.floor((start + end) / 2)
//         }
//         return -1
//         }
              
//         let Even = [3,8,11,14,16,20]
//         let EvenIndex = binarySearch(Even,3)
//         console.log('index of 3 is: ' + EvenIndex)

//         let odd = [3,8,11,14,16]
//         let oddIndex = binarySearch(odd,3)
//         console.log('index of 3 is: ' + oddIndex)


// // Output:
// // index of 3 is: 0
// // index of 3 is: 0
// //------------------------------------------------------------

// // code before was returning -1
// // not able to get the proper output: 
// // binary search-accessing the index


// let binarySearch = (arr, key) => {
//     let start = 0
//     let end = arr.length-1

//     let mid = start + (end - start) / 2

//     while (start <= end){
//         if (arr[mid] === key){
//             return mid 
//         }
//         if (key > arr[mid]){
//             start = mid + 1 
//         }else{
//             end = mid - 1 
//         }
//          mid = start + (end - start) / 2
//         }
//         return -1
//         }



        
//         let even = [2,4,6,8,12,18]
//         let odd = [3,8,11,14,16]

//         let evenIndex = binarySearch(even,12)
//         console.log('index of 12 is: ' + evenIndex)
     
//         let oddIndex = binarySearch(odd,3)
//         console.log('index of 3 is: ' + oddIndex)

//         // Output:
//         // index of 12 is: -1
//         // index of 3 is: -1
