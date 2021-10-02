#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
#define ll long long int
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
        int n;cin>>n;
        int ar[n];
        for(ll i=0;i<n;i++)cin>>ar[i];
        unordered_map <ll,ll> mp;
        ll sum=0,ans=0;
        for(ll i=0;i<n;i++){
            sum+=ar[i];
            if(sum==0){
                ans++;
            }
            if(mp.find(sum)!=mp.end()){
                ans+=mp[sum];
            }
            mp[sum]++;
        }

        cout<<ans<<endl;
        mp.clear();
	}
	return 0;
}
