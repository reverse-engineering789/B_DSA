const moveZeros = (nums) => {
    let nonZero = 0
    for (let j = 0; j < nums.length; j++){
        if (nums[j] != 0) {
            [nums[j], nums[nonZero]] = [nums[nonZero], nums[j]]
            nonZero++
        }
    }
}


const printArray  = (nums) => {
     for (let i = 0; i < nums.length; i++){
         console.log(nums[i])
     }
}

const Array = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9]

moveZeros(Array)
printArray(Array)


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