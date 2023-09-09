#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &v, int n, int target)
{
    int size = v.size();
    int low = 0;
    int high = size - 1;
    int ans=-1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == target)
        {   
            ans=mid;
            high=mid-1;  
        }
        if (v[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    int n;
    cout << "Enter array size:";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "Enter your target:";
    cin >> target;

    cout << search(v, n, target);
}