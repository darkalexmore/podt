vector<int> dp(100001,-1);
class Solution {
  public:
    int mod=100000000;
    int fillingBucket(int n){
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        dp[n]=(fillingBucket(n-1)%mod+fillingBucket(n-2)%mod)%mod;
        return dp[n];
    }
};
