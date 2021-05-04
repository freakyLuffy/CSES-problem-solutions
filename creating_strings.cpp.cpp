#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x
 
void solve(){
	string str; cin>>str;
	vector<string>v;
	sort(all(str));
	do{
		v.pb(str);
	}
    while(next_permutation(all(str)));
    cout<<v.size()<<"\n";
    for(auto i:v)
    {
    	cout<<i<<"\n";
    }
}
int main() {
	  
	solve();
}