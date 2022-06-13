{/* <script>
 
// Program to print the given pattern
 
    function print_asterisk(asterisk) {
        if (asterisk == 0)
            return;
        document.write("* ");
        print_asterisk(asterisk - 1);
    }
 
    // function to print the upper-half of the pattern
    function pattern_upper(n , num) {
        // base case
        if (n == 0)
            return;
        print_asterisk(n);
        document.write("<br/>");
 
        // recursively calling pattern_upper()
        pattern_upper(n - 1, num);
    }
 
    // function to print the lower-half of the pattern
    function pattern_lower(n , num) {
        // base case
        if (n == 0)
            return;
        print_asterisk(num - n + 1);
        document.write("<br/>");
 
        // recursively calling pattern_lower()
        pattern_lower(n - 1, num);
    }
 
    // function to print the pattern
    function pattern(n , num) {
        pattern_upper(n, num);
        pattern_lower(n - 1, num);
    }
 
    // Driver Code
     
        var n = 5;
        pattern(n, n);
 
// This code is contributed by aashish1995
 
</script> */}

// Input: 5
// Output: 
//     * * * * *
//     * * * *  
//     * * *    
//     * *      
//     *        
//     *        
//     * *      
//     * * *    
//     * * * *  
//     * * * * *