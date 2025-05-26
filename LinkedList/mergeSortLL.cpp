#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int d) {
    this->data = d;
    this->next = nullptr;
  }
  ~Node() { cout << "Node is deleted with data: " << this->data << endl; }
};
void insertAtTail(Node *&tail, int d) {
  Node *temp = new Node(d);
  tail->next = temp;
  tail = tail->next;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
Node *findMid(Node *&head) {
  Node *slow = head;
  Node *fast = head->next;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
Node *mergeList(Node *&left, Node *&right) {
  Node *dummy = new Node(-1);
  Node *curr = dummy;
  while (left != nullptr && right != nullptr) {
    if (left->data < right->data) {
      curr->next = new Node(left->data);
      curr = curr->next;
      left = left->next;
    } else {
      curr->next = new Node(right->data);
      curr = curr->next;
      right = right->next;
    }
  }
  while (left) {
    curr->next = new Node(left->data);
    curr = curr->next;
    left = left->next;
  }
  while (right) {
    curr->next = new Node(right->data);
    curr = curr->next;
    right = right->next;
  }
  return dummy->next;
}

Node *mergeSort(Node *&head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  Node *mid = findMid(head);
  Node *left = head;
  Node *right = mid->next;
  mid->next = nullptr;
  left = mergeSort(head);
  right = mergeSort(right);
  Node *Ans = mergeList(left, right);
  return Ans;
}
int main() {
  Node *head = new Node(25);
  Node *tail = head;
  insertAtTail(tail, 1);
  insertAtTail(tail, -12);
  insertAtTail(tail, 0);
  insertAtTail(tail, 24);
  print(head);
  cout << "Head is at: " << head->data << endl;
  cout << "Tail is at: " << tail->data << endl;
  Node *sortedList = mergeSort(head);
  print(sortedList);

  return 0;
}
