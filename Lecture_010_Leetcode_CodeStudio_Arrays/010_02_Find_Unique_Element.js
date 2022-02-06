

let findUnique = (arr) => {
    let ans = 0

    for(let i = 0; i < arr.length; i++){
        ans = ans^arr[i]
    }
    return ans
}



let test1 = [2,4,7,2,7]
let test2 = [1,3,1,3,6,6,7,10,7]

console.log('the unique element in test1 is: ' + findUnique(test1))
console.log('the unique element in test2 is: ' + findUnique(test2))

// Output:
// the unique element in test1 is: 4
// the unique element in test2 is: 10



