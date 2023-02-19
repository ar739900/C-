
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class three{
    public:
    bool helper(vector<int> a,int sum,int temp,int i){
        if(sum==temp){
            return 1;
        }
        if(i==a.size()){
            return 0;
        }
        int call1 = (helper(a,sum,temp+a[i],i+1));
        int call2 = (helper(a,sum,temp,i+1));
        return call1||call2;
    }
    bool something(vector<int> a,int sum){
        return helper(a,sum,0,0);
        
    }
};
int main(){
    three obj;
    int sum;
    vector<int> a = {5,7,9,54,13,8,61};
    cout<<"Enter the sum for checking -> "<<endl;
    cin>>sum;
    cout<<obj.something(a,sum);
    return 0;
}