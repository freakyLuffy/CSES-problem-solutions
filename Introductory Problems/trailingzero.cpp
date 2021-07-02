#include <bits/stdc++.h>
//#include<iostream>
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
		ll ans=0;
		ll i=1;
        // cout<<n/5+1*(n/100)+2*(n/1000)+3*(n/10000)+4*n(n/100000)+5*(n/1000000)+6*(n/10000000)+7*(n/100000000)+8*(n/1000000000);
         while(1)
         {
         	ans+=n/pow(5,i);
         	i++;
         	if(pow(5,i)>n)
         		
         		break;
         }
         cout<<ans;
	}
}
int main() {
	  
	solve();
	return 0;
}