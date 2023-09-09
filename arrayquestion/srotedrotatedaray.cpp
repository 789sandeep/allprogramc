#include<iostream>
#include<vector>
using namespace std;
int findminindexrotarry(vector<int> &v, int n){
    int l=0 ,h=v.size()-1;
    if(v.size()==1) return 1;
    if(v[l]<v[h]) return v[l];
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        if(v[mid]>v[mid+1]) return v[mid+1];
        if(v[mid]<v[mid-1]) return v[mid-1];
        if(v[mid]>v[l]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<findminindexrotarry(v,n);
}