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
#include<climits>
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
char ch[1001][1001];
int dis[1001][1001];
int dis1[1001][1001];
vector<pair<int,int>>vp;
bool isValid(int row, int col,int n,int m,vector<vector<int>>&vis)
{
 
    if (row < 0 || col < 0
        || row >= n || col >=m || ch[row][col]=='#')
        return false;
 
    if(vis[row][col])
    	return false;
 
    return true;
}
void bfs(int n,int m,vector<vector<int>>vis)
{
    queue<pair<int, int> > q;
    for(int i=0;i<vp.size();i++)
    {
    q.push({ vp[i].first, vp[i].second });
    vis[vp[i].first][vp[i].second] = true;
    dis[vp[i].first][vp[i].second]=0;
    }
    while (!q.empty()) {
 
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;
 
        q.pop();
 
        for (int i = 0; i < 4; i++) {
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
            if (isValid(adjx, adjy,n,m,vis)) {
                q.push({ adjx, adjy });
                vis[adjx][adjy] = true;
                dis[adjx][adjy]=min(dis[adjx][adjy],dis[x][y]+1);
            }
        }
    }
}
int main() {
 
	for(int i=0;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			dis[i][j]=INT_MAX;
		}
	}
	int n,m;
	cin>>n>>m;
	pair<int,int>p1,p2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ch[i][j];
			if(ch[i][j]=='M')
			{
				p1.first=i;
				p1.second=j;
				vp.pb(p1);
			}
			if(ch[i][j]=='A')
			{
				p2.first=i;
				p2.second=j;
			}
		}
	}
	vector<vector<int>>vis(1001,vector<int>(1001,0));
//  int vis[1001][1001];
 
	bfs(n,m,vis);
 
 
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<m;j++)
	// 	{
	// 		cout<<dis[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
 
  //   memset(vis,0,sizeof(vis));
	char dir[1001][1001];
	queue<pair<int,int>>q;
    q.push({ p2.first, p2.second});
    vis[p2.first][p2.second] = true;
    dis1[p2.first][p2.second]=0;
    int ok=0;
    vector<char>ans;
      if(p2.first==0 || p2.first==n-1 || p2.second==0 || p2.second==m-1)
           {
 
 
           	  ok=1; 
           }
    while (!q.empty() && !ok) {
 
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;
 
        q.pop();
        if(dis[x][y]>dis1[x][y])
        {
           if(x==0 || x==n-1 || y==0 || y==m-1)
           {
           	while(1){
				ans.push_back(dir[x][y]);
				if(ans.back() == 'L') y++;
				if(ans.back() == 'R') y--;
				if(ans.back() == 'U') x++;
				if(ans.back() == 'D') x--;
				
				if(x==p2.first && y==p2.second)
				{
				ok=1;
				break;
			    } 
			}
 
           }
                if(ok)
       	break;
 
 
        for (int i = 0; i < 4; i++) {
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
            if (isValid(adjx, adjy,n,m,vis)) {
            	if(dis1[x][y]+1<dis[adjx][adjy])
            	{
            		if(i==0)
                 {
                  dir[adjx][adjy]='U';
                 }
                 else if(i==1)
                 {
                    dir[adjx][adjy]='R';
                 }
                 else if(i==2)
                 {
                     dir[adjx][adjy]='D';
                 }
                 else{
                       dir[adjx][adjy]='L';
                 }
                q.push({ adjx, adjy });
                dis1[adjx][adjy]=dis1[x][y]+1;
                }
                 vis[adjx][adjy] = true;
            }
        }
       }
  
    }
 
    if(ok)
    {
    	cout<<"YES\n";
    	cout<<ans.size()<<'\n';
    	reverse(all(ans));
    	for(auto i:ans)
    		cout<<i;
    }
    else{
    	cout<<"NO";
    }
 
	
 
 
	
	return 0;
}