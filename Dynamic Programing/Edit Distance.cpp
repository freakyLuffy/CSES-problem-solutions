#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 1000000007
// Iterative DP (Bottom Up Approach) 
int edit_distance_iterative(string str1, string str2, int n, int m)
{
    //For Storing Results 
    int dp[n+1][m+1];    
    for(int i=0; i<=n; i++)
     {
        for(int j=0; j<=m; j++) 
        {
            // If string 1 is empty then insert all the characters of string 2
            if(i==0) dp[i][j]=j; 
 
            // If string 2 is empty then remove all the characters of string 1
            else if(j==0) dp[i][j] = i; // Min. operations = i
 
            //If at ith index both are same no operations needed to be performed 
            else if(str1[i-1]==str2[j-1]) dp[i][j]=dp[i-1][j-1];
 
            // Consider all possible Operations Insert, Remove, Replace
            else dp[i][j]= 1+ min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]}); 
        }
    }
    return dp[n][m];
}

int32_t main() {
    string str1, str2; cin>>str1>>str2;
    int n=str1.size(), m=str2.size();
    cout<<edit_distance_iterative(str1,str2,n,m);
    return 0;
}
