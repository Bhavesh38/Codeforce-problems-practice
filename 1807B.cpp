#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int x = 0;
        int y = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]%2 == 0) x+= a[i];
            else y+= a[i];
        }
        
        if (x>y) cout << "YES" << endl;
        else cout << "NO" << endl;
        // int n;
        // cin>> n;
        // int* arr=new int[n];
        // for(int  i=0;i<n;i++){
        //     cin>>arr[i];
        // }
        // vector<int> even;
        // vector<int> odd;
        // for(int i=0;i<n;i++){
        //     if(arr[i]%2==0){
        //         even.push_back(arr[i]);
        //     }
        //     else{
        //         odd.push_back(arr[i]);
        //     }
        // }
        // sort(even.begin(),even.end());
        // reverse(even.begin(),even.end());
        // sort(odd.begin(),odd.end());
        // int i=0,j=0;
        // int cnt=0;
        // int evenSize=even.size();
        // int oddSize=odd.size();
        // while(i<evenSize && j<oddSize){
        //     if(cnt%2==0){
        //         arr[cnt]=even[i++];
        //     }else{
        //         arr[cnt]=odd[j++];
        //     }
        //     cnt++;
        // }

        // while(i<even.size()){
        //     arr[cnt++]=even[i++];
        // }

        // while(j<odd.size()){
        //     arr[cnt++]=odd[j++];
        // }

        // int sum1=0;
        // int sum2=0;
        // for(i=0;i<n;i++){
        //     if(arr[i]%2==0){
        //         sum1+=arr[i];
        //     }else{
        //         sum2+=arr[i];
        //     }
        //     if(sum1<=sum2){
        //         cout<<"NO"<<endl;
        //         return 0;
        //     }
        // }
        // cout<<"YES"<<endl;
    }
    return 0;
}