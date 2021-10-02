#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main()
{
    int n; cin>>n;
    int arr[n], sum=0;
    for(int i=0; i<n; ++i) cin>>arr[i],sum+=arr[i];
    vector<vector<bool>> dp(2,vector<bool>(sum+1,false));
    dp[0][0]=true;
    dp[1][0]=true;
    // Optimised DP Space Complexity O(n) since only result of previous state was required 
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=sum; ++j)
        {
            if(arr[i-1]<=j) dp[i%2][j]=(dp[(i-1)%2][j]||dp[(i-1)%2][j-arr[i-1]]);
            else dp[i%2][j]=dp[(i-1)%2][j];
        }
    }
    vector<int> vec;
    for(int j=1; j<=sum; ++j) if(dp[n%2][j]) vec.push_back(j);
    cout<<vec.size()<<"\n";
    for(auto i: vec) cout<<i<<" ";
    return 0;
}
