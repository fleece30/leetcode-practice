class Solution {
public:
    unordered_map<int,int> dp;
    int climbStairs(int n) {
        if(dp.find(n) != dp.end()) return dp[n];
        if(n == 1) return 1;
        if(n == 2) return 2;
        cout<<n<<endl;
        dp[n] = climbStairs(n-2)+climbStairs(n-1);
        return dp[n];
    }
};