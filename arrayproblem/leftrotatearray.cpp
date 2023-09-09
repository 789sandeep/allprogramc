#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int start, int end){
 while(start <= end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
 }
}

void leftrotate(int arr[], int size,int k){
   Reverse(arr,0,size-k-1);
   Reverse(arr,size-k,size-1);
   Reverse(arr,0,size-1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int k=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    leftrotate(arr,size,k);
    for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
    }
}