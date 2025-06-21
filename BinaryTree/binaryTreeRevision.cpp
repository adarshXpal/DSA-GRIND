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

void reverseLevelOrderTraversal(Node *&root) {
  if (!root) {
    return;
  }
  queue<Node *> q;
  stack<Node *> s;
  s.push(NULL);
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    s.push(temp);
    if (temp) {
      if (temp->right) {
        q.push(temp->right);
      }
      if (temp->left) {
        q.push(temp->left);
      }
    } else {
      if (!q.empty()) {
        q.push(NULL);
      }
    }
  }
  s.pop();
  while (!s.empty()) {
    if (s.top()) {
      cout << s.top()->data << " ";
    } else {
      cout << endl;
    }
    s.pop();
  }
}

void levelOrderTraversal(Node *&root) {
  if (!root) {
    return;
  }
  queue<Node *> q;
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

void inOrderTraversal(Node *&root) {
  if (root == NULL) {
    return;
  }
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
  return;
}

void postOrderTraversal(Node *&root) {
  if (root == NULL) {
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
  return;
}

void preOrderTraversal(Node *&root) {
  if (root == NULL) {
    return;
  }
  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
  return;
}

void buildTreeRecursive(Node *&root) {
  int temp;
  cout << "Enter the Data: " << endl;
  cin >> temp;
  if (temp == -1) {
    return;
  }
  root = new Node(temp);
  cout << "Enter the data to insert in left of Node " << root->data << endl;
  buildTreeRecursive(root->left);
  cout << "Enter the data to insert in right of Node " << root->data << endl;
  buildTreeRecursive(root->right);
  return;
}
int main() {
  /*Methods for Building: BuildTreeRecursive(), BuildTreeLevelOrder()*/
  /*Methods for Traversal: LevelOrderTraversal(),
   * ReverseLevelOrderTraversal(),*/
  /*PreOrderTraversal(), InOrderTraversal(), PostOrderTraversal()*/
  // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
  Node *root = NULL;
  buildTreeRecursive(root);
  levelOrderTraversal(root);
  reverseLevelOrderTraversal(root);
  cout << "PreOrderTraversal: ";
  preOrderTraversal(root);
  cout << endl;
  cout << "inOrderTraversal: ";
  inOrderTraversal(root);
  cout << endl;
  cout << "postOrderTraversal: ";
  postOrderTraversal(root);
  cout << endl;
  return 0;
}
