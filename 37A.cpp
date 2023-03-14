#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    unordered_map<int,int> m;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        maxi=max(m[arr[i]],maxi);
    }
    cout<<maxi<<" "<<s.size()<<endl;
    return 0;
}