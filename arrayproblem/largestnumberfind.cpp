#include<iostream>
using namespace std;
int main(){
    int arr[]={8,10,5,7,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int output=arr[0];
    for(int i=0; i<size; i++){
        int j=i+1;
        if(output<arr[i]){
            output=arr[i];
        }
    }
    cout<<output<<endl;
}