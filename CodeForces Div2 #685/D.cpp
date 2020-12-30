

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
        ll d,k;
        cin>>d>>k;
        ll x,y;
        x = y = 0;

        bool ok = 1;


        while(1)
        {
            if(x<=y && (x+k)*(x+k)+y*y<=d*d)
            {
                x += k;
                ok = !ok;
            }

            else if(y<x && (y+k)*(y+k)+x*x<=d*d)
            {
                y += k;
                ok = !ok;
            }

            else 
            break;
        }

        if(!ok)
        cout<<"Ashish"<<endl;
        else
        cout<<"Utkarsh"<<endl;
  }

  return 0;
}
