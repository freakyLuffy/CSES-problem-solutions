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
vector<int>adj[100001];
int visited[100001]={};
int dis[100001]={};
int par[100001]={};
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
    queue<int>q;
    q.push(1);
 
 
    dis[1]=1;
 
    int ok=0;
 
    visited[1]=1;
    while(!q.empty())
    {
    	int t=q.front();
    //	visited[t]=1;
    	q.pop();
    	if(t==n)
    	{
    		ok=1;
    		break;
    	}
    	for(auto i:adj[t])
    	{
    		if(visited[i]==0)
    		{
    			dis[i]=dis[t]+1;
    			visited[i]=1;
    			par[i]=t;	  
    		    q.push(i);
    	    }
    	}
    }
    if(!ok)
    {
    	cout<<"IMPOSSIBLE";
    }
    else{
 
    	cout<<dis[n]<<"\n";
    	vector<int>ans;
    	ans.pb(n);
    	int p=n;
    	// for(int i=1;i<=n;i++){
    	// 	cout<<par[i]<<" ";
    	// }
    	while(p!=1)
    	{
    		ans.pb(par[p]);
    		p=par[p];
    	}
    	reverse(all(ans));
    	for(auto i:ans)
    		cout<<i<<" ";
 
 
 
    }
   
	return 0;
}