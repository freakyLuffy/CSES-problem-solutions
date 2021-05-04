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
        v(ll,v,n+1);
       ll sum=n*(n+1)/2; //28
	for(ll i=1;i<=n;i++)
	{
         v[i]=i;
	}
	ll i=n;  //6
    ll sum1=0;
	int count=0;
	while(i>=1)
	{
		if(sum1+i>sum/2)
	    break;
        sum1+=i;
        count++;
        i--;
	}
	cout<<sum1;
	// if(sum1!=sum/2)
	// 	count+=1;
	// cout<<count<<"\n";
	// ll a=n-i;
	// ll k=1;
	// while(a--)
	// {
	// 	cout<<v[n-k]<<" ";
	// 	k--;
	// }
	// if(sum1!=sum/2)
	// 	cout<<sum1-n/2<<"\n";

	// cout<<n-count<<"\n";
 //   k=0;
	// while(i--)
	// {   if(v[k]!=sum1-n/2)
	// 	cout<<v[k++]<<" ";
	// }


}
int main() {
	  
	solve();
	return 0;
}