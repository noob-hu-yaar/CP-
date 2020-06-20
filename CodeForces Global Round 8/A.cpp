

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

ll c;
ll fun(ll a,ll b,ll n)
{
    c = 0;
    while( max(a,b) <= n)
    {
        (a < b) ? (a += b) : (b += a);
        c++;
    }

    return c;
}
int main()
{
    fast_io;

    ll t;
    cin>>t;
while(t--)
{
    ll a,b,n;
   // c = 0;
    cin>>a>>b>>n;

    cout<<fun(a,b,n)<<endl;
}

return 0;
}
