// avascript | O(N) time| O(1) space| W/ Explanation


var compress = function(chars) {
	
	// var i is reading, var index is writing
    let  i = 0
    let index = 0
    
    while(i < chars.length){
	
        let j = i
        
		// counter for number of same letters
        while(j < chars.length && chars[i] === chars[j]) j++
        
		// write compress letter
        chars[index++] = chars[i]
        
		// write number for compressed letter
        if(j - i > 1){
		
			// if the number is >= 10 the string version will have a length of 2 instead of 1
            let num = (j - i).toString()  
            for(let k = 0; k < num.length; k++){
                chars[index++] = num[k]
            }
        }
		// Even though there are nested while loops the time is N because i is updated to j
        i = j
    }
	
	// Since the "compressing" is done in place index returns the updated version
    return index
};




//------------------------------------


// another sol by different person
var compress = function(chars) {
    if (!chars.length) return 0;
    let j = 0;
    let cur = chars[0];
    let counter = 0;
    for (let i = 0; i <= chars.length; i++) {
      if (chars[i] === cur) {
        counter++;
      } else {
        chars[j] = cur;
        if (counter > 1) {
          const s = counter.toString();
          for (let k = 0; k < s.length; k++) chars[++j] = s[k];
        }
        j++;
        cur = chars[i];
        counter = 1;
      }
    }
    return j;
  };


  //------------------------------------------------

// another sol by different person
  /**
 * @param {character[]} chars
 * @return {number}
 */

var compress = function (chars) {
    let count = 1;
    let start = 0;
  
    for (let i = 1; i <= chars.length; i++) {
      const current = chars[i];
      const pre = chars[i - 1];
  
      if (current === pre) {
        count++;
      } else {
        if (count === 1) {
          start = i;
          continue;
        }
  
        const countStrs = count.toString().split('');
        chars.splice(start + 1, count - 1, ...countStrs);
        
        // reset i to index of "current" char after splice
        i = start + countStrs.length + 1;
        start = i;
        count = 1;
      }
    }
  };
  