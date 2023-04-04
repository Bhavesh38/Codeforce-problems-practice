#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        x1=x1-1;
        y1=y1-1;
        x2=x2-1;
        y2=y2-1;
        long long int ansx1=-1,ansx2=-1,ansy1=-1,ansy2=-1;
        for(long long int i=0;i<n/2;i++){
            //top-horizontal
            int rowmin=i;
            int rowmax=i;
            int colmin=i;
            int colmax=n-1-i;
            if(rowmin==x1 && (colmin<=y1 && colmax>=y1) ){
                ansx1=rowmin;
            }
            if(rowmin==x2 && (colmin<=y1 && colmax>=y2) ){
                ansx2=rowmin;
            }

             //right-vertical
            rowmin=i;
            rowmax=n-1-i;
            colmin=n-1-i;
            colmax=n-1-i;

            if(colmin==y1 && (rowmin<=x1 && rowmax>=x1) ){
                ansy1=colmin;
            }
            if(colmin==y2 && (rowmin<=x2 && rowmax>=x2) ){
                ansy1=colmin;
            }
            // if(col==y2){
            //     ansy2=col;
            // }

            //bottom-horizontal
            // row=n-i-1;
            rowmin=n-1-i;
            rowmax=n-1-i;
            colmin=i;
            colmax=n-1-i;
            if(rowmin==x1 && (colmin<=y1 && colmax>=y1) ){
                ansx1=rowmin;
            }
            if(rowmin==x2 && (colmin<=y2 && colmax>=y2) ){
                ansx2=rowmin;
            }
            // if(row==x2){
            //     ansx2=row;
            // }

            //left-vertical
            rowmin=i-1;
            rowmax=n-1-i;
            colmin=i;
            colmax=i;
            if(y1==colmin && (rowmin<=x1 && rowmax>=x1) ){
                ansy1=colmin;
            }
            if(y2==colmin && (rowmin<=x2 && rowmax>=x2) ){
                ansy2=colmin;
            }
            // col=i;
            // if(col==y1){
            //     ansy1=col;
            // }
            // if(col==y2){
            //     ansy2=col;
            // }

           

            // for(j=i;j<n-i;j++){
            //     if(i==x1 && j==y1){
            //         ansx1=i; 
            //     }
            //     if(i==x2 && j==y2){
            //         ansx2=i;
                    
                    
            //     }
            // }

            // for(j=n-1-i;j<n-i;j++){
            //     if(j==x1 && n-1-i==y1){
            //         ansx1=i;
                   
            //     }
            //     if(j==x2 && n-1-i==y2){
            //         ansx2=i;
                  
                    
            //     }
            // }

            // for(j=n-1-i;j>=i;j--){
            //     if(n-1-i==x1 && j==y1){
            //         ansx1=i;
                   
            //     }
            //     if(n-1-i==x2 && j==y2){
            //         ansx2=i;
                    
            //     }
            // }

            // for(j=n-1-i;j>i;j--){
            //     if(j==x1 && n-i-1==y1){
            //         ansx1=i;
                   
            //     }
            //     if(j==x2 && n-i-1==y2){
            //         ansx2=i;
                
                    
            //     }
            // }
        }
        // cout<<ansx1<<ansx2<<endl;
        // cout<<min(abs(ansx1-ansx2),abs(ansy1-ansy2))<<endl;
        if(ansx1!=-1 && ansx2!=-1){
            cout<<abs(ansx1-ansx2)<<endl;
        }else if(ansy1!=-1 && ansy2!=-1){
            cout<<abs(ansy1-ansy2)<<endl;
        }
    }
    return 0;
}