#include <iostream>
using namespace std;
void pattern10(int n){
for(int i=0; i<=2*n-1; i++){ //row=i<=2*n-1;
    int stars=i;
        if(i>n) stars=2*n-i;
    for(int j=0; j<stars; j++){
        cout<<"*";}
    cout<<endl;}}
int main(){
    int n=5;
    pattern10(n);
}