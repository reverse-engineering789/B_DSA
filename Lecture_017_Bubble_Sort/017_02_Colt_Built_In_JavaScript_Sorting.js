// // JavaScript has a sort method. 

// // but it doesn't work as we expected all the time

// // ex:  here in the bellow example it works as we expected:

// // ['Steele', 'Colt', 'Data Structures', 'Algorithms'].sort()
// // Output:
// // ['Algorithms', 'Colt', 'Data Structures', 'Steele'  ]





// // But now in case of the numbers: Its wont work
// // [6,4,15,10].sort();

// // Output:
// // [10,15,4,6]    
// // This is beacuse, THE DEFAULT SORT ORDER IS ACCORDING TO STRING UNICODE CODE POINTS.
// // THE ARRAY IS SORTED ACCORDING TO EACH CHARECTERS UNICODE CODE POINT VALUE. ACCIRDING
// // TO THE STRING CONVERSION OF EACH ELEMENT.



// // telling javascript how to sort:

// // The built - in sort method accepts an optional comparator function

// // You can use this comparator function to tell javascript how u wwant it to sort

// // The comparator looks at pairs of elements (a and b)
// //  determines their sort order based on the return value 

// //      # If it returns a negative number, a should come before b 
// //      # If if returns a positive number, a should come after b
// //      # if it returns 0, a and b are the same as far as the sort is connected




// // Example: 
// function numberCompare (num1, num2){
//     return num1 - num2
// }
// let sorting = [6,4,15,10].sort(numberCompare)
// console.log(sorting)


// // Output:
// // [ 4, 6, 10, 15 ]


// // ---------------------------------



// function numberCompare (num1, num2){
//     return  num2 - num1 
// }
// let sorting = [6,4,15,10].sort(numberCompare)
// console.log(sorting)

// // Output:
// // [ 15, 10, 6, 4 ]   // Output in the reverse order



// // ---------------------------------
// // ---------------------------------
// // ---------------------------------
// // ---------------------------------



// Note: WE CAN ALSO SORT BY THE LENGTH OF THE STRING


function comapreByLength(str1, str2){
    return str1.length - str2.length
}
let setA = ['Steele', 'Colt', 'Data Structures', 'Algorithms']
.sort(comapreByLength)

console.log(setA)

// Output:
// [ 'Colt', 'Steele', 'Algorithms', 'Data Structures' ]



function comapreByLeng(str1, str2){
    return str2.length - str1.length
}
let setB = ['Steele', 'Colt', 'Data Structures', 'Algorithms']
.sort(comapreByLeng)

console.log(setB)


// Output:
// [ 'Data Structures', 'Algorithms', 'Steele', 'Colt' ]