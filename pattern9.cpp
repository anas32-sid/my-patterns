#include <iostream>
using namespace std;
int pyramind(int n){
        for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";}
        for(int j=0; j<2*i+1; j++){
            cout<<"*";}
        for(int j=0; j<n-i-1; j++){
            cout<<" ";}
            cout<<endl;}}
int inverted_pyramid(int m){
        for(int i=0; i<m; i++){
        for(int j=0; j<i; j++){
            cout<<" ";}
        for(int j=0; j<2*m-(2*i+1); j++){
            cout<<"*";}
        for(int j=0; j<i; j++){
            cout<<" ";}
        cout<<endl;}}
int main(){
        int n=5;
        int m=5;
        pyramind(n);
        inverted_pyramid(m);}