

#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ll dp[100005];

int fun(string &s,ll i, ll n, ll dp[])
{
    ll ways = 0;
    //Base case
    if(i >= n-1)
    return 0;

    //Lookup
    if(dp[n-1] != -1)
    return dp[n-1];

    if(s[i] == s[i+1])
    {
    ways += fun(s,i+1,n,dp);
    }

    else if(s[i] != s[i+1])
    {
    ways += (1+fun(s,i+2,n,dp));
    }

    return dp[n-1] = ways;
}

int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        memset(dp,-1,sizeof(dp));
        ll n = s.length();
        cout<<fun(s,0,n,dp)<<endl;
    }
    return 0;
}
