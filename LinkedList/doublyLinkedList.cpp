#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int d) {
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
  }
  ~Node() { cout << "Deleting the node with data: " << data << endl; }
};
// Inserting Node at Head !!
void insertAtHead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  head->prev = temp;
  head = temp;
}

// Inserting at Tail !!
void insertAtTail(Node *&tail, int d) {
  Node *temp = new Node(d);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

// Inserting at Position !!
void insertAtPosition(Node *&head, Node *&tail, int Position, int d) {
  if (Position == 1) {
    insertAtHead(head, d);
    return;
  }
  Node *curr = head;
  int cnt = 1;
  while (cnt < Position - 1) {
    curr = curr->next;
    cnt++;
  }
  if (curr->next == NULL) {
    insertAtTail(tail, d);
    return;
  }
  Node *temp = new Node(d);
  temp->next = curr->next;
  curr->next->prev = temp;
  curr->next = temp;
  temp->prev = curr;
}

// Prints the Linked List !!
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// Reverse Print the LInked List !!
void Rprint(Node *&tail) {
  Node *temp = tail;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << endl;
}

// Returns the Length of the LinkedList !!
int printLenght(Node *&head) {
  int length = 0;
  Node *temp = head;
  while (temp != NULL) {
    length++;
    temp = temp->next;
  }
  return length;
}
// Deletion of the Node !!
void deleteNode(Node *&head, Node *&tail, int Position) {
  if (Position == 1) {
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return;
  }
  Node *curr = head;
  int cnt = 1;
  while (cnt < Position) {
    curr = curr->next;
    cnt++;
  }
  if (curr->next == NULL) {
    tail = curr->prev;
    tail->next = NULL;
    delete curr;
    return;
  }
  curr->next->prev = curr->prev;
  curr->prev->next = curr->next;
  delete curr;
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  cout << printLenght(head) << endl;
  print(head);
  insertAtHead(head, -10);
  print(head);
  insertAtTail(tail, 99);
  print(head);
  insertAtPosition(head, tail, 4, -91);
  print(head);
  deleteNode(head, tail, 2);
  print(head);
  cout << "Printing the List in reverse: " << endl;
  Rprint(tail);
  cout << "The Head is at: " << head->data << endl;
  cout << "The Tail is at: " << tail->data << endl;
  return 0;
}
