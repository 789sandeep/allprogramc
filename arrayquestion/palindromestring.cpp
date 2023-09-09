#include<iostream>
#include<vector>
#include<string>
using namespace std;
string palindrosrt(string &str){
    int l=str.size();
    int i=0;
    string str1;
    int j=0;
    for(int i=l-1; i>=0; i--){
        str1[j++]=str[i];
    }
    cout<<str1;
}
int main(){
    string str;//abba
    // string str1=str;
    cin>>str;
    cout<<palindrosrt(str);
}