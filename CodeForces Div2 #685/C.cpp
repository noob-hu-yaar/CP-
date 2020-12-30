

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

        int n,k;
        cin>>n>>k;

        string a,b;
        cin>>a>>b;

        vector<int> af(26,0), bf(26,0);

        for(auto i : a)
        af[i-'a']++;
        for(auto i : b)
        bf[i-'a']++;

        bool flag = 1;

        for(int i=0;i<25;i++)
        {
            if(af[i] < bf[i])
            {
                flag = 0;
                break;
            }

            int d = af[i] - bf[i];
            if(d%k != 0)
            {
                flag = 0;
                break;
            }

            af[i+1] += d;
        }

        if(!flag)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}
