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
	{   ll n;
		cin>>n;
       ll a,b,k;
       cin>>a>>b>>k;
        v(ll,v,k);
        v(ll,v2,k);
        map<int,int>mp;
       for(int i=0;i<2*k;i++)
       {
       	ll a;
       	cin>>a;
       	mp[a]++
       }
       if(mp.size()>1)
       	cout<<mp.size()<<"\n";
       else
       	cout<<0<<"\n";
  
	}
}
int main() {
	  
	solve();
	return 0;
}