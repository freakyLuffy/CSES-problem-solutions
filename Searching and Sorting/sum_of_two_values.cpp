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
	ll n,x;
	cin>>n>>x;
	vector<pair<int,int>>p;
	
		for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		p.pb({a,i});
	}
	sort(all(p));
	int i=0,j=n-1;
	bool ok=0;
	while(i<j)
	{
		if(p[i].first+p[j].first==x)
		{
			cout<<p[i].second+1<<" "<<p[j].second+1;
			ok=1;
			break;
		}
		else if(p[i].first+p[j].first>x)
		{
			j--;
		}
		else{
			i++;
		}
	}
	if(!ok)
	{
		cout<<"IMPOSSIBLE";
	}
}
int main() {
	  
	solve();
	return 0;
}