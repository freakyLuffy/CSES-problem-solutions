#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x
#define f first
#define s second

void solve(){
	 string str;
	 cin>>str;
     map<char,int>mp;
     for(auto i:str)
     {
     	mp[i]++;
     }
      vector<pair<char,int>>v;
      vector<char> v1;
      pair<char,int>p;
      ll count=0;
      for(auto i:mp)
      {
      	if(i.s%2!=0)
      		count++;
      }
      if((count==mp.size() || count>1) && mp.size()!=1)
     {
     	cout<<"NO SOLUTION\n";
     	return;
     }
     for(auto i:mp)
     {
     	 	for(int j=0;j<mp[i.f]/2;j++)
     	 		cout<<i.f;
             p.f=i.f;
             p.s=(mp[i.f]/2);
     		 v.pb(p);
    
     		 if(i.s%2)
     	 	v1.pb(i.f);
     	 	//count++;
     	 
     }
     
        for(auto i:v1)
     	cout<<i;
     for(int j=v.size()-1;j>=0;j--)
     {
     	for(int k=0;k<v[j].s;k++)
     		cout<<v[j].f;
     }


}
int main() {
	  
	solve();
	return 0;
}