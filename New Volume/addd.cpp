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
		int n;
		 cin>>n;
		 v(ll,v,n);
		 ll sum=0;
		 ll sum2=0;
		 int ans=n;
		 int an=0;
		// int j;
		 for(int i=0;i<n;i++)
		 {
		 	cin>>v[i];
		 	sum+=v[i];
		 }
		 int val=1;
		for(int i=n;i>=1;i--)
		{
         ll sum1=sum/i;
         sum2=0; 
         an=1;
         int flag=1;
         if(sum%i==0)
         {
         	int j=0;
         for( ;j<n;j++)
         {
         	sum2+=v[j];

         	if(sum2==sum1)   
         	{
               sum2=0;
         	}
         	else if(sum2>sum1)
         	{   flag=0;
         		break;
         	}
          }
          if(j==n && sum2==0)
          {
          	cout<<n-i<<"\n";
          	break;
          }
      }
         // dbg(an);
		
	}
	//cout<<n-val<<"\n";
}
}
int main() { 
	  
	solve();
	return 0;
}