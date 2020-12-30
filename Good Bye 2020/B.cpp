

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
        int n,x;
        cin>>n;
        set<int> s;

        for(int i=0;i<n;i++)
        {
            cin>>x;

            if(s.count(x) > 0)
            x++;

            s.insert(x);
        }

        cout<<s.size()<<endl;
    }

    return 0;
}
