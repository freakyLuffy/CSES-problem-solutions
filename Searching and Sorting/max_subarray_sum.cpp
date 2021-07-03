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
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		//sum+=v[i];
	}
 
	ll mx=-inf;
	//dbg(sum);
	int i=0,j=n-1;
	for(auto i:v)
	{	
    	sum=max(sum+i,i);
    	mx=max(mx,sum);
    }
 
	cout<<mx;
 
 
}
int main() {
	  
	solve();
	return 0;
}