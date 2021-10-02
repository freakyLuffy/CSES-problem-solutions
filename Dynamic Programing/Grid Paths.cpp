#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
int32_t main()
{
    int n; cin>>n;
    int mat[n][n]={{0}};
    vector<vector<int>> dp(n+1,vector<int>(n+1,1));
    for(int i=0; i<n; ++i)
    {
        string str; cin>>str;
        for(int j=0; j<n; ++j) mat[i][j]=(str[j]=='.');
    }
    dp[0][0]=mat[0][0];
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(i==0 and j==0) continue;
            if(mat[i][j]==0)
            {
                dp[i][j]=0;
                continue;
            }
            if(i>0 and j>0) dp[i][j]=dp[i-1][j]+dp[i][j-1];
            else if(i>0 and j==0) dp[i][j]=dp[i-1][j];
            else if(j>0 and i==0) dp[i][j]=dp[i][j-1];
            dp[i][j]%=mod;
        }
    }
    cout<<dp[n-1][n-1]%mod;
    return 0;
}
