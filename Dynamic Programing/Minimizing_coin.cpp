#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define mod 1000000007LL
#define pb push_back
#pragma GCC target ("avx2")
#include<climits>
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		
 
 
		
	}
}
ll dp[1000001];
ll solve(ll arr[],int i,long long sum,int n,int siz)
{
	if(sum==n)
	{
		return 0;
	}
     if(i>=siz)
     {
     	return INT_MAX;
     }
	if(dp[sum]!=-1)
		return dp[sum];
	if(arr[i]>(n-sum))
	{
		return solve(arr,i+1,sum,n,siz);
	}
	return dp[sum]=min(1+solve(arr,i,sum+arr[i],n,siz),solve(arr,i+1,sum,n,siz));
}
ll solve(ll arr[], long long M, long long V)
{
 if (V==0) return 0;
      if (M<=0) return INT_MAX;
      if(dp[V]!=-1)
        return dp[V];
      if (V < arr[M-1]) {
          return dp[V] = solve(arr, M-1, V);
      } else {
          return dp[V]= min(solve(arr, M-1, V), 1LL + solve(arr, M, V-arr[M-1]));
      }
} 
int main() {
	  ll n,x;
	  cin>>n>>x;
	  ll arr[n];
	  for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 dp[0]=0;
	 for(int i=1;i<=x;i++)
	 {
	 	dp[i]=INT_MAX;
	 }
 
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=1;j<=x;j++)
	 	{
	 		if(j-arr[i]>=0)
	 		{
	 			dp[j]=min(dp[j],1+dp[j-arr[i]]);
 
	 		}
	 	}
 
	 }
	 if(dp[x]==INT_MAX)
	 {
	 	cout<<"-1";
 
	 }
	 else{
	 	cout<<dp[x];
	 }
	return 0;
}