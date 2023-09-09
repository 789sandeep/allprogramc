#include<iostream>
using namespace std;
int duplicateNumber(int a[],int s){
    // for(int i=0; i<s; i++){
    //     for(int j=i+1; j<s; j++){
    //         if(a[i]==a[j]){
    //             cout<<a[i];
    //         }
    //     }
    // }
    int ans=0;
    for(int i=0; i<s; i++){
       ans = ans^a[i];
    }
      for(int i=0; i<s; i++){
       ans = ans^i;
    }
    return ans;
}
int main(){
    int a[]={1,2,3,4,5,6,2};
    int s=sizeof(a)/sizeof(a[0]);
    cout<<duplicateNumber(a,s);
} 
