#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr){
  for(int a: arr)
    cout<<a<<"  ";
  cout<<endl;
}

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}
