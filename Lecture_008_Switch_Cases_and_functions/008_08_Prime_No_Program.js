
// not working for test cases '2' and '1'
// need  to handle these cases.
let isPrime = (n) => {
    
    for(let i = 2; i < n ; i++){
        if (n % i == 0){
            return 0
        }
    }
        return 1
    }
      

let n = 111

if (isPrime(n)){
    console.log(n + ' is a prime number')
}else{
    console.log(n + ' is not a prime number')
}

// Output:
// is a prime number