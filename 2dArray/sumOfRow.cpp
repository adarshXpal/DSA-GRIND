#include <bits/stdc++.h>
using namespace std;

bool isthere(int arr[][3], int target, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == target) {
        return 1;
      }
    }
  }
  return 0;
}
int main() {
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "Enter the target: " << endl;
  int target;
  cin >> target;
  if (isthere(arr, target, 3, 3)) {
    cout << "Element is present !!" << endl;
  } else {
    cout << "Element is not present !!" << endl;
  }

  return 0;
}
