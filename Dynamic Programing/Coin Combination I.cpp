#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
vector<int> dp(1000005);
int32_t main()
{
    int n,x; cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; ++i) cin>>arr[i];
    dp[0]=1;
    for(int i=1; i<=x; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(arr[j]<=i)
            {
                dp[i]+=dp[i-arr[j]];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[x]%mod;
    return 0;
}
