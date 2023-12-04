#include<iostream>
#include<vector>

void printArray(vector<int> arr){
  for(int a: arr)
    cout<<a<<endl;
  cout<<endl;
}

int main(){
  vector<int> vec = {1,2,3,4,5,6,7,8,9};
  printArray(vec);
  return 0;
}
