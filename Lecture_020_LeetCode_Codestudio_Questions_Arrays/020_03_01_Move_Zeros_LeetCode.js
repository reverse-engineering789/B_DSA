// L.B 

// Move zeros: LeetCode:

// Given an integer array nums, move all 0's to the end of it while maintaining the 
// relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 




// Code: 



let moveZeros = (nums) => {
    let nonZero = 0
    for (let j = 0; j < nums.length; j++){
        if (nums[j] != 0) {
            [nums[j], nums[nonZero]] = [nums[nonZero], nums[j]]
            nonZero++
        }
    }
}

//----------------------------------------
// the bellow code was the referece from gfg:
//----------------------------------------
let arr = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9];
moveZeros(arr)
console.log("Array after pushing all zeros to end of array :<br>");
for (let i = 0; i < arr.length; i++)
    console.log(arr[i] + " ");

// Output:
// 1 
// 9
// 8
// 4
// 2
// 7
// 6
// 9
// 0
// 0
// 0
// 0
