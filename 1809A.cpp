#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        if(str[0]==str[3]){
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        for(int i=1;i<4;i++){
            if(str[i]!=str[i-1]){
                cnt++;
            }
        }
        if(cnt+1==2 && (str[0]!=str[1] || str[2]!=str[3])){
            cout<<6<<endl;
        }
        else{
            cout<<4<<endl;
        }
    }
    return 0;
}