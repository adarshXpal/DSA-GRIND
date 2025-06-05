#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};
void push(Node *&head, int data) {
  if (head == nullptr) {
    head = new Node(data);
  } else {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
  }
}
void pop(Node *&head) {
  if (head == nullptr) {
    cout << "Stack is Empty !!" << endl;
  } else {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}
int peek(Node *&head) {
  if (head) {
    return head->data;
  } else {
    return -1;
  }
}
bool empty(Node *&head) {
  if (head) {
    return false;
  } else
    return true;
}
int main() {
  Node *head = nullptr;
  push(head, 12);
  push(head, -88);
  push(head, 88);
  push(head, 0);
  pop(head);
  pop(head);
  pop(head);
  if (empty(head))
    cout << "Yes Stack is Empty !!" << endl;
  else
    cout << "No, Stack is not Empty !!" << endl;
  cout << peek(head) << endl;
}
