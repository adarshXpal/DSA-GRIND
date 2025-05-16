#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int target) {
  int l = 0;
  int h = arr.size() - 1;
  while (l <= h) {
    int mid = l + (h - l) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      l = mid + 1;
    } else {
      h = mid - 1;
    }
  }
  return -1;
}
int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int target = 6;
  int target_index = BinarySearch(arr, target);
  cout << "The target index is: " << target_index << endl;
  return 0;
}
