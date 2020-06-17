

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
    ll n,k;
    string s;
    cin>>n>>k;
    cin>>s;

    vector<ll> front(n,-1), back(n,-1);

    if(s[0] == '1')
    front[0] = 0;
    for(ll i=1;i<n;i++)
    {
        if(s[i] == '1')
        front[i] = i;

        else
        front[i] =  front[i-1];
    }


    if(s[n-1] == '1')
    back[n-1] = n-1;
    for(ll i=n-2;i>=0;i--)
    {
        if(s[i] == '1')
        back[i] = i;

        else
        back[i] = back[i+1];
    }


    ll c = 0;
    for(ll i=0;i<n;i++)
    {
        ll c1 = INT_MAX;
        if(front[i] != -1)
        c1 = (i-front[i]);

        ll c2 = INT_MAX;
        if(back[i] != -1)
        c2 = (back[i]-i);

        if( c1 > k && c2 > k)
        {
            c++;
            front[i] = i;
            //front[i+1] = max(front[i], front[i+1]);
        }
        // front[i+1] = max(i , front[i+1]);
       // if(front[i+1] < front[i])
        front[i+1] = max(front[i], front[i+1]);
    }

    cout<<c<<endl;
}
return 0;
}
