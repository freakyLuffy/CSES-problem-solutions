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
	vector<int>p1,p2;
	for(int i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
	    p1.pb(a);
	    p2.pb(b);
	}
	sort(all(p1));
	sort(all(p2));
	int ans=0;
	int count=0;
	int j=0,i=0;
	while(i<n)
		{
			if(p1[i]<p2[j])
			{
				i++;
				count++;
			}
			else{
				j++;
				count--;
 
			}
			ans=max(ans,count);
		}
	
	
	
//	ans=max(ans,count);
	cout<<ans<<"\n";
}
int main() {
	  
	solve();
	return 0;
}