#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b; cin>>a>>b;

		if((a+b)%3==0 && min(a,b)>=max(a,b)/2)
			cout<<"YES\n";
		else{
			cout<<"NO\n";
		}


		
		
	}
}
int main() {
	  
	solve();
	return 0;
}