#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "9876543210";
  stack<char> st;
  for (auto it : s) {
    st.push(it);
  }
  cout << "the size of the stack is: " << st.size() << endl;
  string ans = "";
  while (!st.empty()) {
    ans.push_back(st.top());
    st.pop();
  }
  cout << ans << endl;
}
