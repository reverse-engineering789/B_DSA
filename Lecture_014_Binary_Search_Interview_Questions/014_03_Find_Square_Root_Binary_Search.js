let sqrtInteger = (n) => {
     let s = 0
     let e = n 
     let mid = s + (e - s) / 2

     let ans = -1 
     while (s <= e){
         let square = mid * mid 

         if (square == n) 
         return mid 

         if (square < n){
             ans = mid 
             s = mid + 1
         }else{
             e = mid - 1
         }
         mid = s + (e - s) / 2
     }
     return ans 
}


let morePrecision = (n, precision, tempSol) => {
      let factor = 1
      let ans = tempSol

      for (let i = 0; i < precision; i++){
          factor = factor / 10
          for (let j = ans; j * j < n; j = j + factor){
              ans = j
          }
      }
      return ans 
}



// let mySqrt = (x) => {
//     return binarySearch(x)
// }


// console.log(mySqrt(37))



   let n = 37

   let tempSol = sqrtInteger(n)
   console.log('Answer is: ' + (n, 3, tempSol))

//    Output:
//    Answer is: 5.09375