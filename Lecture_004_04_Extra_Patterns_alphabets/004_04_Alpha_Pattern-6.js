let n = 5; // you can take input using prompt or change the value
let string = "";
// External loop
for (let i = 1; i <= n; i++) {
  for (let j = 0; j < n - i + 1; j++) {
    string += String.fromCharCode((n - i - j) + 65);
  }
  string += "\n";
}
console.log(string);

// Ouput:
// EDCBA
// DCBA
// CBA
// BA
// A


// const n = 5

// let string = ""

// for (let i = 1; i <= n; i++){
//     for (let j = 1; j <= n-i+1; j++){
//         string = string + String.fromCharCode((n-i-j+1) + 65)
//     }
//     string = string + '\n'
// }

// console.log(string)