#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
  int *arr;
  int top;
  int size;

  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int d) {
    if (this->top < this->size - 1) {
      top++;
      arr[top] = d;
    } else {
      cout << "Stack Overflow" << endl;
    }
  }
  void pop() {
    if (this->top == -1) {
      cout << "Stack Underflow" << endl;
    } else {
      top--;
    }
  }
  int peek() {
    if (this->top > -1) {
      return arr[top];
    } else {
      return -1;
    }
  }
  bool empty() {
    if (top == -1) {
      return true;
    }
    return false;
  }
};
int main() {
  Stack a(3);
  a.push(79);
  a.push(44);
  a.push(12);
  while (!a.empty()) {
    cout << a.peek() << " ";
    a.pop();
  }
  cout << endl;
  cout << a.peek() << endl;
  return 0;
}
