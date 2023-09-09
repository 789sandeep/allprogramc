#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    vector<int>digits{1,2,3};
    vector<int> vec;
    int sum=digits[0];
    for(int i=1; i<digits.size(); i++){
        if(digits[i]!=0) sum=sum*10+digits[i];
        //   cout<<sum<<" "; 
    }
    // cout<<endl;
    int add=sum+1;
    // cout<<sum<<endl;
  while(add>0){
        int rem=add%10;
        vec.push_back(rem);
        add=add/10;
    }
    reverse(vec.begin(),vec.end());
    // cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}