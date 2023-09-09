#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
   vector<int> nums{4,3,2,7,8,2,3,1};
   vector<int> ne;
   unordered_map<int,int>mp;

    for(int i=0; i<nums.size(); i++){
        mp[nums[i]++];
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second;
     }
     cout<<endl;

       for (int i = 0; i < nums.size(); i++)
        {
            if (mp[i + 1] == 0)
            {
                ne.push_back(i + 1);
            }
        }

    // for(auto it=se.begin(); it!=se.end(); it++){
    //     if(*it<*it+1){
    //         ne.push_back(*it+1);
    //     }
    //  }
   
   for(int i=0; i<ne.size(); i++){
    cout<<ne[i]<<" ";
   }
}