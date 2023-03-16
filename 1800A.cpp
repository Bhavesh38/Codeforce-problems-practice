#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin>> str;
        
        char prev='0';
        string temp="";
        for(int i=0;i<n;i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=(str[i]-'A')+'a';
            }
            if(str[i]!=prev){
                temp+=str[i];
                prev=str[i];
            }
        }
        if(temp.length() < 4){
            cout<<"NO"<<endl;
        }else if(temp.length()>4){
            cout<<"NO"<<endl; 
        }else if(temp[0]=='m' && temp[1]=='e' && temp[2]=='o' && temp[3]=='w'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}