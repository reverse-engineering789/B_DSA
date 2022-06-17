let n = 5;
let string = "";
// External loop
for (let i = 1; i <= n; i++) {
  // printing characters
  for (let j = 0; j < i; j++) {
    string += String.fromCharCode((i - 1) + 65);
  }
  string += "\n";
}
console.log(string);

// Output:
// A
// B B
// C C C
// D D D D
// E E E E E



//------------------------



// // My Code: 

// My Code: 

// const n = 5 

// let string = ''

// for (let i = 1; i <= n; i++){
//     for (let j = 1; j <= i ; j++){
//         string = string + String.fromCharCode((i) + 64)
//     }
//     string = string + '\n'
// }
// console.log(string)

// // Output:
// // A
// // BB
// // CCC
// // DDDD
// // EEEEE