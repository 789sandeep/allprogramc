#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s1, string s2){
      vector<int> ind(128,-1);
      vector<int> ind1(128,-1);
      if(s1.length() != s2.length()) return false;

      for(int i=0; i<s1.size(); i++){
            if(ind[s1[i]] != ind1[s2[i]]) return false;
            ind[s1[i]]=ind1[s2[i]]=1;
      }
      return true;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(isIsomorphic(s1,s2)) cout<<"They are isomorphic";
    else cout<<"They are  not isomorphic";
}