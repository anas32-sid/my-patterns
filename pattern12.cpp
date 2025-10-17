#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        //num 1
        for(int j=1; j<=i; j++){
            cout<<j;}
        //stars
        for(int j=0; j<2*n-(2*i); j++){
            cout<<"*";}
        //reverse numbers
        for(int j=i; j>=1; j--){
            cout<<j;}
        cout<<endl;}
}