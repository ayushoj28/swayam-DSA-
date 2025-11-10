class Solution {
public:
    int  dp[101][10001];
    int solve(int e,int n){
        if(n==0 || n==1) return n;
        if(e==1 || e==0) return n;
        if(dp[e][n]!=-1) return dp[e][n];
        int ans=n;
        int low=1; int high=n;
        while(low<=high){
            int mid=(low+high)/2;
            int brek=solve(e-1,mid-1);
            int notbreak=solve(e,n-mid);
            int temp =1+max(brek,notbreak);
            ans=min(ans,temp);
            if(brek>notbreak) high=mid-1;
            else low=mid+1;
        }
        return dp[e][n]=ans;
    }
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(k,n);
    }
};
