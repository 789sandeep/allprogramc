#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> &vec){
    int l=vec.size()-1;
    sort(vec.begin(),vec.end());
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=0; i<vec.size()+1; i++)
        if(i+1!=vec[i]){
            ans=vec[i];
            break;
        }
    return ans;
}
int main(){
    vector<int> vec{1,2,3};
    cout<<missing(vec);
}