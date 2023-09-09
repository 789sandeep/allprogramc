#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int size=height.size();
    vector<int>maxleft(size);
    maxleft[0]=height[0];
    for(int i=1; i<size; i++){
        maxleft[i]=max(maxleft[i-1],height[i]);
    }

   for (int i=0; i<size; i++){
    cout<<maxleft[i]<<" ";
   }
   cout<<'\n';

    vector<int>maxright(size);
    maxright[size-1]=height[size-1];
    for(int i=size-2; i>=0; i--){
        maxright[i]=max(maxright[i+1],height[i]);
    }

    for (int i=0; i<size; i++){
    cout<<maxright[i]<<" ";
    }
    cout<<'\n';

    vector<int>water(size);
    for(int i=0; i<size; i++){
        water[i]=min(maxleft[i],maxright[i])-height[i];
    }

    for (int i=0; i<size; i++){
    cout<<water[i]<<" ";
    }
    cout<<'\n';
   
   int waterCome=0;
   for(int i=0; i<size; i++){
    waterCome= waterCome+water[i];
   }
   return waterCome;
}
int main(){
    vector<int>height{0,1,0,2,1,0,1,3,2,1,2,1};
    for(int i=0; i<height.size(); i++){
            cout<<height[i]<<" ";
        }
    cout<<'\n';
    cout<<trap(height);
}