#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int l, int h) {
  int pivot = arr[l];
  int i = l;
  int j = h;
  while (i < j) {
    while (arr[i] <= pivot && i < h) {
      i++;
    }
    while (arr[j] > pivot && j > l) {
      j--;
    }
    if (i < j) {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[j], arr[l]);
  return j;
}
void QuickSort(vector<int> &arr, int l, int h) {
  if (l >= h) {
    return;
  }
  int pindex = Partition(arr, l, h);
  QuickSort(arr, l, pindex - 1);
  QuickSort(arr, pindex + 1, h);
}
int main() {

  vector<int> arr = {12, 2, 33, 11, 16, 0};
  int l = 0;
  int h = arr.size() - 1;
  QuickSort(arr, l, h);
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}
