

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

ll t;
int main()
{
    fast_io;

    cin>>t;
while(t--)
{
    ll n;
    cin>>n;

    vector<ll> a(n), l(n),v;

    for(ll &i : a)
        cin>>i;

    for(ll i=0;i<n;i++)
    {
        cin>>l[i];

        if(l[i] == 0)
            v.pb(a[i]);
    }

    sort(v.begin(), v.end(), greater<int>() );

    int pos = 0;

    for(ll i=0;i<n;i++)
    {
        if(l[i] == 0)
            {
                cout<<v[pos]<<" ";
                pos++;
            
            }

            else
                cout<<a[i]<<" ";
    }

    cout<<endl;
}

return 0;
}
