

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
        ll n;
        cin>>n;

        if(n==1 || n==2 || n==3)
        cout<<n-1<<endl;

        else
        {
            if(n&1)
            cout<<3<<endl;

            else
            cout<<2<<endl;
        }
        
    }

    return 0;
}
