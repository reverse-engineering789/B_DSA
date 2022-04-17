// Easy Solution Faster Than 100% in JS

var removeDuplicates = function(s) {
    let a = [];
    for(let i=0; i<s.length; i++){
    if(s[i] !== a[a.length-1]) {
    a.push(s[i]);
    }
    else{
    a.pop()
    }
    }
    return a.join("")
    };