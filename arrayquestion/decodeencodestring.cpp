#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string decode(string str){
    string result="";
    for(int i=0; i<str.length(); i++){
        if(str[i]!=']'){
            result.push_back(str[i]);
        }
        else{
            string str1=" ";
            while (!result.empty() && result.back()!='[')
            {
                str1.push_back(result.back());
                result.pop_back();

            }

            reverse(str1.begin(),str1.end());

            //  for(int i=str1.length()-1; i>=0; i--){
            //     cout<<str[i]<<" ";
            // }
            result.pop_back();

            string num="";
            while (!result.empty() && (result.back()>='0' && result.back()<='9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }
            
            reverse(num.begin(),num.end());
            //  for(int i=num.length()-1; i>=0; i--){
            //     cout<<num[i]<<" ";
            // }
            result.pop_back();
            
            int int_num=stoi(num);
            while (int_num)
            {
                result+=str1;
                int_num--;
            }    
            
        }
    }
    return result;
}
int main(){
    string str;
    cin>>str;
    cout<<decode(str);
}