#include <bits/stdc++.h>
using namespace std;
int pattern19(int n){
for(int i=0; i<=n; i++){
//upper part
        for(int j=0; j<=n-i; j++){
            cout<<"*";}

        for(int j=0; j<2*i; j++){
            cout<<"-";}

        for(int j=0; j<=n-i; j++){
            cout<<"*";}  

        cout<<endl;
    }


for(int i=0; i<=n; i++){
    for(int j=0; j<=i; j++){
        cout<<"*";}
        
    for(int j=0; j<n-i; j++){
        cout<<"-";} 

    for(int j=0; j<n-i; j++){
        cout<<"-";}

    for(int j=0; j<=i; j++){
        cout<<"*";}

    cout<<endl;
}
}

int main(){
    int n=5;
    pattern19(n);
}