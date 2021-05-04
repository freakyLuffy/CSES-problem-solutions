#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60


void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		
		 ll rem=n/2020;
		 ll res=n%2020;
		 if(res<=rem)
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