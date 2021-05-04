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
		ll n;
		cin>>n;
		ll count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
         ll a; cin>>a;
          for(int j=0;j<a;j++)
          {
          	ll b; cin>>b;
          	 if(b<0)
          	 	count1++;
          	 else
          	 	count2++;
          }
		}
		cout<<count1*count2<<"\n";
		
	}
}
int main() {
	  
	solve();
	return 0;
}