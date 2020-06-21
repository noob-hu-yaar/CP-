

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

ll n;

void fun()
{
    cin>>n;

    ll a[(2*n) + 1];
    vector<ll> odd,even;
    for(ll i=1;i<=2*n;i++)
    {
        cin>>a[i];

        if(a[i]%2 != 0)//odd
        odd.pb(i);
        else
        even.pb(i);
    }

    ll j = 0,k = 0;
    ll o_l = odd.size();
    ll e_l = even.size();

    for(ll i=1;i<=(n-1);i++)
    {
        if( (j+1) < (o_l) )
        {
            cout<<odd[j]<<" "<<odd[j+1]<<endl;
            j += 2;
        }
        else if( (k+1) < (e_l) )
        {
            cout<<even[k]<<" "<<even[k+1]<<endl;
            k += 2;
        }
    }
}

int main()
{
    fast_io;

    ll t;
    cin>>t;

while(t--)
fun();

    return 0;
}