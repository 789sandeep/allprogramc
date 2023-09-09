#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ve{1,4,3,2};
    int maxcount=0;
    for(int i=0; i<ve.size(); i+=2){
        maxcount=maxcount+ve[i];
    }
    cout<<maxcount<<" ";
}