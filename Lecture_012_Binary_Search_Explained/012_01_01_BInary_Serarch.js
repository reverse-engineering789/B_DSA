// not able to get the proper output: 
// binary search-accessing the index


let binarySearch = (arr, key) => {
    let start = 0
    let end = arr.length-1

    let mid = start + (end - start) / 2

    while (start <= end){
        if (arr[mid] === key){
            return mid 
        }
        if (key > arr[mid]){
            start = mid + 1 
        }else{
            end = mid - 1 
        }
         mid = start + (end - start) / 2
        }
        return -1
        }



        
        let even = [2,4,6,8,12,18]
        let odd = [3,8,11,14,16]

        let evenIndex = binarySearch(even,12)
        console.log('index of 12 is: ' + evenIndex)
     
        let oddIndex = binarySearch(odd,3)
        console.log('index of 3 is: ' + oddIndex)

        // Output:
        // index of 12 is: -1
        // index of 3 is: -1