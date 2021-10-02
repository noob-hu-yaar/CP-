#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
typedef long long int ll;

int main(){
fast;
int t;cin>>t;
cin.ignore();
while(t--){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.length()<s2.length()){
        cout<<-1<<endl;
    }else{
        ll n = s2.length(),c=0,start=0,start_index=-1,mini=INT_MAX;
        map <char,ll> mp2;
        for(ll i=0;i<s2.length();i++)mp2[s2[i]]++;
        int ct[256]={0};
        for(ll i=0;i<s1.length();i++){
            ct[s1[i]]++;
            if(s2.find(s1[i])!= string::npos && ct[s1[i]]<=mp2[s1[i]]){
                c++;
            }
            if(c==n){
                while(ct[s1[start]]>mp2[s1[start]] || mp2[s1[start]]==0){
                    if(ct[s1[start]]>mp2[s1[start]])
                        ct[s1[start]]--;
                       start++;
                }
                    int len = i-start+1;
                    if(len<mini){
                        mini=len;
                        start_index=start;
                    }
                }
            }
         if(start_index==-1){
            cout<<-1<<endl;
        }else
        cout<<s1.substr(start_index,mini)<<endl;
        mp2.clear();
        }
    }
    }

