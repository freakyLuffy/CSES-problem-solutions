#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	ll n; cin>>n;
	if(n<5)
		cout<<0;
	else{
         int count=0;
		while(n)
		{ n/=5;
			count++;

		}
		cout<<count;

	}
}
int main() {
	  
	solve();
	return 0;
}