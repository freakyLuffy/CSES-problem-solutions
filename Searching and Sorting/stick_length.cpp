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
	ll n;
	cin>>n;
	v(ll,v,n);
	map<ll,ll>mp;
	ll mx=-1;
	ll ele;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
 
		
	}
	for(auto i:mp)
	{
		if(i.second>mx)
		{
			ele=i.first;
			mx=i.second;
		}
	}
	sort(all(v));
	ll va=v[0];
	ll vaa=v[n-1];
	ll md2=v[n/2];
	ll md=(va+vaa)/2;
	ll md1=(va+vaa+1)/2;
	ll ans1=0;
	ll ans2=0;
	ll ans3=0;
	ll ans4=0;
	ll ans5=0;
	for(int i=0;i<n;i++)
	{
	ans5+=abs(v[i]-md2);
 
	}
	cout<<ans5;
	//1 2 2 3 5
	// 1 3 3 5 6
	//?
	//7?
	//8?
	//1 1 1 1 1 4 4 4 4
	//median ?
	// most occurence ?
 
}
int main() {
	  
	solve();
	return 0;
}