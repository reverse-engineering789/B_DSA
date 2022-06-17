let n = 5;
let string = "";
// Pyramid
for (let i = 1; i <= n; i++) {
  for (let j = 1; j < n - i + 1; j++) {
    string += " ";
  }
  for (let k = 0; k < 2 * i - 1; k++) {
    string += String.fromCharCode(k + 65);
  }
  string += "\n";
}
// Reverse Pyramid
for (let i = 1; i <= n - 1; i++) {
  for (let j = 1; j < i + 1; j++) {
    string += " ";
  }
  for (let k = 0; k < 2 * (n - i) - 1; k++) {
    string += String.fromCharCode(k + 65);
  }
  string += "\n";
}
console.log(string);
// Output:
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

// My code:
// const n = 5 
// string = ''

// for (let i = 1; i <= n; i++){
//     for (let j = 1; j <= n-i; j++){
//        string = string + ' '
//     }
//     for (let k = 1; k <= (2*i)-1; k++ ){
//         string = string + String.fromCharCode(k + 64)
//     }
//     string = string + '\n'  
// }


// for (let i = 1; i < n; i++){
//     for (let j = 1; j <= i; j++){
//         string = string + ' '
//     }
//     for (let k = 1; k <= (2*(n-i))-1; k++){
//         string = string + String.fromCharCode(k + 64)
//     }
//     string = string + '\n'
// }
// console.log(string)


// // Output:
// //     A
// //    ABC
// //   ABCDE
// //  ABCDEFG
// // ABCDEFGHI
// //  ABCDEFG
// //   ABCDE
// //    ABC
// //     A