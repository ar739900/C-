#include <iostream>
#include <algorithm>
//#include <vector>
//#include <iterator>

using namespace std;
class One{
public:

  void printArray(int arr[],int size){
  cout<<"Printing Array"<<endl;
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";

  }
  cout<<endl;
  return ;
}

/*void reverseArray(int arr[],int start,int end){
  if(start>=end){
    return ;
  }
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  reverseArray(arr,start+1,end-1);
}*/
};
class two{
public:
  int something(){
    One b;
    int arr[4] = {1,2,3,4};
    b.printArray(arr,4);
  }
};
int main() {
  two a;
  string s ;
  cin>>s;
  reverse(s.begin(),s.end());
  cout<<s<<endl;
  a.something();
 /* int n;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cout<<"Enter the "<<i<<" element of array\n"<<endl;
    cin>>arr[i];
  }
  reverseArray(arr,0,n-1);
  printArray(arr,n);*/
  return 0;
}
