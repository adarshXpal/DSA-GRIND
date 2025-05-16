#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int l, int mid, int h) {
  vector<int> temp;
  int left = l;
  int right = mid + 1;
  while (left <= mid && right <= h) {
    if (arr[left] < arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= h) {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = l; i <= h; i++) {
    arr[i] = temp[i - l];
  }
}

void MergeSort(vector<int> &arr, int l, int h) {
  if (l >= h) {
    return;
  }
  int mid = (l + h) / 2;
  MergeSort(arr, l, mid);
  MergeSort(arr, mid + 1, h);
  Merge(arr, l, mid, h);
}

int main() {
  vector<int> arr = {12, 22, 3, 14, 9};
  int l = 0;
  int h = arr.size() - 1;
  MergeSort(arr, l, h);
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
}
