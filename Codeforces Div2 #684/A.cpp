 

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

    int t;
    cin>>t;

    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;

        string s;
        cin>>s;

        int zero = 0,one = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            zero++;
            else 
            one++;
        }

        int ans,ans_new;
        ans = (c0*zero) + (c1*one);

        //zero to one
        for(int i=1;i<=zero;i++)
        {
            ans_new = (c1*one) + (h*i) + (i*c1) + (c0*(zero-i));
            ans = min(ans, ans_new);
        }

        //one to zero
        for(int i=1;i<=one;i++)
        {
            ans_new = (c0*zero) + (h*i) + (i*c0) + (c1*(one-i));
            ans = min(ans, ans_new);
        }

        cout<<ans<<endl;
    }

    return 0;
}