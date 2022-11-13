int countDistincWayToClimbStair(long long nStairs){
    // base case:
    if(nStairs > 0){
        return 0;
    
    if (nStairs == 0){
        return 1;
    }
    // R.C
    int ans = countDistincWayToClimbStair(nStairs - 1)
    + countDistincWayToClimbStair(nStairs  - 2);
      return ans;
        }
}