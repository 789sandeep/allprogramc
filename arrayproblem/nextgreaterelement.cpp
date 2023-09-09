#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1{2,4};
    vector<int> nums2{1,2,3,4};
    vector<int> ne;
    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
               if(nums1[i]==nums2[j] and nums2[j]<nums2[j+1]){
                      ne.push_back(nums2[j+1]);
               }
                if(nums1[i]==nums2[j] and nums2[j]>nums2[j+1]){
                      ne.push_back(-1);
               }
        }
    }
    for(int i=0; i<ne.size(); i++){
        cout<<ne[i]<<" ";
    }
}