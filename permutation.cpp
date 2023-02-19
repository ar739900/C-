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
    Solution obj;
    vector<int> arr = {1, 2, 3};
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

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums, int start){
        if(start == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = start; i < nums.size(); i++){
            swap(nums[start], nums[i]);
            helper(nums, start + 1);
            swap(nums[start], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums){
        helper(nums, 0);
        return ans;
    }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter the size of array -> "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements -> "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = obj.permute(arr);
    cout<<"All possible permutations: "<<endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/
/*

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> permutation;
        vector<bool> used(nums.size(), false);
        backtrack(res, permutation, used, nums);
        return res;
    }

private:
    void backtrack(vector<vector<int>>& res, vector<int>& permutation, vector<bool>& used, vector<int>& nums) {
        if (permutation.size() == nums.size()) {
            res.push_back(permutation);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            permutation.push_back(nums[i]);
            backtrack(res, permutation, used, nums);
            permutation.pop_back();
            used[i] = false;
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<vector<int>> ans = obj.permute(arr);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/