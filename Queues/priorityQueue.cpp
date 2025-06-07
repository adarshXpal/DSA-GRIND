#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.emplace(12);
  pq.emplace(2);
  pq.emplace(34);
  cout << pq.top() << endl;
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
}
