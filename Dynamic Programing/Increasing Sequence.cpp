#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main()
{
    int n; cin>>n;
    vector<int> lis;
    int x; cin>>x;
    lis.push_back(x);
    while(--n)
    {
        cin>>x;
        // If Given Number is greater than last number in LIS then include
        if(lis.back()<x) lis.push_back(x);
        // Else include it at its lower_bound position so that new more elements can be included in sequence
        else
        {
            auto it=lower_bound(lis.begin(), lis.end(),x)-lis.begin();
            lis[it]=x;
        }
    }cout<<lis.size();
}
