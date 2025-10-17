#include <iostream>
using namespace std;
int pattern2(int n){
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    pattern2(n);
}