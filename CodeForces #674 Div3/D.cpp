

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

     ll n;
     cin>> n;
     ll ans = 0, sum = 0;
     set<ll> s;
     s.insert(0);

     for(ll i=0;i<n;i++)
     {
         ll x;
         cin>>x;
         sum += x;

         if(s.count(sum))
         {
             ans++;
             s.clear();
             s.insert(0);
             sum = x;
         }

         s.insert(sum);
     }

     cout<<ans<<endl;

    return 0;
}
