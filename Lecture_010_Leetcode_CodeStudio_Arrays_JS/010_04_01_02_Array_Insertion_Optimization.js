// More Optimized code for array insertion 

let findArrayIntersection = (arr1,arr2) => {
    
    let ans = []
    
    for(let i = 0; i < arr1.length; i++) {
              let element = arr1[i]

        for(let j = 0; j < arr2.length; j++) {
               
            if (element < arr2[j])
                  break 
                  
            if(element == arr2[j]) {
                ans.push(element)
                arr2[j] = -112231
                break
            }
        }

    }
    return ans
}

    
 
let arr1 = [1,2,4,5,6,8,10]
let arr2 = [2,6,8,14]

console.log('The comman elements are: ' + (findArrayIntersection(arr1,arr2)))

// Output:
// The comman elements are: 2,6,8