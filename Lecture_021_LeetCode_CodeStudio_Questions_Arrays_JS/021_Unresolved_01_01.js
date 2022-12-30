// 021_02_gfg_Rotate_Array_LeetCode.js


// Problem: Not able to understand the logic behind the these two lines of        
//         code: 
//         console.log(a[n + i - k] + " ");
//     }
//     else {

//         // Prints array after
//         // 'k' elements
//         console.log((a[i - k]) + " ");
//     }


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




// gfg: solution: 


// Javascript implementation of right rotation
// of an array K number of times



// Function to rightRotate array
let RightRotate = (a, n, k) =>
{

	// If rotation is greater
	// than size of array
	k = k % n;

	for (let i = 0; i < n; i++) {
		if (i < k) {

			// Printing rightmost
			// kth elements
			console.log(a[n + i - k] + " ");
		}
		else {

			// Prints array after
			// 'k' elements
			console.log((a[i - k]) + " ");
		}
	}
	console.log("<br>");
}

// Driver code
let Array = [1, 2, 3, 4, 5];
let N = Array.length;
let K = 1;

RightRotate(Array, N, K);

// This code is contributed by gfgking.


// Output:
// when k = 2
// 4
// 5
// 1
// 2
// 3

// when k = 1,
// 5 
// 1 
// 2
// 3
// 4