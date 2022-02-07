

// // https://www.geeksforgeeks.org/how-to-find-if-two-arrays-contain-any-common-item-in-javascript/



let findArrayIntersection = (arr1,arr2) => {
    let ans = 0
    // Loop for array1
    for(let i = 0; i < arr1.length; i++) {
         
        // Loop for array2
        for(let j = 0; j < arr2.length; j++) {
             
            // Compare the element of each and
            // every element from both of the
            // arrays
            if(arr1[i] === arr2[j]) {
             
                // Return if common element found
                return true;
            }
        }

    }
    return false
}

    
 
let arr1 = [1,2,4,5,6,8,10]
let arr2 = [2,6,8,14]

console.log(findArrayIntersection(arr1,arr2))



// //-----------------------------------------------------------------



