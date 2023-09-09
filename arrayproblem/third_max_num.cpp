#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    vector<int> ve{2,2,3,1};
    set<int>nums_ans;
      for(auto numsx : ve){
          nums_ans.insert(numsx);
        //   if(nums_ans.size()>3){
        //       nums_ans.erase(nums_ans.begin());
        //   }
      } 
       for(auto it=nums_ans.begin(); it != nums_ans.end(); it++){
            cout<<*it<<" ";
       }
      cout<<endl;
    if(nums_ans.size()==3){
        cout<<*nums_ans.begin();
    }
    else{
      cout<<*nums_ans.rbegin();  
    }
}