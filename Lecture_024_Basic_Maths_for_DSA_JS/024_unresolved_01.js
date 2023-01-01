// 024_01_02_L.B_L_C_Couunt_Prime.js
 // Unable to replce the c++ vrector code 

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



// c++ code:


// class SOlution {
//     public: 
//     int countPrimes(int n){

//         int cnt = 0;
//          vactor<bool> prime(n+1, true);

//          prime[0] = prime[1] = false;

//          for (int i = 2; i < n, i++){
//              if (prime[i]){
//                  cnt++
//                  for (int j=2*i; j<n; j=j+1){
//                      prime[j] = 0
//                  }
//              }
//          }
//          return cnt; 
//     }
// }