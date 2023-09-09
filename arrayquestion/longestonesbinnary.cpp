#include<iostream>
using namespace std;
int longestone(string str, int k){
    int start=0;
    int end=0;
    int count_zero=0;
    int max_length=0;
    for(;end<str.length();end++){
        if(str[end]=='0'){
            count_zero++;
        }
        while (count_zero>k)
        {
            if(str[start]=='0') count_zero--;
            start++;
        }
        max_length=max(max_length,end-start+1);
    }
    return max_length;
}
int main(){
    string str;
    cout<<"Enter binary string:";
    cin>>str;
     
    int k;
    cout<<"Enter max flip:";
    cin>>k;
    cout<<longestone(str,k);
}