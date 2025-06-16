#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  if (root == NULL) {
    cout << "Tree is Empty !!" << endl;
    return;
  }
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    if (temp) {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    } else {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    }
  }
}

void buildTreeLevelOrder(Node *&root) {
  int data;
  cout << "Enter the root: " << endl;
  cin >> data;
  if (data == -1) {
    cout << "Root Node NULL !!" << endl;
    return;
  }
  root = new Node(data);
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    int leftd;
    cout << "Enter the data for left of node: " << temp->data << endl;
    cin >> leftd;
    if (leftd != -1) {
      temp->left = new Node(leftd);
      q.push(temp->left);
    }
    int rightd;
    cout << "Enter the data for right of node: " << temp->data << endl;
    cin >> rightd;
    if (rightd != -1) {
      temp->right = new Node(rightd);
      q.push(temp->right);
    }
  }
}
void buildTreeRecursive(Node *&root) {
  int data;
  cout << "Enter the data" << endl;
  cin >> data;
  if (data == -1) {
    return;
  }
  root = new Node(data);
  cout << "Enter the data to insert in left of: " << root->data << endl;
  buildTreeRecursive(root->left);
  cout << "Enter the data to insert in right of: " << root->data << endl;
  buildTreeRecursive(root->right);
  return;
}

int main() {
  Node *root = NULL;
  // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
  buildTreeLevelOrder(root);
  cout << "Here Goes Level Order Traversal: " << endl;
  levelOrderTraversal(root);
  return 0;
}
