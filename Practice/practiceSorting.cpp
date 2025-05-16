#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); ++i) {
    int min = i;
    for (int j = i; j < arr.size(); ++j) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }
}

void InsertionSort(vector<int> &arr) {
  for (int i = 1; i < arr.size(); ++i) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}

void BubbleSort(vector<int> &arr) {
  for (int i = 0; i < arr.size(); ++i) {
    for (int j = 0; j < arr.size() - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int main() {

  vector<int> arr = {12, 34, 5, 22, 61, 11, 2};
  /*SelectionSort(arr);*/
  /*InsertionSort(arr);*/
  BubbleSort(arr);
  cout << "The Sorted Array is: ";
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}
