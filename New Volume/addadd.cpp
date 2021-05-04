#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
bool is(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		if(is(n))
			cout<<"NO\n";
		else
			cout<<"YES\n";

		
	}
}
int main() {
	  
	solve();
	return 0;
}