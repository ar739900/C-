#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class One{
    public:
    vector<vector<int>> ans;
    void helper(vector<int> arr,int index){
        vector<int> count;
        if(index==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=index;i<=arr.size();i++){
            helper(arr,index+1);
            helper(arr,index+1);
        }
    }
    vector<vector<int>> my_permute(vector<int>arr){
        helper(arr,0);
        return(ans);
    }
};
int main(){
    One obj_one;
    int n;
    cout<<"Enter the size of array -> "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements -> "<<endl;
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = obj_one.my_permute(arr);
    cout<<"All possible permutation -> "<<endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}