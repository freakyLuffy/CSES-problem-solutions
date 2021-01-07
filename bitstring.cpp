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
	ll ans=1;
	 while(n--)
	 {
	 	ans*=2;
	 	ans%=(ll)(mod);
	 }
	cout<<ans%(ll)(mod);
}
int main() {
	  
	solve();
	return 0;
}