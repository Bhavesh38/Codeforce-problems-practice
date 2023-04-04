#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        string str;
        cin>>str;
        string ans="";
        int cnt=1;
        for(int i=0;i<n;i++){
            if((str[i]-'0')<d && cnt==1){
                ans+=(d+'0');
                cnt--;
            }
            ans+=str[i];
            
        }
        if(ans.length()!=n+1){
            ans+=(d+'0');
        }
        cout<<ans<<endl;
    }
    return 0;
}