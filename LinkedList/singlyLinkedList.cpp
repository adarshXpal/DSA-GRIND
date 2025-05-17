#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) { // Constructor to put insert the data !!
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    int value = this->data;
    this->next = NULL;
    cout << "The Memory is free for the node with data: " << value << endl;
  }
};

void insertAtHead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d) {
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(int position, int d, Node *&head, Node *&tail) {
  if (position == 1) {
    insertAtHead(head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1) {
    temp = temp->next;
    ++cnt;
  }
  if (temp->next == NULL) {
    insertAtTail(tail, d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void deleteNode(Node *&head, Node *&tail, int position) {
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    delete temp;
  } else {
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < position) {
      prev = curr;
      curr = curr->next;
      ++cnt;
    }
    if (curr->next == NULL) {
      tail = prev;
    }
    prev->next = curr->next;
    delete curr;
  }
}

int main() {
  Node *node1 = new Node(122);
  // Head Pointing towards Node1 !!
  Node *head = node1;
  Node *tail = node1;
  print(head);
  insertAtHead(head, 12);
  print(head);
  insertAtPosition(3, 69, head, tail);
  print(head);
  insertAtTail(tail, 33);
  print(head);
  deleteNode(head, tail, 4);
  print(head);
  insertAtTail(tail, 55);
  print(head);
  return 0;
}
