#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
  int *arr;
  int front;
  int rear;
  int size;
  Queue() {
    size = 100001;
    arr = new int[size];
    front = 0;
    rear = 0;
  }
  bool isEmpty() {
    if (front == rear) {
      return true;
    }
    return false;
  }
  void enqueue(int data) {
    if (rear == size) {
      cout << "Queue is full" << endl;
      return;
    }
    arr[rear] = data;
    rear++;
  }
  void dequeue() {
    if (front == rear) {
      cout << "Queue is Empty" << endl;
    }
    cout << "Element Poped: " << arr[front] << endl;
    arr[front] = -1;
    front++;
  }
  void ffront() { cout << "Element at front is: " << arr[front] << endl; }
};

int main() {
  Queue q;
  q.enqueue(12);
  q.ffront();
  q.dequeue();
  q.ffront();
}
