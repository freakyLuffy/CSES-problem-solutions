#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"->"<<x<<"\n"

void solve(){
	ll n;
	cin>>n;
        v(ll,v,n+1);
       ll sum=n*(n+1)/2; 
       if(sum%2!=0)
       {
       	cout<<"NO";
       	return ;
       }
       cout<<"YES\n";
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
//	cout<<sum1;
	if(sum1!=sum/2)
	{
		count+=1;
		//cout<<sum/2-sum1;

		// i--;
	}
	cout<<count<<"\n";
	ll a=n-i;
	//dbg(a);
	ll k=0;
	//dbg(sum1);
	while(a--)
	{  //cout<<"ds";
		cout<<v[n-k]<<" "; 
				k++;
	}

	if(sum1!=sum/2)
	{
		cout<<sum/2-sum1;
		//i+=1;
	}
	cout<<"\n";

	cout<<n-count<<"\n";
    k=1;
   // cout<<i<<" ";

   // dbg(i);
	while(i--)
	{   if((k)!=(sum/2-sum1))
		cout<<v[k]<<" ";
		k++;
	}


}
int main() {
	  
	solve();
	return 0;
}
