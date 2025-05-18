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
  ~Node() {
    int value = this->data;
    this->next = NULL;
    cout << "The node is deleted with Data: " << value << endl;
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
void insertAtPosition(Node *&head, Node *&tail, int Position, int d) {
  if (Position == 1) {
    insertAtHead(head, d);
    return;
  }
  Node *temp = head;
  int cnt = 1;
  while (cnt < Position - 1) {
    temp = temp->next;
    cnt++;
  }
  if (temp->next == NULL) {
    insertAtTail(tail, d);
    return;
  }
  Node *node2insert = new Node(d);
  node2insert->next = temp->next;
  temp->next = node2insert;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void deleteNode(Node *&head, Node *&tail, int Position) {
  if (Position == 1) {
    Node *temp = head;
    head = head->next;
    delete temp;
  } else {
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < Position) {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    if (curr->next == NULL) {
      tail = prev;
    }
    prev->next = curr->next;
    delete curr;
  }
}

int main() {
  Node *node1 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  print(head);
  insertAtTail(tail, 2);
  print(head);
  insertAtHead(head, 0);
  print(head);
  insertAtPosition(head, tail, 2, -1);
  print(head);
  deleteNode(head, tail, 3);
  print(head);
  cout << "Head is at: " << head->data << endl;
  cout << "Tail is at: " << tail->data << endl;

  return 0;
}
