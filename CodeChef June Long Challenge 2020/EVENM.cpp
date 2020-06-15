

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
    
  vector< vector<int>> a(n, vector<int>(n));

    int count = 1;

    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j] = count;
                count++;
            }
        }

        else if(i%2 != 0)
        {
            for(int j=n-1;j>=0;j--)
            {
                a[i][j] = count;
                count++;
            }
        }
    }

    //print
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

return 0;
}
