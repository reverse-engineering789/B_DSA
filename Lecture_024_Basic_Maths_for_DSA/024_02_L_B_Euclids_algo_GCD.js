let gcd = function (a, b){
      if (a === 0)
       return b 

       if (b === 0)
           return a 
        
           while (a != b){
               if (a > b){
                   a = a - b
               }else{
                   b = b - a
               }
           }
           return a 
}


let test = gcd(65, 13)
console.log(`the greatest common divisor is: ${test}`)

// Output:
// the greatest common divisor is: 13