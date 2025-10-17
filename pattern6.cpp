#include <iostream>
using namespace std;
int pattern6(int n){
for(int i=n; i>=1; i--){
    for(int j=0; j<i; j++){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    pattern6(n);
}