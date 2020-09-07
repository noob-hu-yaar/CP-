

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

int main()
{
    fast_io;

    ll t;
    cin>>t;
while(t--)
{

    ll n;
    cin>>n;
    vector<ll> v(n);

    for(ll &i : v)
    cin>>i;

    ll res = 0;
    for(ll i=0;i<n;i++)
    {
        if(res + v[i] < 0)
            res = 0;
        
        else
            res += v[i];

    }

    cout<<res<<endl;
}

return 0;
}
