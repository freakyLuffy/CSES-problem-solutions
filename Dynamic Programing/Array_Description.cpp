#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <math.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int solve(ll n, ll m, ll arr[])
{
    ll dp[n+2][m+2] = {0};
    // memset(dp, 0, sizeof dp);
 
    for(int i=1; i<=n; i++)
    {
        for(int x=1; x<=m; x++)
        {
            if(i==1)
            {
                if(arr[i] == 0 || arr[i] == x)
                {
                    dp[i][x] = 1;
                }
                else
                {
                    dp[i][x] = 0;
                }
            }
            else
            {
                if(arr[i] == 0 || arr[i] == x)
                {
                    dp[i][x] = (dp[i-1][x-1] + dp[i-1][x] + dp[i-1][x+1])%mod;
                }
                else
                {
                    dp[i][x] = 0;
                }
            }
        }
    }
 
    int ans = 0;
    for(int x = 1; x <= m; x++)
        ans = (ans+dp[n][x])%mod;
    return ans;
}
int main()
{
    ll n, m;
    cin>>n>>m;
    ll arr[n+1];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    cout<<solve(n, m, arr);
    return 0;
}
