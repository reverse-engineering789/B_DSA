// without arrow funcions
// Finding the power of a number

let surya = function(a,b){
    let ans = 1
   for (let i = 1; i <= b; i++){
          ans = ans * a 
   }
   return ans
}


let answer = surya (3,2)
  console.log('The answer is: ' + answer)


//   Ouput:
// The answer is: 9




  //---------------------------------------------------------------------



// with arrow fucntions: 

let surya = (a,b) => {
    let ans = 1
   for (let i = 1; i <= b; i++){
          ans = ans * a 
   }
   return ans
}
       
let answer = surya (2,4)
console.log('The answer is: ' + answer)



//----------------------------------------------------------------------



// taking 2 outputs


let surya = (a,b) => {
    let ans = 1
   for (let i = 1; i <= b; i++){
          ans = ans * a 
   }
   return ans
}
       
let answer = surya (2,4)
console.log('The answer is: ' + answer)

let answer1 = surya(3,4)
console.log('The answer is: ' + answer1)

// Output:
// The answer is: 16
// The answer is: 81


//------------------------------------------------------------------------



let power = (a,b) => {
       let ans = 1
   for (let i = 1; i <= b; i++){
          ans = ans * a 
   }
   return ans
}
       


let moon = power(4,6)
console.log('the answer is: ' + moon)


// Output:
// the answer is: 4096