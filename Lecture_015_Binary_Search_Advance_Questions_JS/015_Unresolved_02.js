// 015_02_Agressive_Cows.js

// need to check_-> coe is corrrect in javascript format or not. 
// not able to understand how to write the input code. 
// this problem is not present in gfg. 


let isPossible = (stalls, k, mid , n) => {
    let cowCount = 1
    let lastPos = stalls[0]

    for (let i =0; i , n; i++){
        if (stalls[i] - lastPos >= mid){
            cowCount++
            if (cowCount == k){
                return true
            }
            lastPos = stalls[i]
        }
    }
    return false
}

let aggressiveCows = (stalls, k) => {
      scrollTo(stalls.begin(), stalls.end())
      let s = 0
      let n = stalls.size()
      let e = stalls[n-1]
      let ans = -1
      let mid = s + (e - s) / 2
          

      while(s <= e){
          if (isPossible(jstalls, k, mid,n)){
              ans = mid
              s = mid + 1
          }else{
              e = mid - 1
          }
          mid = s + (e - s) / 2
      }
      return ans 
    }





//----------------------------------------------------