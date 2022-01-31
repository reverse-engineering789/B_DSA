let n = 10 

let i = 1 

while (i <= n){
    console.log(i)
    i = i + 1
}

// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10


// ----------------------------------------------------


// cALCULATING THE SUM 


let n = 100 

let i = 1 
let  sum = 0 

while (i <= n){
    sum = sum + i 
    i = i + 1
}


console.log(`value of sum is ${sum}`)

// Output:
// value of sum is 5050





// -----------------------------------------------------




// PRIME NUMBER OR NOT 

let n = 14 

let i = 2 

while ( i < n){
    if (n % i == 0) {
       console.log(`not prime for ${i}`)
    }else{
        console.log(`prime for ${i}`)
    }
   i = i + 1
}

// Output:
// not prime for 2
// prime for 3
// prime for 4
// prime for 5
// prime for 6
// not prime for 7
// prime for 8
// prime for 9
// prime for 10
// prime for 11
// prime for 12
// prime for 13

