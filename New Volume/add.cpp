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
	 ll n; cin>>n;
	  int ans=n;
	  int ans1=0;

     	 unordered_map<ll,int>mp;
     	 unordered_map<int,int>mp1;
	 v(ll,v1,n);
	 v(ll,v2,n);
	 v(ll,arr,n);
	 cin>>arr[0];
	 v1[0]=arr[0];
	 mp1[arr[0]]++;
	 mp[v1[0]]++;
	 for(int i=1;i<n;i++)
	 {
	    cin>>arr[i];
	    mp1[arr[i]]++;
	    if(i==n-1)
	    {
	    	v2[n-1]=arr[i];
	    	if(mp[v2[n-1]]!=0)
	    	{
	    		ans--;
	    		ans1++;
	    	}
	    	 //oops
	    }
        v1[i]=arr[i]+v1[i-1];
        mp[v1[i]]++;
	 }
	 for(int i=n-2;i>=0;i--)
	 {
          v2[i]=arr[i]+v2[i+1];
          if(mp[v2[i]]!=0)
          {
          	ans--;
          	ans1++;
          }

	 }
	 if(mp1.size()==1)
	 {
	 	cout<<0<<"\n";
	 }
	 else{
	 	cout<<min(ans,ans1)<<"\n";
	 }
	}
}
int main() {
	  
	solve();
	return 0;
}

/*
2
1
2
2
2
*/