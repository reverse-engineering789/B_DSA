let countPrimes = function(n){
    let cnt = 0
    let prime(n+1, true)

    prime[0] = prime[1] = false

     for (let i = 2; i < n; i++){
         if (prime[i]){
             cnt++

             for (let j = 2*i; j < n; j = j+i){
                 let test3 = prime[j]
                 test3 = 0
             }
         }
     }
     return cnt
}


let check = countPrimes(10)
console.log(check)