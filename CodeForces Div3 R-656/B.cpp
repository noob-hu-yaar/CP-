

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

ll t;
int main()
{
    fast_io;

    cin>>t;
while(t--)
{
    int n;
    cin>>n;

    vector<int> giv(2*n), ans;
    int freq[n] = {};

    for(int &i : giv)
    cin>>i;

    for(int i=0;i<2*n;i++)
    {
        /*if(freq[giv[i]] == 0)
        {
            ans.pb(giv[i]);
            freq[giv[i]]++;
        }*/
        freq[giv[i]]++;
        if(freq[giv[i]] & 1)
        ans.pb(giv[i]);
    }

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}

return 0;
}
