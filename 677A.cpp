#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int* friends=new int[n];
    for(int i=0;i<n;i++){
        cin>>friends[i];
    }

    int width=0;
    for(int i=0;i<n;i++){
        if(friends[i]<=h){
            width+=1;
        }else{
            width+=2;
        }
    }
    cout<<width<<endl;
    return 0;
}