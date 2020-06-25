

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
    string s;
    cin>>s;
    int one = 0,zero = 0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0')
        zero++;
        else
        one++;
    }

    if( min(one,zero) & 1)//odd
    cout<<"DA"<<endl;
    else
    cout<<"NET"<<endl;
}

return 0;
}
