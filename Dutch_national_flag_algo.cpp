#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define MAX 1000000
#define ll long long int
#define ull unsigned long long int
#define pq priority_queue <ll,vector<ll>,greater<ll>>
#define pqpii priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
#define pie 3.1415926536
#define pb push_back
#define M 998244353
#define ff first
#define ss second
#define pi pair<int,int>
#define pii pair< int, pair<int,int> >
#define all(v) (v).begin(),(v).end()
#define mem(a,b) memset(a,b,sizeof(a))


													/* Problem Statement */
/* Given a array arr[] and a pivot p , you have to partition the array such a away that the elements less than or equal to p lies in left 
and the elements greater lies in right part . 
			Time complexity - O(n) , Space complexity - O(1) 
*/

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)cin>>ar[i];
		int p;cin>>p;
		int i=0,j=0;
		while(i<n)
		{
			if(ar[i]>p)
			{
				i++;
			}
			else 
			{
				swap(ar[i],ar[j]);
				i++,j++;
			}
		}
		for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
		cout<<endl;
	}
}
