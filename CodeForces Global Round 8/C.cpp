

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

    int n;
    cin>>n;
    vector< pair<int,int> > p;
    
    p.pb( mp(0,0) );
    p.pb( mp(0,1) );

    int j = 0;
    for(int i=1;i<=n;i++)
    {
        p.pb( mp(i,j) );
        p.pb( mp(i,j+1) );
        p.pb( mp(i,j+2) );
        
        j++;
    }

    p.pb( mp(n+1,j) );
    p.pb( mp(n+1,j+1) );

    cout<<p.size()<<endl;

    for(int i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

    return 0;
}
