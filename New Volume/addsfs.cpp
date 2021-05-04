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
	{    ll n;
		cin>>n;
		ll k;

		cin>>k;
		v(ll,ar,n);
        mex = 0;
    for (int i = 0; i < n;i++)
        cin>>ar[i];
     ll sum = ar[0];
    for (int i = 1; i < n;i++)
    {
    ll x = (ar[i]*100);
  
    if (sum*k>= x)
    {
    sum += (ar[i]);
    continue;
}
      
    else
    {
        ll ze = x - (sum * k);
if(ze%k==0)
    ze = z / k;
else
{
    ze = (ze / k) + 1;
}

        mx = max(ze, mex);
}
sum += (ar[i]);
}
cout <<mex<<"\n";
}
int main() {
	  
	solve();
	return 0;
}