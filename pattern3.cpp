#include <iostream>
using namespace std;
int pattern3(int n){
for(int i=0; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<j;
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    pattern3(n);
}