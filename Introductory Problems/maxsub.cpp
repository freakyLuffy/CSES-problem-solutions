#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
        string str;
        cin>>str;
        ll count=1;
        ll ans=0;
        for(ll i =0;i<str.length()-1;i++)
        {
        	if(str[i]==str[i+1])
        	{
        		count++;

        	}
        	else{
        		ans=max(ans,count);
        		count=1;
        	}
        }
        ans=max(ans,count);
        cout<<ans;

}
int main() {
	  
	solve();
	return 0;
}