#include<bits/stdc++.h>
using namespace std;
int maj(vector<int>m){

 for(int i=0; i<m.size(); i++){
    int count=0;
   for(int j=i+1; j<m.size(); j++){
        if(m[i]==m[j]){
            count=count+1;
        }
    }
    if(count>m.size()/2){
      return m[i];
 }
 }
 int index=0;
 
 return m[index];
}
int main(){
    vector<int>m{3,2,2,2,2,3};
    cout<<maj(m);
}