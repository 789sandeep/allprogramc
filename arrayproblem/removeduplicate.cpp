#include<iostream>
using namespace std;

int removeduplicate(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i]>-1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    removeduplicate(arr,size);
return 0;
}