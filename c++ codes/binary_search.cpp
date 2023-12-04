#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr){
  for(int a: arr)
    cout<<a<<endl;
  cout<<endl;
}


int binarySearch(vector<int> arr, int item, int size, int start){
  while(start <= size){
    int mid = start + (size - start)/2;
    if(arr[mid] == item)
      return mid;
    else if(arr[mid]<item)
      start = mid + 1;
    else
      size = mid - 1;
  }
  return -1;
}


int main(){
  vector<int> vec = {1,2,3,4,5,6,7,8,9};
  printArray(vec);
  return 0;
}
