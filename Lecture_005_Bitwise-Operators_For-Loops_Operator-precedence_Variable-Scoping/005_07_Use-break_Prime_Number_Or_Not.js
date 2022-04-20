let n = 7

let isPrime = 1

for (let i = 2; i < n; i++){
    if (n % i === 0){
        isPrime = 0
        break
    }
}


if (isPrime === 0){
    console.log('Not a Prime number')
}else{
    console.log('Is a Prime Number')
}


// Output:
// Is a Prime Number
// // -------------------------------------------


// // little different 


// const testPrime = (n) => {
// for (let i = 2; i <n; i++){ // not <= beacuse 7 will devide 7
//                             // so 7 will become a prime number
//       if ( n % i === 0){
//           return 0
//       }
//       break;
//     }
//       return 1
//     }

// const number = 7

// if (testPrime(number) === 1){
//     console.log('is Prime')
// }else{
//     console.log('Not a prime')
// }