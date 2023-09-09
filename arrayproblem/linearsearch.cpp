#include<iostream>
using namespace std;
int search(int arr[], int sr, int size){
    int ind=-1;
    for(int i=0; i<size; i++){
        if(arr[i]==sr){
            ind=i;
            break;  
        } 
    } 
            
    return ind;
}
int main(){
    int arr[]={1,4,5,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sr=2;
    cout<<sr<<" "<<"is present in the"<<" "<<search(arr, sr, size)<<" "<<"index";
}