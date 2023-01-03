



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
 
 let myName = 'Noon'
 let check = myName.toLowerCase()
 let test = checkPalindrome(check)
 console.log(test)

 if (test === 0){
     console.log('Not a Palindrome')
 }else{
     console.log('Is Palindrome')
 }
 
 
//  Output:
//  1
// Is Palindrome