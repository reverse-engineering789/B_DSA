const isPowerOfTwo = (n) => {

   for (let i = 0; i <= 30; i++){

       let ans = Math.pow(2,i)

       if (ans === n){
           return true
       }
   }
   return false
}


const testCase1 = isPowerOfTwo(16)
const testCase2 = isPowerOfTwo(17)
console.log(testCase1)
console.log(testCase2)


// Output:
// true
// false