

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

ll fun(ll a,ll b,ll x, ll y, ll n)
{
    ll kitne_bar = min(n, a-x);
    a = a - kitne_bar;

    n = n - kitne_bar;

    kitne_bar = min(n, b-y);
    b = b - kitne_bar;

    return (a*b);
}

ll t;
int main()
{
    fast_io

    cin>>t;
while(t--)
{
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;

    cout<<min( fun(a,b,x,y,n), fun(b,a,y,x,n) )<<endl;
}

return 0;
}
