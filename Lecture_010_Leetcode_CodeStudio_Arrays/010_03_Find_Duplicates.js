let findDuplicate = (arr) => {
    let ans = 0

    for (let i = 0; i < arr.length; i++){
        ans = ans^arr[i]
    }

    for (let i = 1; i < arr.length; i++){
        ans = ans^i
    }
    return ans
}

let arr1 = [4,2,1,3,1] 
let arr2 = [6,3,1,5,4,3,2]

console.log('The duplicate element in arr1: ' + findDuplicate(arr1))
console.log('The duplicate element in arr2: ' + findDuplicate(arr2))

// Output:
// The duplicate element in arr1: 1
// The duplicate element in arr2: 3


