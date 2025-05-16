#include <bits/stdc++.h>
using namespace std;

void factorial(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " ";
  factorial(n - 1);
}
int main() {
  int n;
  cin >> n;
  factorial(n);
  return 0;
}
