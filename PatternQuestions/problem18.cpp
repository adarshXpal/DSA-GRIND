#include <bits/stdc++.h>
using namespace std;
// comment hai bus !!
void looppattern(int n) {
  while (n >= 1) {
    for (int i = 1; i <= 2 * n - 1; i++) {
      for (int j = 1; j <= 2 * n - 1; j++) {
        if (i == 1 || j == 1 || i == 2 * n - 1 || j == 2 * n - 1) {
          cout << n << " ";
        }
      }
      cout << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t > 0) {
    int n;
    cin >> n;
    cout << endl;
    looppattern(n);
  }
  return 0;
}
