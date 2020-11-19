

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

        ll sizee, koita;
        cin>>sizee>>koita;
        vector<ll> a;
        ll oh = sizee*koita;

        for(ll i=0;i<oh;i++)
        {
            ll x;
            cin>>x;
            a.pb(x);
        }

        ll sum = 0, pos = sizee/2;
        ll cnt = 0, j = a.size()-1;

        while(cnt < koita)
        {
            j -= pos;
            sum += (a[j]);
            cnt++;
            j--;
        }

        cout<<sum<<endl;
    }
}
