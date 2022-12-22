

let search = (arr, key) => {
     for(let i = 0; i < arr.length;  i++){
         if (arr[i] == key){
             return 1
         }
     }
     return 0
}

let arr = [5,7,-2,10,22,-2,0,5,22,1]
let key = -2
let found = search(arr, key)
if (found){
    console.log(`${key} is present` )
}else{
    console.log(`${key} is absent`)
}


// Output:
// -2 is present
// 12 is absent
// 100 is absent
// -2 is present