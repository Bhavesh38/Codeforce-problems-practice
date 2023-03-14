#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<pair<int,int>> v;
    for(int i=0;i<3;i++){
        int num1,num2;
        cin>>num1>>num2;
        v.push_back({num1,num2});
    }
    unordered_map<int,bool> m;
    m[n]=true;
    for(int i=0;i<3;i++){
        int num1=v[i].first;
        int num2=v[i].second;

        if(m[num1]==true){
            m[num1]=false;
            m[num2]=true;
        }else if(m[num2]==true){
            m[num2]=false;
            m[num1]=true;
        }
    }

    for(int i=1;i<=3;i++){
        if(m[i]==true){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}