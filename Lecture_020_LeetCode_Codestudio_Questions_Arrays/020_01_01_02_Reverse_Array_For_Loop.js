// BY CREATING EXTRA ARRAY: 

// solution: https://stackoverflow.com/questions/10168034/how-can-i-reverse-an-array-in-javascript-without-using-libraries

let reverse = (array) => {
    let arrayOne = array
    let array2 = []

    for (let i = arrayOne.length-1; i >= 0; i--){
      array2.push(arrayOne[i])
    } 
    return array2
}

let arrayOne = [1,2,3,4,5]
let test = reverse(arrayOne)

console.log(test)

// Output:
// [ 5, 4, 3, 2, 1 ]