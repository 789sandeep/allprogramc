#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size){
    for(int i=0; i<size; i++){
       for(int j=i+1; j<size; j++){
            if(arr[j]<arr[i])
              return false;
        }
   }
   return true;
}
 
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    bool ans= isSorted(arr,size);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}
