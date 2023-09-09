#include<iostream>
#include<vector>
#include<string>
using namespace std;

string commonPrefix(vector<string> &str){

    sort(str.begin(),str.end());

    string str1=str[0];
    string str2=str[str.size()-1];
    int i=0;
    string ans="";
    int j=0;
    while(i<str1.size() && j<str2.size()){
        if(str1[i]==str2[j]){
            ans=str1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string> str (n);
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    cout<<"longets common prefix:"<<commonPrefix(str);

    return 0;
}