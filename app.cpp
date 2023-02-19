#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void helper(vector<int> &nums, int start)
    {
        if (start == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[start], nums[i]);
            helper(nums, start + 1);
            swap(nums[start], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        helper(nums, 0);
        return ans;
    }
};

int main()
{
    Solution obj;
    int n;
    cout << "Enter the size of array -> " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements -> " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> ans = obj.permute(arr);
    cout << "All possible permutations: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}