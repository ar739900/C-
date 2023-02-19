#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void helper(vector<int> &a, int start)
    {
        if (start == a.size())
        {
            ans.push_back(a);
            return;
        }
        for (int j = start; j < a.size(); j++)
        {
            swap(a[start], a[j]);
            helper(a, start + 1);
            swap(a[start], a[j]);
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
    int n = 3;
    vector<int> arr = {4, 5, 6};

    Solution obj;
    vector<vector<int>> ans = obj.permute(arr);

    cout << "All possible permutation -> " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl
             << endl;
        ;
    }
    return 0;
}