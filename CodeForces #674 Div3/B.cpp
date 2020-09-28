

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
    ll n,m;
    cin>>n>>m;

    bool flag = 0;
    if((m*m)%4 != 0)
    {
        for(ll i=0;i<n;i++)
        {
            int x,y,w,z;
            cin>>x>>y;
            cin>>w>>z;

            /*if(w == y)
            {
                flag = 1;
                //;
            }*/
        }
        cout<<"NO";
        //break;
    }

    else
    {
        for(ll i=0;i<n;i++)
        {
            int x,y,w,z;
            cin>>x>>y;
            cin>>w>>z;

            if(w == y)
            {
                flag = 1;
                //;
            }
        }

        if(flag == 1)
        cout<<"YES";
        else
        cout<<"NO";
    }
    cout<<endl;
}

return 0;
}
