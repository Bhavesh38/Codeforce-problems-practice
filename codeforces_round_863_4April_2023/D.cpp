#include<bits/stdc++.h>
using namespace std;
long long fib[45];
bool solve(long long n,long long x,long long y){
    if(n==0){
        return true;
    }

    long long height=fib[n];
    long long width=fib[n+1];
    int y1=x;

    if(y>height || width - height >= y){
        if(width-height >= y){
            x=y;
        }else{
            x=y=height;
        }

        return solve(n-1,x,y1);
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    fib[0]=fib[1]=1;
    for(int i=2;i<45;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        cout<< (solve(n,x,y) ? "YES" : "NO")<<endl;
    }
    return 0;
}