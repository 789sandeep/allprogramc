#include<iostream>
using namespace std;

int moveAllZerolast(int arr[], int size){
    int i=0, j=size-1;
    while(i<j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            j--;
        }
        if(arr[i]!=0 && arr[j]==0){
            j--;
        }
        i++;
    }
}
int main(){
    int arr[]={1,2,0,1,0,4,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    moveAllZerolast(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}