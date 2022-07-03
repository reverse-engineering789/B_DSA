let reversedArray = []
const reversed = (arr, index) => {
    for (let i = arr.length; i >= index; i--){
        reversedArray.push(arr[i])   
    }
    return reversedArray
}

let nonReversedArray = []
const nonReversed = (arr, index) => {
    for (let j = 0; j < index; j++){
        nonReversedArray.push(arr[j])
    }
    return nonReversedArray
}

const completeArray = nonReversedArray.concat(reversedArray)


const testCase1 = [2,4,6,8,10,12,16]
const index = 3
reversed(testCase1, index)
nonReversed(testCase1, index)
console.log(completeArray)