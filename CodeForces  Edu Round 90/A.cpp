

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

int t;
int main()
{
    fast_io;

    cin>>t;
while(t--)
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll f = -1,s = -1;
    if(a < c)
    f = 1;

    if(a*b > c)
    s = b;

   /* else
    {
        f = -1;
        s = -1;
    }*/

    cout<<f<<" "<<s<<endl;
}

return 0;
}
