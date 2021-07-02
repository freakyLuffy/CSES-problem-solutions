#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	 int n;
	 cin>>n;
      v(ll,v,n);
	 for(int i=0;i<n;i++)
	 {ll a; cin>>a;
	 	v[i]=a;

	 }
	 ll ans=0;
     ll a=0;
	 for(int i=1;i<n;i++)
	 {
	 	ans+=max(a,v[i-1]-v[i]);
	 	v[i]+=max(a,v[i-1]-v[i]);

	 }
	 cout<<ans;
}
int main() {
	  
	solve();
	return 0;
}