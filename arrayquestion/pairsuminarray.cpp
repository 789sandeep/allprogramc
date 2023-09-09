#include<iostream>
#include<vector>
using namespace std;
int pairsum_array(vector<int> &v,int target){
    
    int s=v.size();
    for(int i=0; i<s; i++){
      for(int j=i+1; j<s; j++){
        if(v[i]+v[j]==target){
             cout<<v[i]<<" "<<v[j]<<" ";
        }
      }
    }
  
}
int main(){
    int s;
    cout<<"enter the size:";
    cin>>s;//5
    // int target;
    // cout<<"enter your target:";
    // cin>>target;//5
    vector<int> v(s);//1,2,3,4,5
    for(int i=0; i<s; i++){
        cin>>v[i];
    }

    int result=pairsum_array(v,5);
}