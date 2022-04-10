
// // 008_07_Prime_No_Program
// // not working for test cases '2' and '1'
// const isPrime = (number) => {
//     for (let i = 2; i < number; i++){
//         if (number % i === 0){
//             console.log('isPrime')
//         }else{
//             console.log('notPrime')
//         }
//         break;
//     }
         
//     }

// isPrime(1)


// // -------------------------------------------------------------




let isPrime = (n) => {
    
    for(let i = 2; i < n ; i++){
        if (n % i == 0){
            return 0
        }
    }
        return 1
    }
      

let n = 13

if (isPrime(n)){
    console.log('is a prime number')
}else{
    console.log('is not a prime number')
}

// Output:
// is a prime number