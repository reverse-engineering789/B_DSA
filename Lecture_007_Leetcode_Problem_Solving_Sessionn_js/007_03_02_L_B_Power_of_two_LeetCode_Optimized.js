const isPowerOfTwo = (n) => {

    let ans = 1

    for (let i = 0; i <= 30; i++){
 
        if (ans === n){
            return true
        }
        if (ans < (Number.MAX_VALUE / 2)){
            ans = ans * 2
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