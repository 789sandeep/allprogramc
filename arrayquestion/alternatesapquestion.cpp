#include<iostream>
using namespace std;
void arrayalternate(int a[], int s){
for(int i=0; i<s; i=i+2){
        if(i+1<s){
            swap(a[i],a[i+1]);  
        }
    }
}
int main(){
    int a[]={1,2,7,8,5,6};
    int s=sizeof(a)/sizeof(a[0]);
    arrayalternate(a,s);
    
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
}