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
vector<int>adj[100001];
int visited[100001];
void dfs(int i)
{
 
    visited[i]=1;
	for(auto j:adj[i])
	{
		if(!visited[j])
		{
			dfs(j);
		}
 
	}
}
int main() {
	  
     int n,m;
     cin>>n>>m;
     for(int i=0;i<m;i++)
     {
     	int a,b;
     	cin>>a>>b;
     	adj[a].push_back(b);
     	adj[b].push_back(a);
     }
     vector<int>ans;
     for(int i=1;i<=n;i++)
     {
     	if(!visited[i])
     	{
     		dfs(i);
     		ans.push_back(i);
     	}
     }
     cout<<ans.size()-1<<"\n";
     for(int i=1;i<ans.size();i++)
     {
     	cout<<ans[i-1]<<" "<<ans[i]<<"\n";
     }
	return 0;
}