

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