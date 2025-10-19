#include <iostream>
using namespace std;
int pattern14(int n){
    for(int i=0; i<n; i++){
        for(char alpha ='A'; alpha <='A'+i; alpha++){
            cout<<alpha<<" ";}
                cout<<endl;}}
int main(){
    int n=5; 
    pattern14(n);
}