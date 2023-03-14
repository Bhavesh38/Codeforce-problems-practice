#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* exitArray=new int[n];
    int* enterArray=new int[n];

    for(int i=0;i<n;i++){
        cin>>exitArray[i]>>enterArray[i];
    }

    int ans=INT_MIN;
    int passenger=0;
    for(int i=0;i<n;i++){
        passenger=passenger-exitArray[i]+enterArray[i];
        ans=max(ans,passenger);
    }
    cout<<ans<<endl;
    return 0;
}