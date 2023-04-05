#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        int b[n-1];
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }
        vector<int> arr(n,INT_MAX);
        for(int i=n-2;i>=0;i--){
            arr[i+1]=min(arr[i+1],b[i]);
            // cout<<arr[i+1]<<" ";
            arr[i]=min(arr[i],b[i]);
        }
        // cout<<arr[0]<<endl;

        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}