// getting undefined as output:

let reverse = (name) => {
    let s = 0
    let e = name.length -1

    while(s < e){
        temp = name[s]
        name[s] = name[e]
        name[e] = temp
        name[s++]
        name[e--]
    }
}
let getLength = (arr) =>{
    let count = 0
      for (let i = 0; i < arr.length; i++){
         count++
     }
      console.log(count)
   }
  
  let givenStr = 'Surya'
  getLength(givenStr)


  console.log(givenStr)
  console.log(reverse(givenStr))

  
