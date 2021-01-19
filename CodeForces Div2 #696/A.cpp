

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
        int n;
        cin>>n;
        string b;
        cin>>b;
        string a = "";

        a += '1';
        int oo = a[0]+b[0]-96;

        for(int i=1;i<n;i++)
        {
            if( (b[i]+'1'-96) == oo)
            a += '0';

            else if( (b[i]+'1'-96) != oo)
            a += '1';

            oo = a[i]+b[i]-96;
        }

        cout<<a<<endl;
    }

    return 0;
}
