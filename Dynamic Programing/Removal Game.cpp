#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int arr[200005], n;
vector<vector<int>> dp(5005,vector<int>(5005,-1));
int best_score(int i, int j)
{
    if(i==j) return arr[i];
    if(j==i+1) return max(arr[i],arr[j]);
    int &ans=dp[i][j];
    if(ans!=-1) return ans;
    return ans=max(arr[i]+min(best_score(i+2,j),best_score(i+1,j-1)),arr[j]+min(best_score(i+1,j-1),best_score(i,j-2)));
}
int32_t main()
{
    cin>>n;
    for(int i=0; i<n; ++i) cin>>arr[i];
    cout<<best_score(0,n-1);
}
