#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	ll  n;
	cin>>n;
      ll sum=0;
      ll maxx=0,minn=0;
	for(int i=0;i<n;i++)
	{
		ll a; ll b;
		cin>>a>>b;

		if(a>maxx)
		{

			sum+=b-a;
		}
		else if(b>maxx){
			sum+=b-minn;
		}
		maxx=max(a,b);
		minn=min(a,b);
		
		//minn=min(a,b);



	}
	cout<<sum;
}
int main() {
	  
	solve();
	return 0;
}