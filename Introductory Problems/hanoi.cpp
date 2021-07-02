#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
int count1=0;
void toh(int n,int a,int b,int c,vector<pair<int,int>>&p)
{
	if(n==1)
	{
		p.pb({a,b});
		count1++;
		return ;
	}

	toh(n-1,a,c,b,p);
	count1++;
	p.pb({a,b});

	toh(n-1,c,b,a,p);

}
void solve(){
     int n;
     cin>>n;
     vector<pair<int,int>>p;
     toh(n,1,3,2,p);
     cout<<count1<<"\n";
     for(auto i:p)
     {
     	cout<<i.first<<" "<<i.second<<"\n";
     }

}
int main() {
	  
	solve();
	return 0;
}