#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
		
		ll x,y;
		cin>>x>>y;
		ll max1,min1;
		if(max(x,y)%2==0)
		{
			max1=(max(x,y)-1)*(max(x,y)-1)+1;
			min1=max(x,y)*max(x,y);
            //cout<<max1<<"\n";

			if(y<x)
		{
			cout<<(min1-y+1)<<"\n";
		}
			else{
				cout<<(max1+x-1)<<"\n";
			}
		}
		else{
			max1=max(x,y)*max(x,y); 
			min1=(max(x,y)-1)*(max(x,y)-1)+1;
			//cout<<max1<<" "<<min1<<'\n';
			if(y<x)
		{
			cout<<min1+y-1<<"\n";
		}
			else{
				cout<<max1-x+1<<"\n";
			}
		}
	}
		}
int main() {
	  
	solve();
	return 0;
}