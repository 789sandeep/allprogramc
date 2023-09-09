#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countsort(string &str){
 vector<int> v(26,0);
 for(int i=0; i<str.length(); i++ ){
      int index=str[i] - 'a';
      cout<<index<<"i";
      cout<<v[index]++<<" ";
 }
//   for(int i=0; i<str1.length(); i++ ){
//       int index=str[i] - 'a';
//       v[index]--;
//  }
 int j=0;
for(int i=0; i<26; i++){
    while (v[i]--)
    {
        str[j++]=i+'a';
    }
    
}
return str;
}
int main(){
    string str;
    cin>>str;
    cout<<countsort(str);
}