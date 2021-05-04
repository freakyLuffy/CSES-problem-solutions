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
		ll n,k;
		cin>>n>>k;
		//v(ll,v,n);
		if(n%k==0){
			cout<<n/k<<"\n";
		}
		else if(k%n==0){
			cout<<k/n<<"\n";
		}
		else if(n>k){
			cout<<n/k+1<<"\n";
		}
		else if(n<k){
			cout<<k/n+1<<"\n";
		}
		
	}
}
int main() {
	  
	solve();
	return 0;
}