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
		int  n,k; cin>>n>>k;
		string str="abc";

		int val=n/3;
		int rem=n%3;

		for(int i=0;i<val;i++)
		{
			cout<<str;
		}

		for(int i=0;i<rem;i++)
		{
			cout<<str[i];
		}
		cout<<"\n";
		
	}
}
int main() {
	  
	solve();
	return 0;
}