//  <script>
 
//       // JavaScript Program to print the
//       // given pattern
 
//       function print_asterisk(asterisk)
//       {
//         if (asterisk === 0) return;
//         document.write("*  ");
//         print_asterisk(asterisk - 1);
//       }
       
//       function print_space(space)
//       {
//         if (space === 0) return;
//         document.write("  " + "  ");
//         print_space(space - 1);
//       }
 
//       // function to print the pattern
//       function pattern(n, num)
//       {
//         // base case
//         if (n === 0) return;
//         print_asterisk(n);
//         print_space(2 * (num - n) + 1);
//         print_asterisk(n);
//         document.write("<br>");
 
//         // recursively calling pattern()
//         pattern(n - 1, num);
//       }
 
//       // driver function
//       var n = 5;
//       pattern(n, n); 
       
// </script>
// Input: 5
// Output: 
// * * * * *   * * * * * 
// * * * *       * * * * 
// * * *           * * * 
// * *               * * 
// *                   *
