#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define v(x,a,n) vector<x>a(n)
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<"=="<<x<<"\n";

void solve(){
	int t;
	cin>>t;
	while(t--)
	{
		ll n ; cin>>n;
		string str;
		//string s="";
		cin>>str;
		int prev,x;
		string s="";
		if(str[0]=='1')
		{
			str[0]='2';
			s+="1";
		}
		else 
		{
			str[0]='1';
			s+="1";
		}
		if(str[0]=='1')
				prev=1;
			else if(str[0]=='2')
				prev=2;

		//	dbg(prev);
		for(int i=1;i<n;i++)
		{
          //  char ch=str[i];
			if(str[i]=='1')
				x=1;
			else if(str[i]=='0')
				x=0;
			int y;
			//int y=(int)str[i]-48;
         //   int curr=(int)str[i]-48
			if(x+1==prev)
	        {
	        	if(x+1==2)
	        	{
	        		str[i]='1';
	        		s+="0";
	        		if(str[i]=='1')
				y=1;
			else if(str[i]=='0')
				y=0;
			else if(str[i]=='2')
				y=2;

	        	}
	        	  else if(x+1==1)
	        	  {
	        	  	str[i]='0';
	        	  	s+="0";
	        	  	if(str[i]=='1')
				y=1;
			else if(str[i]=='0')
				y=0;
			else if(str[i]=='2')
				y=2;

	        	  }
	        }
	        else{
	        	if(x+1==2)
	        	{

	        		str[i]='2';
	        		s+="1";
	        		if(str[i]=='1')
				y=1;
			else if(str[i]=='0')
				y=0;
			else if(str[i]=='2')
				y=2;
	        	}
	        	 else if(x+1==1)
	        	 {  //cout<<"four  ";
	        	 	str[i]='1';
	        	 	s+="1";
	        	 	if(str[i]=='1')
				      y=1;
			else if(str[i]=='0')
				y=0;
			else if(str[i]=='2')
				y=2;
			   //dbg(y);
	        	 }
	        }

	        prev=y;
	       // dbg(prev);

		}
		cout<<s<<"\n";
		
	}
}
int main() {
	  
	solve();
	return 0;
}
