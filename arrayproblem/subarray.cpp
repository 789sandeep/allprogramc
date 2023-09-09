#include<bits/stdc++.h>
using namespace std;
vector<int> subarray(vector<int> &v){
    vector<int> ans(v.size()*2);
    int sum=0;
    for(int i=0; i<v.size(); i++){
          sum=0;
        for(int j=i; j<v.size(); j++){
            sum+=v[j];
            cout<<sum<<" ";
        }
    }
    return ans;
}
int main(){
    vector<int> v{1,2,2};
    vector<int> res=subarray(v);
    // for(int i=0; i<v.size()*2; i++){
    //     cout<<res[i]<<" ";
    // }
}