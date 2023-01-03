const removeDuplicates = s => {
    const stack = [];
    for (const char of s) {
      stack[stack.length - 1] === char ? stack.pop() : stack.push(char);
    }
    return stack.join('');
  };
//   The second solution, we use 2 pointers. One for traversal and one for store result.
  
  const removeDuplicates = s => {
    const arr = s.split('');
    let ans = 0;
    for (let i = 0; i < arr.length; ++i) {
      ans === 0 || arr[i] !== arr[ans - 1] ? (arr[ans++] = arr[i]) : --ans;
    }
    return arr.slice(0, ans).join('');
  };
//   The third solution which is little bit cheating, we use regular expression to do the replacement. And finally get the answer.
  
  const removeDuplicates = s => {
    const s2 = s.replace(/(.)\1/g, '');
    return s2.length === s.length ? s : removeDuplicates(s2);
  };