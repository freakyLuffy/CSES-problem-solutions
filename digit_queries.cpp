#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define mod 1000000007LL
#define pb push_back
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"
#define inf 1LL<<60
void solve(){
	ll q;
	cin>>q;
	  vector<ll>vv(17,0);
	  int i=0;
	  vv[0]=9;

	  while(vv[i]<1000000000000000000)
	  { i++;
	  	vv[i]=9*(i+1)*pow(10,i);
	  }
	  
	  while(q--)
	  { 
	  	ll k;
	  	cin>>k;
        i=0;
	  for(i=0;i<18;i++)
	  {
	  	if(vv[i]>k)
	  	{
          break; 
	  	}
	  	else
	  	{
	  		k-=vv[i];
	  	}
	  }
	  if(i==0){
	  	cout<<k<<"\n";
	  	continue;
	  }

	  ll val=k; 
	// dbg(k);
	  ll ans=val/(i+1);
	  ll rem=val%(i+1);
	// dbg(ans);
	// dbg(i);
	  ll ans1;
	  // if(ans!=0)
	   ans1=(ll)(pow(10,i)+0.5)+(ans-1);
	// else
		//ans1=int(pow(10,i)+0.5);
	//  dbg(ans1);
	  string s=to_string(ans1);
	  string p=to_string(ans1+1);
	  if(rem)
	   cout<<p[rem-1]<<"\n";
	else
		cout<<s[s.length()-1]<<"\n";
	  
	  
   }

}
int main() {
	  
	solve();
	return 0;
}
/*
9 
180
2700
36000
450000
5400000
63000000
720000000
8100000000

*/