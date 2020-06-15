

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
        ll n,k,ori_sum=0,nakli_sum=0;
        cin>>n>>k;
        ll price[n+1];
        for(ll i=1;i<=n;i++)
        {
            cin>>price[i];
            ori_sum += price[i];
        }

        for(ll i=1;i<=n;i++)
        {
            if(price[i] > k)
            {
                nakli_sum += k;
            }
            else
            nakli_sum += price[i];
        }

        cout<<(ori_sum - nakli_sum)<<endl;

    }
    return 0;
}
