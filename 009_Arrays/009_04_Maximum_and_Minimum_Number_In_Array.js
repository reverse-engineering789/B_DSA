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




