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
int visited[1001][1001]={0};
 char ch[1001][1001];
void dfs(int i,int j,int n,int m)
{ 
	if(i<0 || j<0 || i>=n || j>=m)
	{
		return;
	}
	if(visited[i][j]==0 && ch[i][j]=='.')
	{
		visited[i][j]=1;
	}
	else{
		return;
	}
	    dfs(i,j+1,n,m);
	    dfs(i-1,j,n,m);
	    dfs(i+1,j,n,m);
	    dfs(i,j-1,n,m);
}
int main() {
	  
	  int n,m;
	  cin>>n>>m;
	 
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<m;j++)
	  	{
           cin>>ch[i][j];
	  	}
	  }
      int cnt=0;
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<m;j++)
	  	{
	  		if(ch[i][j]=='.' && !visited[i][j])
	  		{
	  			dfs(i,j,n,m);
	  			cnt++;
	  		}
	  	}
	  }
	  cout<<cnt;
	
	return 0;
}