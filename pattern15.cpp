#include <iostream>
using namespace std;
int pattern15(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+(n-i-1); j++){
            cout<<j;}
        cout<<endl;}
}
int main(){
    int n=5;
    pattern15(n);
}