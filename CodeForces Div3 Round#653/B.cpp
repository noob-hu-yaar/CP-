

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
    
    ll c = 0;
    
    while(n != 1)
    {
        if(n%3 != 0)
        {
            c = -1;
            break;
        }
        else if(n%2==0 && n%3==0)
        {
            n = n/6;
            c++;
        }
        else if(n%3==0 && n%2!=0)
        {
            n = n*2;
            c++;
        }
    }
    cout<<c<<endl;
}

return 0;
}
