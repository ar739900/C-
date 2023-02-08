#include <iostream>

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
    int resultingfibo = recursion(9);
    std::cout <<resultingfibo;
}
