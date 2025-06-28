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
  if (root == NULL) {
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

Node *buildTree(Node *root) {
  int data;
  cout << "Enter the data: ";
  cin >> data;
  if (data == -1) {
    return NULL;
  }
  root = new Node(data);
  cout << "Enter the data to insert in left of node " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data to insert in right of node " << data << endl;
  root->right = buildTree(root->right);
  return root;
}
vector<int> morrisPostorderTraversal(Node *root) {
  vector<int> ans;
  while (root) {
    if (!root->left) {
      ans.push_back(root->data);
      root = root->right;
    } else {
      Node *curr = root->left;
      while (curr->right && curr->right != root) {
        curr = curr->right;
      }
      if (curr->right == NULL) {
        curr->right = root;
        root = root->left;
      } else {
        /*ans.push_back(root->data);*/
        curr->right = NULL;
        root = root->right;
      }
    }
  }
  return ans;
}
vector<int> morrisPreorderTraversal(Node *root) {
  vector<int> ans;
  while (root) {
    if (!root->left) {
      ans.push_back(root->data);
      root = root->right;
    } else {
      Node *curr = root->left;
      while (curr->right && curr->right != root) {
        curr = curr->right;
      }
      if (curr->right == NULL) {
        ans.push_back(root->data);
        curr->right = root;
        root = root->left;
      } else {
        curr->right = NULL;
        root = root->right;
      }
    }
  }
  return ans;
}
vector<int> morrisTraversal(Node *root) {
  vector<int> ans;
  while (root) {
    if (!root->left) {
      ans.push_back(root->data);
      root = root->right;
    } else {
      Node *curr = root->left;
      while (curr->right && curr->right != root) {
        curr = curr->right;
      }
      if (curr->right == NULL) {
        curr->right = root;
        root = root->left;
      } else {
        curr->right = NULL;
        ans.push_back(root->data);
        root = root->right;
      }
    }
  }
  return ans;
}
int main() {
  Node *root = NULL;
  // 1 2 -1 -1 3 4 -1 -1 5 -1 -1
  // 1 2 4 -1 -1 5 6 -1 -1 7 8 -1 -1 -1 3 9 -1 11 -1 -1 10 -1 -1
  root = buildTree(root);
  cout << endl;
  levelOrderTraversal(root);
  vector<int> postorder = morrisPostorderTraversal(root);
  for (auto it : postorder) {
    cout << it << " ";
  }
  cout << endl;
}
