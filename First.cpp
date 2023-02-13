#include <iostream>
using namespace std;

int recursion (int n){
    /*base case*/
    if(n == 0 || n == 1){
        return 1;
    }
    /*Recursive call & Small calculation*/
    int recCall = recursion(n-1) + recursion(n-2);

    return recCall;
}
int main(){
    int n;
    cout <<"Enter term for fibonacci series sum "<<endl;
    cin >>n;
    int resultingfibo = recursion(n);
    cout <<"The fibonacci sum is -> "<<resultingfibo<<endl;
}
