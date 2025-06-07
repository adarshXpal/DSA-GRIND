#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  Node *next;
  int data;
  Node(int d) {
    this->data = d;
    this->next = nullptr;
  }
};

class Queue {
public:
  Node *front;
  Node *rear;
  Queue() { front = rear = nullptr; }
  bool isEmpty() { return front == nullptr; }
  void enqueue(int d) {
    Node *new_node = new Node(d);
    if (isEmpty()) {
      front = rear = new_node;
      return;
    } else {
      rear->next = new_node;
      rear = new_node;
      return;
    }
  }
  void dequeue() {
    if (isEmpty()) {
      cout << "The queue is Empty !!" << endl;
    } else if (front == rear) {
      Node *temp = front;
      front = rear = nullptr;
      delete temp;
    } else {
      Node *temp = front;
      front = front->next;
      delete temp;
    }
  }
  void printFront() {
    if (isEmpty()) {
      cout << "Queue is Empty !!" << endl;
      return;
    }
    cout << "Front: " << front->data << endl;
  }
  void printRear() {
    if (isEmpty()) {
      cout << "Queue is Empty !!" << endl;
      return;
    }
    cout << "Rear: " << rear->data << endl;
  }
};

int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  q.dequeue();
  q.printFront();
  q.printRear();
}
