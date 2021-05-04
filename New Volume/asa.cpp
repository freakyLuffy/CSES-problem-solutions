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
		ll q,d;
		cin>>q>>d;
        int ok=0;
		for(int i=0;i<q;i++)
		{
			ll a; cin>>a;
			ll temp=a;
			while(temp)
			{
				if(temp%10==d)
					ok=1;
				temp/=10;
			}

			if(a>=d*10)
				ok=1;
            
			for(int i=1;i<=10;i++)
			{
				if(((d*i)%10==(a-d)%10) && d*i<a)
					ok=1;
			}

			if(ok)
				cout<<"YES\n";
			else
				cout<<"NO\n";

			ok=0;

	   }
}
}
int main() {
	  
	solve();
	return 0;
}