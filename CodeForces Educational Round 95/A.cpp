

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
    ll x,y,k;
    cin>>x>>y>>k;
    ll trade = 0;

    ll d = 1;

    /*while(d < (k+(y*k)) )
    {
        d--;
        d += x;
        trade++;
    }*/

    ll var1 = k + (y*k) - 1;

    ll reqd;

    if(var1 % (x-1) == 0)
    reqd = var1/(x-1);

    else
    reqd = ( var1/(x-1)) + 1;

    cout<<reqd+k<<endl;
}

return 0;
}
