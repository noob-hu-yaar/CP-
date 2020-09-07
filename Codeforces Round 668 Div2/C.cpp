

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

void fun()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    for(int i=0;i<k;i++)
    {
        if(s[i] == '?')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(s[j] != '?')
                {
                    s[i] = s[j];
                    break;
                }
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        if(s[i] != '?')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(s[j] == '?')
                {
                    s[j] = s[i];
                }
                else if(s[j] != s[i])
                {
                    cout<<"NO";
                    return ;
                }
            }
        }
    }

    int ek = 0, shunno = 0;

    for(int i=0;i<k;i++)
    {
        if(s[i] == '1')
            ek++;

        else if(s[i] == '0')
            shunno++;
    }

    if(ek<=(k/2) && shunno<=(k/2))
        cout<<"YES";
    else
        cout<<"NO";
}

int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        fun();
        cout<<endl;
    }

return 0;
}
