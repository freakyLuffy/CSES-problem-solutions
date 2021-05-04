#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"

void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		string str;
		cin>>str;
		ll x=0;
		unordered_map<char,int>mp;
		mp[0]++;
         v(ll,v,n);
		for(int i =0;i<n;i++)
		{
			if(str[i]=='-')
			{   x--;
				mp[x]++;
			}
			else{
				x++;
				mp[x]++;
			}

			 v[i]=mp.size();

		}
        ll total=v[n-1];
       // dbg(total);
        // for(auto i:v)
        // {
        // 	cout<<i<<"\n";
        // }
		while(m--)
		{
			ll l,r;
			ll a,b;
			cin>>l>>r;
			if(l>=2)
		     a=v[l-2];
		    else
		    a=0;
	      // dbg(a);
		  
		   if(r<n-1)
		   {
		   	b=v[l];
		   }
		   else{
		   	b=0;
		   }
		    ll val=total-v[r-1];
		  // dbg(b);
		   //ll val2=b-a;
		   cout<<val+a<<"\n";
		}
		
	}
}
int main() {
	  
	solve();
	return 0;
}