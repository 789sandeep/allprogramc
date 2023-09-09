#include<iostream>
using namespace std;
int finduniqueNumber(int a[],int s){
    // for(int i=0; i<s; i++){
    //     for(int j=i+1; j<s; j++){
    //         if(a[i]==a[j]){
    //             a[i]=a[j]=-1;
    //         }
    //     }
    // }
  int ans=0;
  for (int i = 0; i < s; i++)
  {
    ans=ans^a[i];
  }
  return ans;
}
int main(){
    int a[]={1,2,1,2,3,4,3};
    int s=sizeof(a)/sizeof(a[0]);
    cout<<finduniqueNumber(a,s);
    // for(int i=0; i<s; i++){
    //     if(a[i]>-1){
    //         cout<<a[i];
    //     }
    // }
}