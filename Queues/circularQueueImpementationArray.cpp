#include <bits/stdc++.h>
using namespace std;

class circularQueue {
public:
  int *arr;
  int front;
  int rear;
  int size;
  circularQueue() {
    size = 100001;
    arr = new int[size];
    front = rear = -1;
  }
  bool enqueue(int data) {
    if (front == -1 && rear == -1) {
      front = 0, rear = 0;
      arr[rear] = data;
      return true;
    }
    if (front == 0 && rear == size - 1 || rear == (front - 1) % (size - 1)) {
      return false;
    }
    if (front != 0 && rear == size - 1) {
      rear = 0;
      arr[rear] = data;
      return true;
    }
    rear++;
    arr[rear] = data;
    return true;
  }
  int dequeue() {
    if (front == -1 && rear == -1) {
      return -1;
    }
    if (front > rear && front == size - 1) {
      int temp = arr[front];
      arr[front] = -1;
      front = 0;
      return temp;
    }
    if (front == rear) {
      int temp = arr[front];
      arr[front] = -1;
      front = rear = -1;
      return temp;
    }
    int temp = arr[front];
    arr[front] = -1;
    front++;
    return front;
  }
  void printFront() { cout << "Element at Front: " << arr[front] << endl; }
};
int main() {
  circularQueue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  q.printFront();
}
