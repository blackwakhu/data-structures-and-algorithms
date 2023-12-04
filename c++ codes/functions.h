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

void bubbleSort(vector<int> &arr, int size){
  for(int i = 0 ; i < size ; i++ ){
    for(int j = 1 ; i < size ; j++){
      if (arr[j] < arr[j+1])
        swap(arr[j], arr[j+1]);
    }
  }
}
