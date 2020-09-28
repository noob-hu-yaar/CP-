

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
       int n,x;
    cin>>n>>x;

    if(n==1 || n==2)
        cout<<"1"<<endl;

    else if(n > 2)
        {
            n = n-2;

            if(n%x == 0)
            cout<<(n/x)+1<<endl;

            else
            cout<<(n/x)+2<<endl;
        }
}

return 0;
}
