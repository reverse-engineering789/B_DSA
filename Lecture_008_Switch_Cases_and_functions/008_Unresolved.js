// find the number of 10, 20 , 50  , 100 rupee notes in 1242 rupees. 


// finding the power of a number  using the forloops 



let a = 2
let b = 4

let ans = 1

for (let i = 1; i <=b; i++){
    ans = ans * a
}

console.log(`the answer is: ${ans}`)

// Output:
// the answer is: 16



// -------------------------------------------------

// 008_07_Prime_No_Program
// not working for test cases '2' and '1'
const isPrime = (number) => {
    for (let i = 2; i < number; i++){
        if (number % i === 0){
            console.log('isPrime')
        }else{
            console.log('notPrime')
        }
        break;
    }
         
    }

isPrime(1)