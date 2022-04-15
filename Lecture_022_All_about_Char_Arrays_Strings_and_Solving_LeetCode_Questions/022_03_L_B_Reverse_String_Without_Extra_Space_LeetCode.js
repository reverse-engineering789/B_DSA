let reverseString =  (s) => {
     let st = 0
     let e = s.length-1

     while (st < e){
          let temp = s[st]
              s[st] = s[e]
              s[e] = temp 
              st++
              e--
     }
    
}

console.log(reverseString('S','u','r','y','a'))