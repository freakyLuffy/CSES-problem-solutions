#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
int32_t main() 
{
    int n,x; cin>>n>>x;
    int price[n],pages[n];
    for(int i=0; i<n; ++i) cin>>price[i];
    for(int i=0; i<n; ++i) cin>>pages[i];
    vector<vector<int>> dp(2,vector<int>(x+1,0));
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=x; ++j)
        {
            if(price[i-1]<=j) dp[i%2][j]=max(dp[(i-1)%2][j],dp[(i-1)%2][j-price[i-1]]+pages[i-1]);
            else dp[i%2][j]=dp[(i-1)%2][j];
        }
    }cout<<dp[n%2][x];
    return 0;
}
