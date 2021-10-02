#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
int32_t main()
{
    int n,x; cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; ++i) cin>>arr[i];
    vector<int> dp(x+1,0);
    dp[0]=1;
    for(int i=0; i<n; ++i) 
    {
        for(int j=1; j<=x; ++j) 
        {
            if(j>=arr[i]) dp[j]+=dp[j-arr[i]];
            dp[j]%=mod;
        }
    }
    cout<<dp[x]%mod;
    return 0;
}
