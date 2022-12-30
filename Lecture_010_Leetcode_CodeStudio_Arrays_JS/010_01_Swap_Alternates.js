let printArray = (arr) => {
    for(let i = 0; i < arr.length; i++){
        console.log(arr[i])
    }
}

let swapAlternate = (arr) => {
    for (let i = 0; i < arr.length; i = i+2){
        if (i+1 < arr.length){
            temp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = temp     
           }
    }
}

let even = [5,2,9,4,7,6,1,0]
let odd = [11,33,9,76,43]

swapAlternate(even)
printArray(even)

console.log('\n')

swapAlternate(odd)
printArray(odd)

// Output:
// 2
// 5
// 4
// 9
// 6
// 7
// 0
// 1


// 33
// 11
// 76
// 9
// 43