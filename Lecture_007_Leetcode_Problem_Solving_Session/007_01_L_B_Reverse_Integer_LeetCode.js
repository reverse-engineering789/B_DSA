const reverse = (x) => {
    let ans = 0

    while(x !== 0){

        let digit = (x % 10)

        if ((ans > Number.MAX_VALUE / 10) || (ans < Number.MIN_VALUE / 10)){
            return 0
        }

        ans = ( ans * 10 ) + digit
        x = Math.floor(x / 10)
    }
    return ans 
}


const testCase1 = reverse(246)
console.log(testCase1)

// Output:
// 642