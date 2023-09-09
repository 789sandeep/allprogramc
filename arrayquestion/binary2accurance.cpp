#include <iostream>
#include <vector>
using namespace std;
int lower_bound(vector<int> &v, int target)
{
    int l = 0, h =v.size()-1;
    int ans=-1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] >= target)
        { 
            ans=mid;
            h = mid - 1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int uper_bound(vector<int> &v, int target)
{
    int l = 0, h = v.size()-1;
    int ans=-1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] > target)
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
    
int main()
{
    int n;
    cout << "Enter a vector size:";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cout << "Enter your target:";
    cin >> target;

    vector<int> result;

    int lb =lower_bound(v,target);
    // cout<<lb;
    if(v[lb] != target){
         result.push_back(-1);
         result.push_back(-1);
    }
    else{
        int up=uper_bound(v,target);
        result.push_back(lb);
        result.push_back(up-1);
    }
    cout<<result[0]<<" "<<result[1];
return 0;
}