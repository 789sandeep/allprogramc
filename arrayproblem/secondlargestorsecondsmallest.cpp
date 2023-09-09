#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int secondorfirstlargestelement(int arr[], int size){
    int n=size-1;
    if(size==0 or size==1){
        cout<<-1;
    }
    sort(arr,arr+size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second Smallest :"<<small<<endl;
    cout<<"Second Largest  :"<<large<<endl;
}
int main(){
    int arr[]={1,2,4,6,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    secondorfirstlargestelement(arr,size);
}