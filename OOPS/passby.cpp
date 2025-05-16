#include <bits/stdc++.h>
using namespace std;

void passByValue(int x, int y) { // Noswap in passByValue !!
  int z = x;
  x = y;
  y = z;
}
void passByRefrence(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
void passByAddress(int *x, int *y) {
  int z = *x;
  *x = *y;
  *y = z;
}
int main() {
  int x = 4, y = 5;
  cout << "Original values are: X " << x << " Y " << y << endl;
  passByAddress(&x, &y);
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  return 0;
}
