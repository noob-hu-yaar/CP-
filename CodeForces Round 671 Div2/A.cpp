

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
    int n;
    cin>>n;

    /*vector<int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];*/
    string v;
    cin>>v;

    
    if(n&1)
    {
        for(int i=0;i<n;i+=2)
        {
            if((int)(v[i]-'0')%2!=0)
            {
                cout<<"1"<<endl;
                return ;
            }
        }
        cout<<"2"<<endl;
    }

    else
    {
        for(int i=1;i<n;i+=2)
        {
            if((int)(v[i]-'0')%2==0)
            {
                cout<<"2"<<endl;
                return ;
            }
        }
        cout<<"1"<<endl;
    }
}

int main()
{
    fast_io;

    int t;
    cin>>t;

while(t--)
    fun();

return 0;
}
