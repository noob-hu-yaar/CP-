

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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f = 0,c = 0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '(')
        f++;
        else if(s[i] == ')')
        f--;

        if(f < 0)
        {
            f = 0,c++;
        }
    }
    cout<<c<<endl;
}

return 0;
}

