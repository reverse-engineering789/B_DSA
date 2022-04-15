


let reverse = (v) => {
     let s = 0 
     let e = v.length - 1

     while (s <= e){
         temp = v[s]
         v[s] = v[e]
         v[e] = temp
         s++
         e--
     }
     return v
}

let print = (v) => {
    for (let i = 0; i < v.length; i++){
        console.log((v[i]) + " ")
    }
}

let v1 = [11,7,3,12,4]
reverse(v1)
print(v1)

// Output:
// 4 
// 12 
// 3  
// 7  
// 11

