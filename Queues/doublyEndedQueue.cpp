#include <bits/stdc++.h>
using namespace std;

class doublyEndedQueue {
public:
  int *arr;
  int front;
  int rear;
  int size;
  doublyEndedQueue() {
    size = 100001;
    arr = new int[size];
    front = rear = -1;
  }
  bool isEmpty() {
    if (front == -1) {
      return true;
    }
    return false;
  }
  bool isFull() {
    if ((front == 0 && rear == size - 1) ||
        (rear == (front - 1) % (size - 1))) {
      return true;
    }
    return false;
  }
  int pushFront(int data) {
    if (isFull()) {
      return -1;
    } else if (front == 0) {
      front = size - 1;
    } else if (isEmpty()) {
      front = rear = 0;
    } else {
      front--;
    }
    arr[front] = data;
    return arr[front];
  }
  int pushBack(int data) {
    if (isFull()) {
      return -1;
    } else if (rear == size - 1) {
      rear = 0;
    } else if (isEmpty()) {
      front = rear = 0;
    } else {
      rear++;
    }
    arr[rear] = data;
    return arr[rear];
  }
  bool popFront() {
    if (isEmpty()) {
      return false;
    } else if (front == size - 1) {
      arr[front] = -1;
      front = 0;
    } else if (front == rear) {
      arr[front] = -1;
      front = rear = -1;
    } else {
      arr[front] = -1;
      front++;
    }
    return true;
  }
  bool popBack() {
    if (isEmpty()) {
      return false;
    } else if (rear == 0) {
      arr[rear] = -1;
      rear = size - 1;
    } else if (front == rear) {
      arr[rear] = -1;
      front = rear = -1;
    } else {
      arr[rear] = -1;
      rear--;
    }
    return true;
  }
  void printFront() { cout << arr[front] << endl; }
  void printRear() { cout << arr[rear] << endl; }
};

int main() {
  doublyEndedQueue q;
  cout << "The Element pushFront is :" << q.pushFront(2) << endl;
  cout << "The Element pushFront is :" << q.pushFront(1) << endl;
  q.printFront();
  q.printRear();
  q.popBack();
  q.popBack();
  q.printRear();
}
