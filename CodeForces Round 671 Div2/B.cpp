

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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll sum(ll n)
{
    return n*(n+1)/2;
}

int main()
{
    fast_io;

ll t;
cin>>t;

while(t--)
{
    ll x;
    cin>>x;

    ll ans = 1, i = 1;
    while( sum(ans) <= x )
    {
        x -= sum(ans);
        i++;
        ans = binpow(2,i)-1;
        
    }

    cout<<i-1<<endl;
}
return 0;
}
