#include<iostream>
#include<vector>


using namespace std;

void printArray(vector<int> arr){
  for(auto a: arr)
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


void sort(vector<int> & bar) {
    if (bar.size() <= 1) return;
    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;
    for (size_t j = 0; j < mid;j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);
    sort(left);
    sort(right);
    mergeSort(left, right, bar);
}

void mergeSort(vector<int> &left, vector<int> &right, vector<int> &bars){
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;
    while (j < nL && k < nR) {
        if (left[j] < right[k]) {
            bars[i] = left[j];
            j++;
        }else {
            bars[i] = right[k];
            k++;
        }i++;
    }while (j < nL) {
        bars[i] = left[j];
        j++; i++;
    }while (k < nR) {
        bars[i] = right[k];
        k++; i++;
    }
}
