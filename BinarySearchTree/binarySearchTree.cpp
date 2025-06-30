#include <bits/stdc++.h>
#include <queue>
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

Node *insertIntoBST(Node *root, int data) {
  if (root == NULL) {
    root = new Node(data);
    return root;
  }
  if (data > root->data) {
    root->right = insertIntoBST(root->right, data);
  } else {
    root->left = insertIntoBST(root->left, data);
  }
  return root;
}

void takeInput(Node *&root) {
  int data;
  cin >> data;

  while (data != -1) {
    root = insertIntoBST(root, data);
    cin >> data;
  }
}

void searchInBST(Node *root, int target, Node *&result) {
  if (root == NULL) {
    return;
  }
  if (root->data == target) {
    result = root;
    return;
  } else if (root->data > target) {
    searchInBST(root->left, target, result);
  } else {
    searchInBST(root->right, target, result);
  }
}

void levelOrderTraversal(Node *root) {
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
int minElement(Node *root) {
  while (root->left) {
    root = root->left;
  }
  return root->data;
}
int maxElement(Node *root) {
  while (root->right) {
    root = root->right;
  }
  return root->data;
}
Node *deleteNode(Node *root, int val) {
  if (!root) {
    return NULL;
  }
  if (root->data == val) {
    if (!root->left && !root->right) {
      delete root;
      return NULL;
    } else if (!root->left || !root->right) {
      Node *temp;
      if (root->left) {
        temp = root->left;
      } else {
        temp = root->right;
      }
      delete root;
      return temp;
    }
    if (root->left && root->right) {
      int temp = minElement(root->right);
      root->data = temp;
      root->right = deleteNode(root->right, temp);
    }
  } else if (root->data < val) {
    root->right = deleteNode(root->right, val);
  } else {
    root->left = deleteNode(root->left, val);
  }
  return root;
}
int main() {

  Node *root = NULL;
  // 2 5 8 3 1 11 7 6 -1
  cout << "Enter Data to Insert in BST" << endl;
  takeInput(root);
  cout << "Printing the BST" << endl;
  levelOrderTraversal(root);
  Node *result = NULL;
  int target = 11;
  searchInBST(root, target, result);
  cout << "Result Node is: " << result->data << endl;
  cout << "minElement in BST is: " << minElement(root) << endl;
  cout << "maxElement in BST is: " << maxElement(root) << endl;
  int val = 3;
  cout << "Deleted BST node deleted is: " << val << endl;
  levelOrderTraversal(deleteNode(root, val));
  return 0;
}
