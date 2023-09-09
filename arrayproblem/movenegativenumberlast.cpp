#include<bits/stdc++.h>
using namespace std;

void move(vector<int> &arr){
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

}

int main(){
 vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
 move(arr);
 for(int e:arr){
    cout<<e<<" ";
 }

}