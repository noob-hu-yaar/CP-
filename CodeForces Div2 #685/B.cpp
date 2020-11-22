

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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int x,y;

        while(q--)
        {
            cin>>x>>y;
            x--, y--;

            bool flag = 0;

            for(int i=0;i<=(x-1);i++)
            {
                if(s[i] == s[x])
                {
                    flag = 1;
                    break;
                }
            }

            for(int i=y+1;i<n;i++)
            {
                if(s[i] == s[y])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
