

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

 //vector<ll> a(2*100005);
ll n,k;

bool check(ll m,bool flag, vector<ll> &a)
{
    ll cnt = 0;
    for(auto x : a)
    {
        if(x<=m || cnt%2 == !flag)
        cnt++;
    }
    return (cnt >= k);
}

int main()
{
    fast_io;

    cin>>n>>k;
    vector<ll> a(n);
    //for(ll i=0;i<n;i++)
    for(ll &x : a)
    cin>>x;

    ll low = 1,high = 1e9+7;
    ll m;

    while(low < high)
    {
        m = (low + high)/2;
        if(check(m,0,a) || check(m,1,a))
        high = m;
        else
        low = m + 1;
    }
    cout<<low<<endl;

    return 0 ;
}
