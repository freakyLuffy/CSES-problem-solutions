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
int vis[1001][1001];
char ch[1001][1001];
char bh[1001][1001];
pair<int,int>st;
pair<int,int>en;
bool isValid(int row, int col,int n,int m)
{
    // If cell lies out of bounds
    if (row < 0 || col < 0
        || row >= n || col >= m || ch[row][col]=='#')
        return false;
 
    // If cell is already visited
    if (vis[row][col])
        return false;
 
    // Otherwise
    return true;
}
// void dfs(int i,int j,string s,int n,int m)
// {
// 	if(i<0 || j<0 || i>=n || j>=m || ch[i][j]=='#' || vis[i][j])
// 	{
// 		return;
// 	}
// 	 vis[i][j]=1;
// 	if(i==en.first && j==en.second)
// 	{
// 		ans=s;
// 		return;
// 	}
// 	 dfs(i+1,j,s+'D',n,m);
// 	 dfs(i,j+1,s+'R',n,m);
// 	 dfs(i-1,j,s+'U',n,m);
// 	 dfs(i,j-1,s+'L',n,m);
 
// }
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
vector<char>ans;
int main() {
	int n,m;
	cin>>n>>m;
	int ok=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ch[i][j];
			if(ch[i][j]=='A')
			{
				st.first=i,st.second=j;
			}
			else if(ch[i][j]=='B')
			{
				en.first=i,en.second=j;
			}
		}
	}
	queue<pair<int,int>>pq;
	pq.push({st.first,st.second});
	while(pq.empty()!=1)
	{
		pair<int,int>pp=pq.front();
		pq.pop();
		int a=pp.first;
		int b=pp.second;
	//	pair<int,int>top={pq.front().first,pq.front().second};
		 if(ch[a][b]=='B'){
			while(1){
				ans.push_back(bh[a][b]);
				if(ans.back() == 'L') b++;
				if(ans.back() == 'R') b--;
				if(ans.back() == 'U') a++;
				if(ans.back() == 'D') a--;
				
				if(a==st.first && b==st.second)
				{
				ok=1;
				break;
			    } 
			}
		}
		for(int i=0;i<4;i++)
		{
			int adjx = pp.first + dRow[i];
            int adjy =pp.second + dCol[i];
            if (isValid(adjx, adjy,n,m)){
                pq.push({ adjx, adjy });
                vis[adjx][adjy] = true;
                 if(i==0)
                 {
                  bh[adjx][adjy]='U';
                 }
                 else if(i==1)
                 {
                    bh[adjx][adjy]='R';
                 }
                 else if(i==2)
                 {
                     bh[adjx][adjy]='D';
                 }
                 else{
                       bh[adjx][adjy]='L';
                 }
            }
		}
	}
	if(ok)
	{
		cout<<"YES\n";
		cout<<ans.size()<<"\n";
		reverse(all(ans));
		for(auto i:ans)
			cout<<i;
	}
	else{
		cout<<"NO";
	}
	return 0;
}