let hammingweight = (n) => {
    let count = 0
    while (n!== 0){
        if (n & 1){
            count++
        }
          n = n >> 1
    }
    return count
}

let testCase1 = hammingweight(0010)
console.log(testCase1)