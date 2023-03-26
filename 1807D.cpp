#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int* arr = new int[n];
        int sum=0;
        vector<vector<int>> v(q,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<q;i++){
            for(int j=0;j<3;j++){
                cin>>v[i][j];
            }
        }
        cout<<endl;
    }

    return 0;
}