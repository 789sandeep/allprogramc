#include<iostream>
#include<vector>
using namespace std;

bool TwoSum(vector<int> arr,int size,int target){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
   return false;
}

vector<int> TwoSumindex(vector<int> arr,int size,int target){
    vector<int> ans;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
   return {-1,-1};
}
int main(){
    vector<int> arr={2,6,5,8,11};
    int size=5;
    int target = 14;
    cout<<TwoSum(arr,size,target)<<endl;
    vector<int>res=TwoSumindex(arr,size,target);
    for(int i=0; i<2; i++){
        cout<<res[i]<<" ";
    }

}