

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

int t,n;

int main()
{
    fast_io;

    cin>>t;
while(t--)
{
    cin>>n;
    vector<int> v(n);
    int od = 0,ev = 0;

    for(int& i : v)
    cin>>i;

    for(int i=0;i<n;i++)
    {
        if( i%2 == 0 && v[i]%2 != 0)
        od++;

        else if( i%2 != 0 && v[i]%2 == 0)
        ev++;
    }
    if(od == ev)
    cout<<od<<endl;
    else
    cout<<"-1"<<endl;

}
return 0;
}
