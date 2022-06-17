let n = 5;
let string = "";
let count = 0;
// External loop
for (let i = 1; i <= n; i++) {
  // creating spaces
  for (let j = 0; j < n - i; j++) {
    string += " ";
  }
  // creating alphabets
  for (let k = 0; k < 2 * i - 1; k++) {
    string += String.fromCharCode(count + 65);
    count++;
  }
  string += "\n";
}
console.log(string);
 
 
 
 
 // Output:
//     A
//    BCD
//   EFGHI
//  JKLMNOP
// QRSTUVWXY



// my code 


// const n = 5 
// string = ''
// count = 0


// for (let i = 1; i <= n; i++){
//     for (let j = 1; j <= n-i+1; j++){
//         string = string + ' '
//     }
//         for (let k = 1; k <= ((2*i)-1); k++){
//         string = string + String.fromCharCode(count + 65)
//         count++
//     } 
//     string = string + '\n'
// }

// console.log(string)