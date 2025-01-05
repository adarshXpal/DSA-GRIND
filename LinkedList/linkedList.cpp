#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for node with data: " << value << endl;
  }
};
void InsertAtHead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}
void InsertAtTail(Node *&tail, int d) {
  Node *temp = new Node(d);
  tail->next = temp;
  tail = tail->next;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d) {
  if (position == 1) {
    InsertAtHead(head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }
  if (temp->next == NULL) {
    InsertAtTail(tail, d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}
void deleteNode(int position, Node *&head, Node *&tail) {
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete (temp);
  } else {
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < position) {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    if (curr->next == NULL) {
      tail = prev;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return;
  }
}
int main() {
  Node *node1 = new Node(34);
  /*cout << node1->data << endl;*/
  /*cout << node1->next << endl;*/
  Node *head = node1;
  Node *tail = node1;
  InsertAtHead(head, 12);
  InsertAtTail(tail, 54);
  print(head);
  InsertAtHead(head, 89);
  print(head);
  insertAtPosition(tail, head, 5, 77);
  print(head);
  print(head);
  deleteNode(5, head, tail);
  print(head);
  cout << "Head " << head->data << endl;
  cout << "Tail " << tail->data << endl;

  return 0;
}
