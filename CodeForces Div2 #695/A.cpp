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
 
        if(n == 1)
        cout<<"9"<<endl;
        else if(n == 2)
        cout<<"98"<<endl;
        else if(n == 3)
        cout<<"989"<<endl;
 
        else if(n > 3)
        {
            cout<<"989";
            for(int i=0;i<(n-3);i++)
            cout<<i %10;
            cout<<endl;
        }
    }
 
    return 0;
}