let n = 5; // you can take input using prompt or change the value
let string = "";
let count = 0;
// External loop
for (let i = 1; i <= n; i++) {
  for (let j = 0; j < i; j++) {
    string += String.fromCharCode(count + 65);
    count++; // increment cause next alphabet
  }
  string += "\n";
}
console.log(string);
// Output:
// A
// B C
// D E F
// G H I J
// K L M N O


// // My code: \
// const n = 5 

// let string = ''

// let count = 1

// for (let i = 1; i <= n; i++){
//     for (let j = 1; j <= i; j++){
//         string = string + String.fromCharCode(count + 64)
//         count++
//     }    
//     string = string + '\n'
// }
// console.log(string)

// // Output:
// // A
// // BC
// // DEF
// // GHIJ
// // KLMNO