#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n"

bool iss(vector<ll>s, ll n, ll sum)
{
    
    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
       dp[0][i] = false;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < s[i - 1])
                dp[i][j] = dp[i - 1][j];
            if (j >= s[i - 1])
                dp[i][j] = dp[i - 1][j]
                               || dp[i - 1][j - s[i - 1]];
        }
    }
 
    return dp[n][sum];
}
void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		
		ll n,k;
		cin>>n>>k;
		v(ll,v,n);
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			sum+=a;
			v[i]=a;
		}
	//	dbg(sum);
		if(sum==2*k)
		{
			if(iss(v,n,k))
			{       
				cout<<n<<"\n";
			}
			else 
			cout<<"-1\n";
			continue;
		} 
		else if(sum<2*k)
		{
			cout<<"-1\n";
			continue;
		}
		sort(all(v),greater<ll>());
    // for(auto i:v)
    //   dbg(i);
         ll sum1=0,sum2=0;
         int ind=-1; ll val;
         ll count=0;
         int i=0;
         for( ;i<n;i++)
         {
         	if((v[i])<=(k-sum1))
         	{
         	sum1+=v[i];
         	count++;
         	}
         	else{
         		 val=v[i];
         		for(int j=i;j<n;j++)
         		{
         			if(v[j]+sum1>=k)
         			{
         				val=min(val,v[j]);
         				ind=j;
         			}
         			
         		}
         		v[ind]=0;
         		count++;
         		
         		break;
         	}

          if(sum1==k)
          {
           // count++;
            break;
          }
         }
         //dbg(i);
         //dbg(sum1);
          
          for(int j=i;j<n;j++)
          {
          	if(v[j]!=0)
          	{
          	  sum2+=v[j];
          	  count++;
          	}
          	  
          	  if(sum2>=k)
          	  break;
          	
          }
          
          if(sum2>=k)
	       {
	       	cout<<count<<"\n";
	       	
	       }
         
         else{
         	cout<<"-1\n"; 
         }
	
	}
}
int main() {
	  
	solve();
	return 0;
}