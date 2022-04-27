


let checkPalindrome = (a) => {
   let s = 0;
   let e = a.length-1

   while (s <= e){
       if (a[s] !== a[e]){
           return 0
       }else{
           s++
           e--
       }
   }
   return 1
}

let myName = 'Surya'
let test = checkPalindrome(myName)
console.log(test)

if (test === 0){
    console.log('Not a Palindrome')
}else{
    console.log('Is Palindrome')
}

// Output:
// Palindrome or Not: 0