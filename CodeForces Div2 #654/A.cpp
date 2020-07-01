

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
    ll n;
    cin>>n;

    if(n & 1)
    cout<<(n/2)+1<<endl;

    else
    cout<<n/2<<endl;
}

return 0;
}
