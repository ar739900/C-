#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class another_practice{
    public:
    vector<vector<int>> ans;
    void first_helper(vector<int> a,vector<int> temp,int index){
        if(a.size()==index){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(a[index]);
        first_helper(a,temp,index+1);
        temp.pop_back();
        first_helper(a,temp,index+1);
        return ;

    }
    vector<vector<int>> another_sequence(vector<int>& a){
        vector<int> temp;
        first_helper(a,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int mai(){
     another_practice ap;
    int n;
    cout<<"Enter the size of the array -> ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the numbers for array -> ";
    for (int i = 0; i < n; i++) {
    cin >> a[i];
}
    for(const auto& i:a){
        cout<<i;
    }
    vector<vector<int>> ans;
    ans = ap.another_sequence(a);
    for(const auto& i : ans){
        for(const auto& j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}