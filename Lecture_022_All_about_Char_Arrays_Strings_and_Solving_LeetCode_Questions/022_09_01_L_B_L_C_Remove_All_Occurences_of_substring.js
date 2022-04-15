let removeOccurrences = function(s, part) {
    while(s.includes(part)){
        s=s.replace(part,'');
    }
    return s;
};


let test = removeOccurrences('daabcbaabcbc', 'abc')
console.log(test)