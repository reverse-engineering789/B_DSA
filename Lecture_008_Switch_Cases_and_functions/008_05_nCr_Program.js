let factorial = (n) => {
    let fact = 1
     for (let i = 1; i < n; i++){
         fact = fact * i
     }
     return fact 
}

let nCr = (n , r) => {
    num = factorial(n)
     denom = factorial(r) * factorial(n-r)
     return num/denom

    }


    let  n = 4
    let  r = 2
    
    console.log('The answer for nCr is: ' + nCr(n,r))

    



// Output:
// The answer for nCr is: 6