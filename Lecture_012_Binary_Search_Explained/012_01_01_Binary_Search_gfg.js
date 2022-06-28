
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