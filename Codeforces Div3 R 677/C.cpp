

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

    int n,x,y;
    cin>>n>>x>>y;
    int d,Y;

    for(int i=n-1;i>0;i--)
    {
        if( (y-x)%i == 0 )
        {
            d = (y-x)/i;
            break;
        }
    }

    vector<int> ans;
    Y = y;

    while(n>0 && y>0)
    {
        ans.pb(y);
        y = y-d;
        n--;
    }

    if(n > 0)
    {
        for(int i=n;i>0;i--)
        {
            Y += d;
            ans.pb(Y);
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

return 0;
}
