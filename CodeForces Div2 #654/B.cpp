

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

void solve()
{
    ll n,r,i;
    cin>>n>>r;
    ll ans=0;

    if(n>r)
        ans=(r*(r+1))/2;
    else
        ans=(n*(n-1))/2 +1;
    
    cout<<ans<<endl;
}

int main()
{
    fast_io;

    int t;
    cin>>t;

    while(t--) 
    solve();
    return 0;
}