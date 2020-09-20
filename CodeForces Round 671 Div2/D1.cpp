



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

    ll n;
    cin>>n;

    /*vector<ll> aage(n/2 +1), piche(n/2 +1);

    for(ll i=0;i<n/2;i++)
    {
        cin>>aage[i];
    }
    sort(aage.begin(), aage.end());

    ll j=0;
    for(ll i=n/2;i<n;i++)
    {
        cin>>piche[j];
        j++;
    }

    sort(piche.begin(), piche.end()); */

    vector<ll> a(n), aage, piche;

    for(ll i=0;i<n;i++)
        cin>>a[i];

    sort(a.begin(), a.end() );

    for(ll i=0;i<n/2;i++)
    {
        aage.pb(a[i]);
    }
    for(ll i=n/2;i<n;i++)
    {
        piche.pb(a[i]);
    }



    if(n&1)
    cout<<n/2<<endl;
    else
    cout<<(n/2)-1<<endl;

    if(n%2==0)
    {
        ll a = 0, p = 0;
        for(ll i=0;i<n/2;i++)
        {
            cout<<piche[p]<<" "<<aage[a]<<" ";
            p++,a++;
        }
    }
    else if(n%2!=0)
    {
        ll a = 0, p = 0, i;
        for(i=0;i<n/2;i++)
        {
            cout<<piche[p]<<" "<<aage[a]<<" ";
            p++,a++;
        }
        cout<<piche[i];
    }

return 0;
}

