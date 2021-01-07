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
	cout<<n<<" ";
	while(n!=1)
	{
		if(n&1)
		{
			n*=3;
		    n+=1;
		    cout<<n<<" ";
		}
		else{
			n/=2;
			cout<<n<<" ";
		}

	
	}
	//cout<<1;
	// cin>>t;
	// while(t--)
	// {
		
		
	// }
}
int main() {
	  
	solve();
	return 0;
}