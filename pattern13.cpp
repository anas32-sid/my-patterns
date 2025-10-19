#include <iostream>
using namespace std;
int pattern11(int n){
int num=0;
for(int i=0; i<=n; i++){
  for(int j=0; j<=i; j++){
    num=num+1;
    cout<<num;}
cout<<endl;
}
}
int main(){
  int n=3;
  pattern11(n);
}