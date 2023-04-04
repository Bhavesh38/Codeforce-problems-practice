#include<bits/stdc++.h>
using namespace std;
int solve(string str,int n,int index,vector<int> &dp,int last){
    if(index>=n){
        for(int i=1;i<n;i++){
            if(str[i]==str[i-1]){
                return 0;
            }
        }
        return 1;
    }

    // if(dp[index]!=-1 || dp[index]>=1){
    //     return dp[index];
    // }
    if(str[index]=='0' || str[index]=='1'){
        if(str[index]=='0'){
            return solve(str,n,index+1,dp,0);
        }else{
            return solve(str,n,index+1,dp,1);
        }
        
    }

    char temp=str[index];
    string str1=str;
    string str2=str;
    for(int i=0;i<n;i++){
        if(str[i]==temp){
            str1[i]='0';
            str2[i]='1';
        }
    }
    if(last==0){
        return solve(str2,n,index+1,dp,1);
    }else if(last==1){
        return solve(str1,n,index+1,dp,0);
    }else{
        return solve(str1,n,index+1,dp,0) || solve(str2,n,index+1,dp,1);
    }

    // if((solve(str1,n,index+1,dp,last)>=1 || solve(str2,n,index+1,dp,last)>=1)){
    //     dp[index]=1;
    // }else{
    //     dp[index]=0;
    // }
    // return dp[index];

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int> dp(n+1,-1);
        if(solve(str,n,0,dp,-1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}