#include <iostream>
using namespace std;
void pattern16(int n){
    for(int i=0; i<=n; i++){
        char j='A'+i;
        for(int k=0; k<=i; k++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern16(n);

}
