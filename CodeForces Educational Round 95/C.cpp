

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

vector<int>a(200005);
    int dp[200005][2];
    int n;
 
int fun(int i, bool whose)
{
    //Base case
    if(i>=n)
         return dp[i][whose]=0;

    //Look up
        if(dp[i][whose]!=-1)
            return dp[i][whose];

    //Rec case
        if(whose)
        {
            int mini=INT_MAX;
            
            if(i<n && a[i]==1)
                mini=min(mini,1+fun(i+1,!whose));
            
            if(i<n && a[i]==0)
                mini=min(mini,fun(i+1,!whose));
                           
            if(i+1<n && a[i]==0 && a[i+1]==0)
                mini=min(mini,fun(i+2,!whose));

            if(i+1<n && a[i]==0 && a[i+1]==1)
                mini=min(mini,fun(i+2,!whose)+1);
            
            if(i+1<n && a[i]==1 && a[i+1]==0)
                mini=min(mini,fun(i+2,!whose)+1);
            
            if(i+1<n && a[i]==1 && a[i+1]==1)
                mini=min(mini,fun(i+2,!whose)+2);
            
            return dp[i][whose]=mini;
        }
        
        else
        {
            int mini=INT_MAX;
            mini=min(fun(i+1,!whose), fun(i+2,!whose));
           
            return dp[i][whose]=mini;
        }
 }
 
 int main()
 {
     ll t;
     cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        memset(dp,-1,sizeof(dp));
        
        cout<<fun(0,1)<<endl;
    }
    return 0;
 }
