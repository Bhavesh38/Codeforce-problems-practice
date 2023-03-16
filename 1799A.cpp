#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int* arr=new int[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        deque<int> dq;
        unordered_map<int,int> mp;
        for(int i=1;i<=n;i++){
            dq.push_back(i);
            mp[i]=-1;
        }

        for(int i=0;i<m;i++){
            int val=-1;
            for(int j=0;j<n;j++){
                if(dq.front()!=arr[i]){
                    int temp=dq.front();
                    dq.pop_front();
                    dq.push_back(temp);
                }else{
                    val=dq.front();
                    dq.pop_front();
                    
                }
            }
            if(val!=-1){
                dq.push_front(val);
            }else{
                mp[dq.back()]=i+1;
                dq.pop_back();
                dq.push_front(arr[i]);
            }

        }

        for(int i=1;i<=n;i++){
            cout<<mp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}