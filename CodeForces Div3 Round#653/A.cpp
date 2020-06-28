

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

int t;
ll find(ll n, ll x)
{
    ll var1 = n/x;
    return (var1 * x);
}

int main()
{
    fast_io;

    cin>>t;
while(t--)
{
    ll x,y,n;
    cin>>x>>y>>n;

    ll k = find(n,x);
    if( (k+y) <= n)
    cout<<(k+y)<<endl;

    else if( (k+y) > n)
    {
        while( (k+y) > n )
        {
            k = k - x;
        }
        cout<<(k+y)<<endl;
    }
}

return 0;
}
