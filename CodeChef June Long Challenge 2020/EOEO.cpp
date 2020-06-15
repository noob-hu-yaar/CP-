

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

ll odd_bana(ll n) 
{ 
	if (n%2 != 0) 
		return n; 

	while (n%2 == 0) 
	{ 
		n /= 2; 
		//loo 
	} 

	return n; 
} 

ll fun(ll n,ll count)
{
    //n = odd
    if(n%2 != 0)
    {
        for(ll i=2;i<n;i+=2)
        count++;
    }

    return count;
}

int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //cout<<fun(n,0)<<endl;
        if(n%2 != 0)
        cout<<fun(n,0)<<endl;
        else
        cout<<fun(odd_bana(n),0)<<endl;

    }
    return 0;
}
