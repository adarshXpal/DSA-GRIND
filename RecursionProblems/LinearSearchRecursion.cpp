#include <bits/stdc++.h>
using namespace std;

bool RlinearSearch(int arr[], int n, int key) {
  if (n == 0) {
    return false;
  }
  if (arr[0] == key) {
    return true;
  } else {
    bool ans = RlinearSearch(arr + 1, n - 1, key);
    return ans;
  }
}
int main() {
  int arr[5] = {12, 55, 2, 6, 11};
  int n = 5;
  int key = 44;
  if (RlinearSearch(arr, n, key)) {
    cout << "Yes key is present !!" << endl;
  } else {
    cout << "No key is not present !!" << endl;
  }
}
