#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    string str;
    cin>>str;
    int count_A=0;
    int count_D=0;
    for(auto it:str){
        if(it=='A'){
            count_A++;
        }else{
            count_D++;
        }
    }
    if(count_A>count_D){
        cout<<"Anton"<<endl;
    }else if(count_D>count_A){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}