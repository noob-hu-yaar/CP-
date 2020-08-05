

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
    //ll x,y,z;
    //cin>>x>>y>>z;
    vector<int> v;
    for(int i=0;i<3;i++)
    {
        ll q;
        cin>>q;
        v.pb(q);
    }

    sort(v.begin(),v.end());

    if(v[1] != v[2])
    cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[0]<<" "<<v[1]<<endl;
    }
}

return 0;
}
