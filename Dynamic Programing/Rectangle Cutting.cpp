#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(505,vector<int>(505,-1));
int count(int a, int b)
{
    if(a==b) return 0;
    int &ans=dp[a][b];
    if(ans!=-1) return ans;
    int temp=INT_MAX;
    for(int i=1; i<a; ++i)    temp=min(temp,1+count(i,b)+count(a-i,b));
    for(int i=1; i<b; ++i)    temp=min(temp,1+count(a,i)+count(a,b-i));
    return ans=temp;
}
int main()
{
    int a,b; cin>>a>>b;
    cout<<count(a,b);
}
