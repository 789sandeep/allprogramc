#include<iostream>
#include<vector>
using namespace std;
int findpeakelement(vector<int> &v, int n){
    int l=0, h=v.size()-1;
    int ans=-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        if(v[mid-1]<v[mid]){
            ans=v[mid];
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    
return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<findpeakelement(v,n);
}
