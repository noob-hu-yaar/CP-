

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

const ll n = 100004;
const ll N = 100000;
bitset<n> b;
//vector<ll> primes;


void sieve()
{
    //Setting all bits to 1
    b.set();

    b[0] = b[1] = 0; //they are not prime
    for(ll i=2;i<N;i++)
    {
        if(b[i])
        {
           // primes.pb(i);
            for(ll j=i*i;j<N;j+=i)
            {
                b[j] = 0;
            }
        }
    }
}

int main()
{
    fast_io;

    ll t;
    cin>>t;
    sieve();

    while(t--)
    {
        ll d;
        cin>>d;
        

        ll oo = 1+d;
        while(b[oo] != 1)
        {
            oo++;
        }   

        ll op1 = oo;
        oo += d;

        while(b[oo] != 1)
        {
            oo++;
        } 

        ll op2 = oo;
        ll ans = op2 * op1;

        cout<<ans<<endl;
    }

    return 0;
}
