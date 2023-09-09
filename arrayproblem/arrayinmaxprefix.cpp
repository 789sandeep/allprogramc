#include<iostream>
#include<vector>
using namespace std;
vector<int> maxprefix(vector<int> &v){
    vector<int> ans(v.size());
    int mx=INT16_MIN;
    for(int i=0; i<v.size(); i++){
            mx=max(mx,v[i]);
            ans[i]=mx;
    }
    return ans;
}
int main(){
    vector<int> v{2,0,6,5,7};
    vector<int> res=maxprefix(v);
    for(int i=0; i<v.size(); i++){
        cout<<res[i]<<" ";
    }
}