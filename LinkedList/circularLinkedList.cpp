#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int d) {
    this->data = d;
    this->next = NULL;
  }
  ~Node() { cout << "The Node is deleted with data: " << data << endl; }
};

void insertWithElement(Node *&tail, int element, int d) {
  if (tail == NULL) {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  } else {
    Node *temp = tail;
    while (temp->data != element) {
      temp = temp->next;
    }
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void deleteNode(Node *&tail, int value) {
  if (tail == NULL) {
    cout << "The List is Empty!!" << endl;
  } else {
    Node *prev = tail;
    Node *curr = prev->next;
    while (curr->data != value) {
      prev = curr;
      curr = curr->next;
    }
    if (curr == tail) {
      tail = prev;
    }
    prev->next = curr->next;
    delete curr;
    curr->next = NULL;
  }
}

void print(Node *&tail) {
  Node *temp = tail;
  do {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

int main() {
  Node *node1 = new Node(1);
  Node *tail = NULL;
  deleteNode(tail, 3);
  insertWithElement(tail, 3, 2);
  print(tail);
  insertWithElement(tail, 2, 3);
  print(tail);
  insertWithElement(tail, 3, 5);
  print(tail);
  insertWithElement(tail, 5, 9);
  print(tail);
  cout << "Tail is at node with data: " << tail->data << endl;
  deleteNode(tail, 5);
  print(tail);
  cout << "Tail is at node with data: " << tail->data << endl;

  return 0;
}
