#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  if (n == 0 || n == 1) {
    return true;
  }
  if (arr[0] > arr[1]) {
    return false;
  } else {
    bool ans = isSorted(arr + 1, n - 1);
    return ans;
  }
}
int main() {

  int arr[6] = {12, 13, 15, 0, 67, 89};
  int n = 6;
  if (isSorted(arr, n))
    cout << "Yes Array is Sorted !!" << endl;
  else
    cout << "Array is Not Sorted !!" << endl;
  return 0;
}
