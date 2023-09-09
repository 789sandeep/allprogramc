#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isAnagram(string s1,string s2){
    vector<int> f(26,0);
    if(s1.length() != s2.length()) return false;

    for(int i=0; i<s1.length(); i++){
        f[s1[i]-'a']++;
        f[s2[i]-'a']--;
    }

    for(int i=0; i<26; i++){
          if(f[i] != 0) return false;
    }

    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if (isAnagram(s1,s2)) cout<<"This string is anagram";
    else cout<<"This string is not anagram";
}