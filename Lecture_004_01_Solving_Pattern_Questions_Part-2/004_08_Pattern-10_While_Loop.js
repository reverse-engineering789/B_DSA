// //  PROBLEM: NOT ABLE TO PRINT THE PATTERN IN THE NEW LINE
 

let n = 3

let row = 1

while (row <= n ){
  let  col = 1 
  while (col <=n){
   let  ch = String.fromCharCode('A'.charCodeAt(0) + row - 1)
    console.log(ch)
    col = col + 1
}
console.log(' ')
row = row + 1

}

// Output:
// A
// A
// A

// B
// B
// B

// C
// C
// C