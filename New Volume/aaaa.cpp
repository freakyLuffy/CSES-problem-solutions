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
		string str;
		 cin>>str;
           int ok=1;
           int len=str.length();
           int ok1=0,ok2=0,ok3=0,ok4=0;
		 for(int i=0;i<len;i++)
		 {
           
           if(str[i]>=97 && str[i]<=122)
           	ok1=1;
           

           if(str[i]>=65 && str[i]<=90 && i>1 && i<len-1)
           {
           	ok2=1;
           }
          

           if((str[i]=='$' || str[i]=='%' || str[i]=='#'|| str[i]=='@' || str[i]=='?') && (i>0 && i<len-1))
           	ok3=1;
           

           if((str[i]>=48 && str[i]<=57) && (i>0 && i<len-1))
           	ok4=1;
           
 

		 }
		 if(str.length()<10)
           	ok=0;

           if(ok1 && ok2 && ok3 && ok4 && ok)
           	cout<<"YES\n";
           else
           	cout<<"NO\n";
		
		
	}
}
int main() {
	  
	solve();
	return 0;
}