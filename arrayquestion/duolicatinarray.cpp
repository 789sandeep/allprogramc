#include<iostream>
using namespace std; 
int duplicatarray(int a[],int s){
    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
            }
        }
    }
}
int main(){
    int a[]={4,3,2,7,8,2,3,1};
    int s=sizeof(a)/sizeof(a[0]);
    duplicatarray(a,s);
}