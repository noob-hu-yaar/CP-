

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
	int n,x,five = 0,ten = 0, ans = 0;
	cin>>n;
	for( int i = 0; i < n; i++ )
	{
		cin>>x;

		if( x == 5 )
		 five++;		

		else if( x == 10 )
		{
			if( five == 0 )
			{		
				ans = 1;
			}
			else
			 {
				ten++;				
				five--;				
			}
		}

		else if( x == 15 )
		{
			
			if( ten != 0 || five > 1 )
			{
				if( ten > 0 )
				{
					ten--;			
				}
				else
				{
					five -= 2;		
				}
			}

			else ans = 1;		
		
		}
	}

	if( ans )
		cout<<"NO"<<endl;
	else 
		cout<<"YES"<<endl;
	
}


int main()
{
	fast_io;
	
	int t;
	cin>>t;
	while( t-- )	
		fun();

	return 0;
}