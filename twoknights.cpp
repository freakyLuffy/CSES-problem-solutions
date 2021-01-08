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
	int l=1;
	ll ans;
	while(l<=n)
	{
		ans=(l*l*(l*l-1))/2-4*(l-1)*(l-2);
		cout<<ans<<"\n";
        l++;

	}
}
int main() {
	  
    solve();
	return 0;
}