#include "bits/stdc++.h"
#include <stack>
using namespace std;

int main() {
  stack<int> st;
  st.push(2);
  st.push(3);
  cout << "Size of Stack is: " << st.size() << endl;
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
  return 0;
}
