#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
typedef long long int ll;

int main(){
fast;
int t;cin>>t;
while(t--){
    string s;cin>>s;
    set <char> st;
    for(ll i=0;i<s.length();i++)st.insert(s[i]);
    int distinct = st.size();
    int ct[256]={0};
    int mini=INT_MAX,cc=0,start=0,start_index=-1;
    for(ll i=0;i<s.length();i++){
        ct[s[i]]++;
        //checks the distinct element count
        if(ct[s[i]]==1){
            cc++;
        }
        //when all the distinct elements are present in the current window
        if(cc==distinct){
            //to shift the window from the start
            while(ct[s[start]]>1){
                if(ct[s[start]]>1)
                    ct[s[start]]--;
                start++;
            }
            int len = i-start+1;
        //computing the value of mini window length
            if(len<mini){
                mini = len ;
                start_index = start;
            }
        }
    }

    cout<<s.substr(start_index,mini)<<endl;
}
}
