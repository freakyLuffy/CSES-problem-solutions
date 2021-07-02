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
	ll n,m,k;
	cin>>n>>m>>k;
	v(ll,v,n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(all(v));
 
	v(ll,v1,m);
	for(int i=0;i<m;i++)
		cin>>v1[i];
	sort(all(v1));
	int i=0,j=0,ans=0;
	 while(i<n && j<m)
	 {
	 	if(v1[j]>=(v[i]-k) && v1[j]<=(v[i]+k))
	 	{
	 		i++;
	 		j++;
	 		ans++;
	 	}
	 	else if(v1[j]<(v[i]-k))
	 	{
	 		j++;
	 	}
	 	else if(v1[j]>(v[i]+k))
	 	{
	 		i++;
	 	}
 
	 }
	cout<<ans;
 
}
int main() {
	  
	solve();
	return 0;
}