

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

ll k;
//vector<ll> a(10,1);

int main()
{
    fast_io;

    cin>>k;
    ll purana, prod = 1;
    ll pos = 0;
    vector<ll> a(10,1);

    while(prod < k)
    {
       // prod = prod / a[pos % 10];
       purana = a[pos % 10];
        a[pos % 10]++;
        //pos++;
        prod = prod / purana;
        prod = prod * a[pos % 10];
        pos++;
        
    }

    string s = "codeforces";
    for(ll i=0;i<10;i++)
    {
        for(ll j=0;j<a[i];j++)
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
