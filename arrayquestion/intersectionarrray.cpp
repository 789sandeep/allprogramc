#include<iostream>
using namespace std;
int intersection_array(int a[], int a1[], int s, int s1){
   int i=0;
   int j=0;
   while (i<s and j<s1)
   {
    if(a[i]==a1[j]){
        cout<<a1[j]<<" ";
        i++;
        j++;
    }
    if(a[i]==a[j]){
        cout<<"-1";
        i++;
        j++;
    }
    else{
        i++;
    }
   }
   
    
}
int main(){
    int a[]={1,2,3};
    int s=sizeof(a)/sizeof(a[0]);
    int a1[]={4};
    int s1=sizeof(a1)/sizeof(a1[0]);
    intersection_array(a,a1,s,s1);
}