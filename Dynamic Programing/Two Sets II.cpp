#include <bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
int32_t main()
{
    int n; cin>>n;
    int arr[n], sum=(n*(n+1))/2;
    for(int i=1; i<=n; ++i) arr[i-1]=i;
    if(sum&1) { cout<<"0"; return 0;  }
    sum/=2;
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    dp[0][0]=1;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=sum; ++j)
        {
            if(arr[i-1]<=j) dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]]);
            else dp[i][j]=dp[i-1][j];
            dp[i][j]%=mod;
        }
    }cout<<dp[n][sum]%mod;
}
