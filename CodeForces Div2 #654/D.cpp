
    
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
            ll c=0,n,k;
            cin>>n>>k;
            ll ans[n][n];
            memset(ans,0,sizeof(ans));
    
            if(k%n == 0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
    
            for(ll i=0;i<n && c<k;i++)
            {
                ll x=0,y=i;
                for(ll j=0;j<n && c<k;j++,c++)
                {
                    ans[x][y]=1;
                    x=(x+1)%n;
                    y=(y+1)%n;
                }
            }
 
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            cout<<ans[i][j];
            cout<<endl;
        }
        
    }
    return 0;
}