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
int visited[100001];
vector<int>adj[200001];
vector<int>an;
int val;
bool isCyclicUtil(int v,int parent)
{
	
    visited[v] = true;
     an.pb(v);
    for (auto it:adj[v])
    {  
        if(!visited[it])
        {
           if (isCyclicUtil(it,v))
              return true;
        }
        else if (it!=parent)
        	{
        		 an.pb(it);
        		
           return true;
        }
    }
    an.pop_back();
    return false;
}
// void isCyclicU(int v,int parent,vector<int>&p)
// {
// 	 p.pb(v);
//     visited[v] = true;
//     for (auto it:adj[v])
//     {  
//         if(!visited[it])
//         {
//            if (isCyclicUtil(it,v,p))
//               return ;
//         }
//         else if (it!=parent)
//            return ;
//     }
//     return ;
// } 
bool isCyclic(int n)
{
    for (int i =1; i<=n; i++)
        visited[i] = false;
    for (int u = 1; u <=n; u++)
    {
        if (!visited[u])
        	{ vector<int>p;
          if (isCyclicUtil(u, -1))
          {
             return true;
          }
        }
    }
    return false;
}
int vis[100001];
int ans[100001];
int ok=1;
void dfs(int v)
{
	vis[v]=1;
	cout<<v<<" ";
 
	for(auto i:adj[v])
	{
		if(!vis[i])
		{
			dfs(i);
		}
		else{
		    cout<<i<<" ";
		    return;
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
 
	if(!isCyclic(n))
	{
		cout<<"IMPOSSIBLE";
	}
	else{
		int last=an[an.size()-1];
		vector<int>ans;
	//	dbg(last);
		ans.pb(last);
		int i=an.size()-2;
	       while(an[i]!=last)
	       {
	      
	       	ans.pb(an[i]);
	       	 	i--;
	       }
	       cout<<ans.size()+1<<"\n";
	       for(auto i:ans)
	       	cout<<i<<" ";
	       cout<<last<<" ";
	}
 
	
	 return 0;
	}