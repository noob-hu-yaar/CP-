

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
    string a,b;
    
while(t--)
{
    cin>>b;
    int len_b = b.length();

    cout<<b[0]<<b[1];

    //if(len_b <= 5)
    //cout<<b[3];

    //else
   // {
        for(int i=3;i<len_b;i+=2)
        cout<<b[i];
    //}
    cout<<endl;
}
return 0;
}
