#include<iostream>
#include<vector>
using namespace std;
int findTarget(vector<vector<int>> &v, int target){
    int n=v.size();
    int m=v[0].size();
    int l=0, h=n*m-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        int x=mid/m;
        int y=mid%m;
        if(v[x][y]==target){
            return v[x][y];
        }
        else if(v[x][y]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    // vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> v(n ,vector<int> (m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    int target=3;
    cout<<findTarget(v,target);
}