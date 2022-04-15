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



const moveZeros = (nums) => {

    let nonZero = 0; 

    for (let j = 0; j < nums.length; j++){

        if (nums[j] !== 0){
            temp = nums[j]
            nums[j] =nums[nonZero]
            nums[nonZero] = temp
            nonZero++
        }
    }
}

const printNums =  (nums) => {
    for (let i = 0; i < nums.length; i++){
        console.log(nums[i])
    }
}


const arr = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9];
moveZeros(arr)
printNums(arr)



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
