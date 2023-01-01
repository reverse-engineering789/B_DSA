// exact translation of L.B c++ to JS

let isPrime = function(n){
    if ( n <= 1)
    return false

    for (let i = 2; i < n; i++){
        if (n%i === 0){
            return false
        }
    }
    return true
}


let countPrimes = function(n){
  let cnt = 0

  for (let i = 2; i < n; i++){
     if (isPrime(i))
         cnt++
     }
     return cnt
  }


let test = (countPrimes(10))
console.log(test)

// Output:
// // 4


