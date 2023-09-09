#include<iostream>
#include<vector>
using namespace std;
int choclatealocate(vector<int> &v){

}
int main(){
    int n;
    cout<<"Enter the vector size:";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    choclatealocate(v);
return 0;
}