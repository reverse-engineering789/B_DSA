let numbers = [9,5,78,5,4,3343,6,8,7,56,1,5,6,86,6,]

console.log(Math.max(...numbers))

 // Output:
 // 3343




console.log(Math.min(...numbers))

 // Output:
 // 1




// //-------------------------------------------------------------------


console.log(Math.max.apply(Math, numbers))
 // Output:
 // 3343


// //-------------------------------------------------------------------


// You tube COding Puzzle #1 - Find Max & Min Numbers in Array
// 009_04_Maximum_and_Minimum_Number_In_Array
let arr = [1, 100, 10]

let max = arr[0]
let min = arr[0]


for (let i = 0; i < arr.length; i++ ){
    if (arr[i] >= max){
        max = arr[i]
    }
}
console.log(max)


for (let j = 0; j < arr.length; j++ ){
    if (arr[j] < min){
        min = arr[j]
    }
}

console.log(min)

// Output:
// 100
// 1

// //-----------------------------------



// Using Functions: 


var getMin = (number) => {
      
    var min = number[0];

    for (var i = 0; i <=number.length; i++){
        if (number[i] < min){
            min = number[i]
        }
    }
    return min
}


var getMax = (number) => {
      
    var max = number[0];

    for (var i = 0; i <=number.length; i++){
        if (number[i] > max){
            max = number[i]
        }
    }
    return max
}

var number = [9,5,78,5,4,3343,6,8,7,56,1,5,6,86,6,]

console.log('the maximum number in the given array is: ' + getMax(number))
console.log('the minimum number in the given array is: ' + getMin(number))


// Output:
// the maximum number in the given array is: 3343
// the minimum number in the given array is: 1



// //-----------------------------------------------------------------------------




