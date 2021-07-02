#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x

void solve(){
	int n;
	cin>>n;
	int j=(n&1?n-1:n);
	int k=(n&1?n:n-1);
	int i=1;
	if(n==2 || n==3)
	{
		cout<<"NO SOLUTION\n";
	}
	else if(n==4)
	{
		cout<<"2 4 1 3";
	}
	else{

	if(n%2==0)
	{
	while(i<=n)
	{
		if(i<=n/2)
		{
			cout<<j<<" ";
			j-=2;
		}
		else{

          cout<<k<<" ";
          k-=2;
		}
		i++;
	}
    }
    else{

    	while(i<=n)
    	{
    		if(i<=n/2)
    		{
    			cout<<j<<" ";
    			j-=2;
    		}
    		else if(i==(n+1)/2)
    		{
    			cout<<n<<" ";
    			k-=2;
    		}

    		else {
    			cout<<k<<" ";
    			k-=2;
    		}
    		i++;
    	}
    }
}
}
int main() {
	  
	solve();
	return 0;
}