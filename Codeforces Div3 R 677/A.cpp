

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
    ll a,b;
    ll ans = 0;
    cin>>a>>b;

    if(a == b)
    {
        cout<<"0"<<endl;
    }

    else 
    {
        ll diff = abs(a-b);

        ll mod = diff%10;
        diff = diff - mod;

        ans = diff/10;

        if(mod > 0)
        cout<<ans + 1<<endl;
        else
        cout<<ans<<endl;
    }
}

return 0;
}
