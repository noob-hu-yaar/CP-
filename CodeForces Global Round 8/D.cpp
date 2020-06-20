

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
    //bitset<20> bit = {};
   vector<ll> bit(20,0);

    ll x,ans;
    for(ll i=0;i<n;i++)
    {
        cin>>x;

        for(ll j=0;j<20;j++)
        {
            if(x & (1<<j) )
            bit[j]++;
        }
    }//bit set done

    ll result = 0;
    for(ll i=0;i<n;i++)
    {
        ans = 0;
        for(ll j=0;j<20;j++)
        {
            if(bit[j]) //bit is set
            {
                ans += (1<<j);
                bit[j]--;
            }
        }
        result += (ans*ans);
    }

    cout<<result<<endl;

    return 0;
}
