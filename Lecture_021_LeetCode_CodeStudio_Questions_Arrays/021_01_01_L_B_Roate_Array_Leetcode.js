


// Problem Qustion:

//LeetCode: Rotate Array

// this code is little difficult, and approach is also little complex 
// need to take MOD and all. its better to visit vid, before solving this 
// problem. 

// Given an array, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]
 

// Constraints:

// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1
// 0 <= k <= 105




// rotating the array and Printing the rotated array:


const rotate = (nums, k) => {
    let temp = []
    for (let  i = 0; i < nums.length; i++){
        temp[(i + k)%nums.length] = nums[i]
         
    }
      nums = temp
      
console.log(temp)

}


const Array = [1, 2, 3, 4, 5];
const K = 3;

rotate(Array, K)

// Output:
// [ 3, 4, 5, 1, 2 ]




// ----------------------------------------------------------


// printing the elements in the rotated array one by one:

const rotate = (nums, k) => {
    let temp = []
    for (let  i = 0; i < nums.length; i++){
        temp[(i + k)%nums.length] = nums[i]  
    }
      nums = temp

      for (let i = 0; i < temp.length; i++){
          console.log(temp[i])
      }
}


const Array = [1, 2, 3, 4, 5];
const K = 3;

rotate(Array, K)


// Output:
// 3
// 4
// 5
// 1
// 2