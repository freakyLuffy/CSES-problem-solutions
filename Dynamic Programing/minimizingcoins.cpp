#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[2*n];
		for(ll i=0;i<2*n;i++) cin>>a[i];
		ll c=40;
		while(c){
		for(ll i=0;i<2*n;i++)
		{
			ll x=(a[i]+a[(i+2)%(2*n)])/2;
			//cout<<i<<" "<<x<<" "<<a[(i+1)%2*n]<<" "<<(i+1)%2*n<<" ";
			if(x==a[(i+1)%(2*n)])
			{
				swap(a[i],a[(i+1)%(2*n)]);
			}
		}
			c--;
		}
		for(ll i=0;i<2*n;i++) cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}