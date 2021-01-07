#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	ll n;
	cin>>n;
	ll ans=0;
	for(int i=0;i<n-1;i++)
	{
		ll a; cin>>a;
		ans+=a;
	}
	cout<<n*(n+1)/2-ans;
	
}
int main() {
	  
	solve();
	return 0;
}